
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stduse.h"
#include "symtab.h"
#include "astree.h"
#include "token.h"

#define IN_PARSER
#include "pcc.h"


int yylex(void);
extern int yylineno;

FILE *fIn;

int yyerror(char *str);

static ast_t *astRoot = NULL;
%}

%union {
    struct sStackType {
    unsigned char   flag;
        union {
        double         vFloat;
        char          *vStr;
        struct ast_s  *ast;
        }   u;
    }   s;
}

%left OR
%left AND

%nonassoc EQ NE
%nonassoc LE GE '<' '>'

%left '+' '-'
%left '*' '/'

%right '^'

%right '!'

%right UNOP

%token <s> IDENT  EOL COMA PUNTOYCOMA CORCHETES
%term  WRITE SIN COS TAN READ IF ELSE FOR  ASIN ACOS ATAN WHILE CEIL FLOOR EXP LOG 
%token <s> FLOAT
%token <s> STR

%type <s> expr ifstmt whilestmt forstmt body ternary  statement  progelem prog 


%%

prog
  : progelem
    {
      astRoot = appR(';', astRoot, $1.u.ast);
    }
  | prog progelem
    {
      astRoot = appR(';', astRoot, $2.u.ast);
    }
  ;

progelem
  : statement EOL
    {
      $$ = $1;
    }
  | EOL
    {
      $$.flag = fAST;
      $$.u.ast = NULL;
    }
  | PUNTOYCOMA
    {
      $$.flag = fAST;
      $$.u.ast = NULL;
     }
  ;

statement
  : IDENT '=' ternary PUNTOYCOMA
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('=', mkSlf(IDENT,$1.u.vStr), $3.u.ast);
    }
  | WRITE '(' ternary ')' PUNTOYCOMA
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(WRITE, NULL, $3.u.ast);
    }
  | WRITE  '('STR ')' PUNTOYCOMA 
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(WRITE, mkSlf(STR,$3.u.vStr), NULL);
    }
  | WRITE '(' STR COMA  ternary')' PUNTOYCOMA 
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(WRITE, mkSlf(STR,$3.u.vStr), $5.u.ast);
    }
  | READ '('IDENT')' PUNTOYCOMA
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(READ, NULL, mkSlf(IDENT,$3.u.vStr));
    }
  | READ '('STR COMA IDENT')' PUNTOYCOMA
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(READ, mkSlf(STR,$3.u.vStr), mkSlf(IDENT,$5.u.vStr));
    }

  | expr
    /* $$ = $1 */
  
  | whilestmt
  	{
	$$ =$1;
	}
  | ifstmt
  	{
	$$ = $1;
	}
  | forstmt
  	{
	$$ = $1;
	}
  

;

ternary
  : ternary '?' ternary ':' ternary
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('?', $1.u.ast, mkNd(':', $3.u.ast, $5.u.ast) );
    }
  | expr
    /* $$ = $1 */
  ;


ifstmt  
   : IF  '(' ternary ')' CORCHETES EOL  body EOL   CORCHETES
        {
	$$.flag = fAST;
	$$.u.ast = mkNd(IF, $3.u.ast,$7.u.ast);
	}
   | IF  '(' ternary ')' CORCHETES EOL  body EOL   CORCHETES ELSE CORCHETES EOL body EOL CORCHETES
        {
	$$.flag = fAST;
	$$.u.ast = mkNd(ELSE, $3.u.ast,mkNd(';',$7.u.ast,$13.u.ast));
	}
        ;
   
whilestmt
	: WHILE '(' ternary ')' CORCHETES EOL  body EOL  CORCHETES
	   {
	   $$.flag = fAST;
	   $$.u.ast = mkNd(WHILE, $3.u.ast, $7.u.ast);
	   }
	   ;


forstmt
        : FOR '(' statement statement ternary')' CORCHETES EOL body EOL CORCHETES
           {
           $$.flag = fAST;
	   $$.u.ast = mkNd(FOR,$3.u.ast,mkNd(';',$4.u.ast,mkNd(';',$5.u.ast,$9.u.ast)));
           }
           ;


