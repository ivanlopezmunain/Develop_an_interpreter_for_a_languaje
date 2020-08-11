
%{
#include <stdio.h>
#include <string.h>

#include "stduse.h"
#include "pcc.h"
#include "token.h"
#include "astree.h"

#define KWLEN  16
char *keywords[KWLEN] = {
    "acos",
    "asin",
    "atan",
    "ceil",
    "cos",
    "else",
    "exp",
    "floor",
    "for",
    "if",
    "log",
    "read",
    "sin",
    "tan",
    "while",
    "write",
    
};

unsigned keycodes[KWLEN] = {
    ACOS,
    ASIN,
    ATAN,
    CEIL,
    COS,
    ELSE,
    EXP,
    FLOOR,
    FOR,
    IF,
    LOG,
    READ,
    SIN,
    TAN,
    WHILE,
    WRITE,
};

// Declaramos e inicializamos contadores de línea y columna
int	nlin = 1;
int	ncol = 1;

// DECLARACIONES DE FUNCIONES
void IgnoraComentarioMultiLinea(int *, int *);

static void lower(char *s);
static char *readStr(void);

int yywrap(void) { return 1; }
%}

LETTER    ([_a-zA-Z])

DIGIT     ([0-9])
DIGITS    ({DIGIT}+)

EXP       ([eE][-+]?{DIGITS})

FLOAT1    ({DIGITS}"."{DIGITS})
FLOAT2    ({DIGITS}{EXP})
FLOAT3    ({DIGITS}"."{DIGITS}{EXP})

IDENT     (("_")*{LETTER}({LETTER}|{DIGIT})*)

EOL    ([\n])

WSPC      ([ \t\f\r])
WSPCS     ({WSPC}+)

FLOAT     ({FLOAT1}|{FLOAT2}|{FLOAT3})

OP1       ([-+*/=<>?:()!^])
OP2       ("=="|"!="|"<="|">="|"&&"|"||")

STRSTART  (["])

COMA	   ","
PUNTOYCOMA ";"
CORCHETES  ([{}]) 

%%

"/\*"	IgnoraComentarioMultiLinea(&nlin, &ncol);

{WSPC}              ; /* nothing to do, white space */

{IDENT}             {
                        unsigned i = 0;
                        int r=-1;
                        char *res;
                        
                        lower(yytext);

                        while (i<KWLEN && r<0) {
                            if ((r=strcmp(keywords[i],yytext))==0) return keycodes[i];
                            ++i;
                        }

                        yyStr(yylval)=sdup(yytext);
                        yyFlag(yylval)=fIDENT;

                        return IDENT;
                    }

{COMA}            {
                        ++yylineno;
                        return COMA;
                    }


{CORCHETES}            {
                        ++yylineno;
                        return CORCHETES;
                    }


{PUNTOYCOMA}            {
                        ++yylineno;
                        return PUNTOYCOMA;
                    }



{EOL}            {
                        ++yylineno;
                        return EOL;
                    }

{DIGITS}            {
                        long int li;
                        sscanf(yytext,"%ld",&li);
                        yyFloat(yylval) = (double)li;
                        yyFlag(yylval) = fFLOAT;
                        
                        return FLOAT;
                    }
                    
{FLOAT}             {
                        sscanf(yytext,"%lf",&( yyFloat(yylval) ));
                        yyFlag(yylval) = fFLOAT;
                        
                        return FLOAT;
                    }
                    
{STRSTART}          {
                      yyStr(yylval) = readStr();
                      yyFlag(yylval) = fSTR;
                      
                      return STR;
                    }
                    
{OP1}               return yytext[0];

{OP2}               {
                        switch (yytext[0]) {
                            case '=':
                                return EQ;
                            case '!':
                                return NE;
                            case '<':
                                return LE;
                            case '>':
                                return GE;
                            case '&':
                                return AND;
                            case '|':
                                return OR;
                        }
                    }                    
                    
.                   {
                        prError(yylineno,"Carácter inesperado en la entrada: %c [%d]\n",yytext[0],yytext[0],NULL);
                    }

%%

static void lower(char *s) {
    unsigned l = strlen(s);
    while (l>0) {
        --l;
        if (s[l]>='A' && s[l]<='Z') s[l] = s[l]+'a'-'A';
    }
}

static void addStr(char **s, unsigned long *len, char c) {
  char buf[2];
  buf[0] = c;
  buf[1] = '\0';

  if (strlen(*s) >= *len) {
    char *ss;
    ss=xmalloc(*len+1025);
    strcpy(ss,*s);
    xfree(*s);
    *s=ss;
    *len = *len+1024;
  }
  
  strcat(*s,buf);
}


static char *readStr(void) {
  int c;
  char *buff;
  unsigned long len = 256;

  buff=xmalloc(257);
  buff[0]='\0';

  do {
    c = input();

    if (c < ' ') prError(yylineno,"Unexpected symbol in string literal [%d]\n",c,NULL);
    if (c == '"') break;

    if (c=='\\') {
      c == input();
      if (c!='\\' && c !='"') {
        unput(c);
        c = '\\';
      }
    }

    addStr(&buff,&len,c);
    
  } while (1);

  return buff;
}

/*
 * Procesamos comentarios multilinea sin expresiones regulares
 */
void IgnoraComentarioMultiLinea(int *nl, int *nc)
{
  int t, c;
  int done = 0;

  // DBG:
#ifdef	VERBOSE
  fprintf(stderr, "___DBG: Procesando comentario (%d, %d)-{", *nl, *nc);
#endif
  while(!done) {
    switch(t=input())
    {
      /* EOF: Bad comment */
      case EOF:
        fprintf(stderr, "___ERROR: unclosed comment, expect */\n");
        done = 1 ;
      break;

      case '*':
        if((c = input()) == '/') { *nc = *nc + 2 ; done = 1; }
	else			 { *nc = *nc + 1 ; unput(c); }
#ifdef	VERBOSE
        if (!done) { fputc(t, stderr); fputc(c, stderr) ; }
#endif
      break;

      default:
	if (t=='\n') { *nl = *nl + 1 ; *nc = 1 ;}
	else	     { *nc = *nc + 1 ; }
#ifdef	VERBOSE
        fputc(t, stderr);
#endif
      break;
    }
  }
#ifdef	VERBOSE
  fprintf(stderr, "}-(%d, %d)\n", *nl, *nc);
#endif
}

/* -- EOF -- */