body
	: statement  
		{
		$$.flag = fAST;
		$$.u.ast = appR(';', NULL, $1.u.ast);
		}
	| body EOL statement 
		{
		$$.flag = fAST;
		$$.u.ast = appR(';', $1.u.ast, $3.u.ast);
		}
		;


expr
  : expr OR expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(OR, $1.u.ast, $3.u.ast);
    }
  | expr AND expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(AND, $1.u.ast, $3.u.ast);
    }
  | expr EQ expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(EQ, $1.u.ast, $3.u.ast);
    }
  | expr NE expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(NE, $1.u.ast, $3.u.ast);
    }
  | expr LE expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(LE, $1.u.ast, $3.u.ast);
    }
  | expr GE expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(GE, $1.u.ast, $3.u.ast);
    }
  | expr '<' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('<', $1.u.ast, $3.u.ast);
    }
  | expr '>' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('>', $1.u.ast, $3.u.ast);
    }
  | expr '+' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('+', $1.u.ast, $3.u.ast);
    }
  | expr '-' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('-', $1.u.ast, $3.u.ast);
    }
  | expr '*' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('*', $1.u.ast, $3.u.ast);
    }
  | expr '/' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('/', $1.u.ast, $3.u.ast);
    }
  | expr '^' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('^', $1.u.ast, $3.u.ast);
    }
  | '!' expr
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('!',NULL,$2.u.ast);
    }
  | '+' expr %prec UNOP
    {
      $$ = $2;
    }
  | '-' expr %prec UNOP
    {
      $$.flag = fAST;
      $$.u.ast = mkNd('-',NULL,$2.u.ast);
    }
  | '(' ternary ')'
    {
      $$ = $2;
    }
  | FLOAT
    {
      $$.flag = fAST;
      $$.u.ast = mkDlf(FLOAT,$1.u.vFloat);
    }
  | IDENT
    {
      $$.flag = fAST;
      $$.u.ast = mkSlf(IDENT,$1.u.vStr);
    }
  | SIN '(' ternary ')'
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(SIN,$3.u.ast,NULL);
    }

  | ASIN '(' ternary ')'
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(ASIN,$3.u.ast,NULL);
    }


  | COS '(' ternary ')'
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(COS,$3.u.ast,NULL);
    }
  | ACOS '(' ternary ')'
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(ACOS,$3.u.ast,NULL);
    }

  | TAN '(' ternary ')'
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(TAN,$3.u.ast,NULL);
    }
  | ATAN '(' ternary ')'
    {
      $$.flag = fAST;
      $$.u.ast = mkNd(ATAN,$3.u.ast,NULL);
    }
  | CEIL '(' ternary ')'

    	{
        $$.flag = fAST;
        $$.u.ast = mkNd(CEIL,$3.u.ast,NULL);
        }
  | FLOOR '(' ternary ')'

        {
        $$.flag = fAST;
        $$.u.ast = mkNd(FLOOR,$3.u.ast,NULL);
        }
  | EXP '(' ternary ')'

        {
        $$.flag = fAST;
        $$.u.ast = mkNd(EXP,$3.u.ast,NULL);
        }
  | LOG '(' ternary ')'

        {
        $$.flag = fAST;
        $$.u.ast = mkNd(LOG,$3.u.ast,NULL);
        }
  ;


%%

int yyerror(char *str) {
  prError(yylineno,"%s\n",str,NULL);
  return 1;
}

extern FILE *yyin;

int main(int argc, char *argv[]) {
  exitOnError();

  if (argc!=2) {
    puts("\nUsage: demo <filename>\n");
    fflush(stdout);
    return 1;
  }

  if ((fIn=fopen(argv[1],"rb"))==NULL) {
    fprintf(stderr,"\nCannot open file: %s\n\n",argv[1]);
    fflush(stderr);
    return 1;
  }

  yyin = fIn;

  setFilename( argv[1] );

  if (yyparse() != 0) {
    fclose(fIn);
    prError(yylineno,"Parsing aborted due to errors in input\n",NULL);
  }

  fclose(fIn);

  if (astRoot != NULL) {
    evaluate(astRoot);
  } else {
    prError(yylineno,"No parse output provided, aborting evaluation\n",NULL);
  }

  return 0;
}

/* -- EOF -- */


