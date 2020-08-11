/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "pcc.y" /* yacc.c:339  */

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

#line 90 "pcc.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pcc.h".  */
#ifndef YY_YY_PCC_H_INCLUDED
# define YY_YY_PCC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    EQ = 260,
    NE = 261,
    LE = 262,
    GE = 263,
    UNOP = 264,
    IDENT = 265,
    EOL = 266,
    COMA = 267,
    PUNTOYCOMA = 268,
    CORCHETES = 269,
    WRITE = 270,
    SIN = 271,
    COS = 272,
    TAN = 273,
    READ = 274,
    IF = 275,
    ELSE = 276,
    FOR = 277,
    ASIN = 278,
    ACOS = 279,
    ATAN = 280,
    WHILE = 281,
    CEIL = 282,
    FLOOR = 283,
    EXP = 284,
    LOG = 285,
    FLOAT = 286,
    STR = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "pcc.y" /* yacc.c:355  */

    struct sStackType {
    unsigned char   flag;
        union {
        double         vFloat;
        char          *vStr;
        struct ast_s  *ast;
        }   u;
    }   s;

#line 174 "pcc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PCC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "pcc.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,     2,     2,     2,     2,     2,
      42,    43,    13,    11,     2,    12,     2,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,     2,
       9,    41,    10,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    67,    74,    78,    83,    91,    96,   101,
     106,   111,   116,   122,   125,   129,   133,   142,   147,   153,
     158,   166,   175,   184,   189,   198,   203,   208,   213,   218,
     223,   228,   233,   238,   243,   248,   253,   258,   263,   268,
     272,   277,   281,   286,   291,   297,   304,   309,   315,   320,
     325,   331,   337,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "EQ", "NE", "LE", "GE",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'^'", "'!'", "UNOP", "IDENT",
  "EOL", "COMA", "PUNTOYCOMA", "CORCHETES", "WRITE", "SIN", "COS", "TAN",
  "READ", "IF", "ELSE", "FOR", "ASIN", "ACOS", "ATAN", "WHILE", "CEIL",
  "FLOOR", "EXP", "LOG", "FLOAT", "STR", "'='", "'('", "')'", "'?'", "':'",
  "$accept", "prog", "progelem", "statement", "ternary", "ifstmt",
  "whilestmt", "forstmt", "body", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    60,
      62,    43,    45,    42,    47,    94,    33,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    61,    40,    41,    63,    58
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     157,   331,   331,   331,   -32,  -101,  -101,   -31,   -29,   -26,
       1,     3,    13,    39,    41,    64,    67,    69,    76,    90,
      92,    94,  -101,   331,    89,  -101,    28,  -101,  -101,  -101,
     371,  -101,  -101,  -101,  -101,   331,    -6,   331,   331,   331,
      -1,   331,   302,   331,   331,   331,   331,   331,   331,   331,
     331,   -36,   371,  -101,  -101,  -101,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,    -7,
      -5,    -3,     5,     7,     9,    48,    84,    36,   302,    59,
      86,    95,    97,   114,   119,   121,   123,  -101,   331,   383,
     394,   405,   405,    62,    62,    62,    62,     8,     8,   127,
     127,   127,  -101,   331,   125,   129,  -101,  -101,  -101,   132,
     130,   137,   331,  -101,  -101,  -101,   150,  -101,  -101,  -101,
    -101,   126,   162,  -101,  -101,  -101,   131,   158,   191,   167,
     331,   179,   180,   302,   181,   302,   163,  -101,  -101,  -101,
     196,   210,   211,   186,   302,   215,   203,  -101,   217,  -101,
     222,   244,   239,  -101,   302,   240,   273,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    43,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     2,     0,    15,    14,    16,
      13,    43,    39,    40,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     1,     3,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     7,     0,     0,     0,    44,    46,    48,     0,
       0,     0,     0,    45,    47,    49,     0,    50,    51,    52,
      53,     0,     0,     9,     8,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    10,    12,    23,
       0,     0,     0,     0,     0,     0,    19,    24,     0,    21,
       0,     0,     0,    22,     0,     0,     0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,   237,     4,    49,  -101,  -101,  -101,  -100,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   139,    51,    27,    28,    29,   140,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    32,    33,    34,    26,     1,     2,    87,    88,    35,
       3,    36,    31,    37,   102,   103,    38,    75,     8,     9,
      10,    66,    67,    68,    30,    14,    15,    16,    26,    18,
      19,    20,    21,    22,    70,   142,    23,    88,   104,    76,
     105,    88,    30,    39,   148,    40,    78,    55,   106,    88,
     107,    88,   108,    88,   155,    41,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    30,   111,
      88,    42,   112,    43,    69,    71,    72,    73,    74,    53,
      77,   109,    79,    80,    81,    82,    83,    84,    85,    86,
       1,     2,   113,    88,   110,     3,    44,     4,     5,    45,
       6,    46,     7,     8,     9,    10,    11,    12,    47,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   114,
      88,    23,    48,    30,    49,    30,    50,   121,   115,    88,
     116,    88,    68,    30,    30,    30,   123,   147,   126,   147,
     124,    30,   122,   125,    30,   147,    30,   117,    88,   127,
     147,   128,   118,    88,   119,    88,   120,    88,     1,     2,
      88,   130,   129,     3,   132,     4,     5,   133,     6,   136,
       7,     8,     9,    10,    11,    12,   135,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     1,     2,    23,
     137,   138,     3,   141,     4,   131,    88,    88,   146,     7,
       8,     9,    10,    11,    12,   143,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     1,     2,    23,   144,
     145,     3,   150,     4,   134,    88,   151,   149,     7,     8,
       9,    10,    11,    12,   152,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     1,     2,    23,   154,   156,
       3,    54,     4,     0,     0,     0,   153,     7,     8,     9,
      10,    11,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     1,     2,    23,     0,     0,     3,
       0,     4,     0,     0,     0,   157,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     1,     2,    23,     0,     0,     3,     0,
       4,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     1,     2,    23,     0,     0,     3,     0,    31,
       0,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,    14,    15,    16,     0,    18,    19,    20,    21,
      22,     0,     0,    23,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     0,    11,    12,    43,    44,    41,
      16,    42,    18,    42,    21,    20,    42,    18,    24,    25,
      26,    13,    14,    15,    24,    31,    32,    33,    24,    35,
      36,    37,    38,    39,    40,   135,    42,    44,    43,    40,
      43,    44,    42,    42,   144,    42,    42,    19,    43,    44,
      43,    44,    43,    44,   154,    42,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    78,    43,
      44,    42,    78,    42,    35,    36,    37,    38,    39,     0,
      41,    43,    43,    44,    45,    46,    47,    48,    49,    50,
      11,    12,    43,    44,    20,    16,    42,    18,    19,    42,
      21,    42,    23,    24,    25,    26,    27,    28,    42,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    43,
      44,    42,    42,   133,    42,   135,    42,    88,    43,    44,
      43,    44,    15,   143,   144,   145,    21,   143,    18,   145,
      21,   151,   103,    21,   154,   151,   156,    43,    44,    22,
     156,   112,    43,    44,    43,    44,    43,    44,    11,    12,
      44,    45,    22,    16,    43,    18,    19,    19,    21,   130,
      23,    24,    25,    26,    27,    28,    19,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    11,    12,    42,
      21,    21,    16,    22,    18,    43,    44,    44,    22,    23,
      24,    25,    26,    27,    28,    19,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    11,    12,    42,    19,
      19,    16,    29,    18,    43,    44,    19,    22,    23,    24,
      25,    26,    27,    28,    22,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    11,    12,    42,    19,    19,
      16,    24,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    11,    12,    42,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    11,    12,    42,    -1,    -1,    16,    -1,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    11,    12,    42,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    16,    18,    19,    21,    23,    24,    25,
      26,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    42,    47,    48,    49,    51,    52,    53,
      55,    18,    55,    55,    55,    41,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    50,    55,     0,    48,    19,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    50,
      40,    50,    50,    50,    50,    18,    40,    50,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    43,    44,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    21,    20,    43,    43,    43,    43,    43,    43,
      20,    43,    49,    43,    43,    43,    43,    43,    43,    43,
      43,    50,    50,    21,    21,    21,    18,    22,    50,    22,
      45,    43,    43,    19,    43,    19,    50,    21,    21,    49,
      54,    22,    54,    19,    19,    19,    22,    49,    54,    22,
      29,    19,    22,    22,    19,    54,    19,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    50,    51,
      51,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     4,     5,     5,
       7,     5,     7,     1,     1,     1,     1,     5,     1,     9,
      15,     9,    11,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     3,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 64 "pcc.y" /* yacc.c:1646  */
    {
      astRoot = appR(';', astRoot, (yyvsp[0].s).u.ast);
    }
#line 1414 "pcc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "pcc.y" /* yacc.c:1646  */
    {
      astRoot = appR(';', astRoot, (yyvsp[0].s).u.ast);
    }
#line 1422 "pcc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 75 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s) = (yyvsp[-1].s);
    }
#line 1430 "pcc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = NULL;
    }
#line 1439 "pcc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 84 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = NULL;
     }
#line 1448 "pcc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('=', mkSlf(IDENT,(yyvsp[-3].s).u.vStr), (yyvsp[-1].s).u.ast);
    }
#line 1457 "pcc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(WRITE, NULL, (yyvsp[-2].s).u.ast);
    }
#line 1466 "pcc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(WRITE, mkSlf(STR,(yyvsp[-2].s).u.vStr), NULL);
    }
#line 1475 "pcc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(WRITE, mkSlf(STR,(yyvsp[-4].s).u.vStr), (yyvsp[-2].s).u.ast);
    }
#line 1484 "pcc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 112 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(READ, NULL, mkSlf(IDENT,(yyvsp[-2].s).u.vStr));
    }
#line 1493 "pcc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(READ, mkSlf(STR,(yyvsp[-4].s).u.vStr), mkSlf(IDENT,(yyvsp[-2].s).u.vStr));
    }
#line 1502 "pcc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "pcc.y" /* yacc.c:1646  */
    {
	(yyval.s) =(yyvsp[0].s);
	}
#line 1510 "pcc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 130 "pcc.y" /* yacc.c:1646  */
    {
	(yyval.s) = (yyvsp[0].s);
	}
#line 1518 "pcc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 134 "pcc.y" /* yacc.c:1646  */
    {
	(yyval.s) = (yyvsp[0].s);
	}
#line 1526 "pcc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 143 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('?', (yyvsp[-4].s).u.ast, mkNd(':', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast) );
    }
#line 1535 "pcc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 154 "pcc.y" /* yacc.c:1646  */
    {
	(yyval.s).flag = fAST;
	(yyval.s).u.ast = mkNd(IF, (yyvsp[-6].s).u.ast,(yyvsp[-2].s).u.ast);
	}
#line 1544 "pcc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "pcc.y" /* yacc.c:1646  */
    {
	(yyval.s).flag = fAST;
	(yyval.s).u.ast = mkNd(ELSE, (yyvsp[-12].s).u.ast,mkNd(';',(yyvsp[-8].s).u.ast,(yyvsp[-2].s).u.ast));
	}
#line 1553 "pcc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 167 "pcc.y" /* yacc.c:1646  */
    {
	   (yyval.s).flag = fAST;
	   (yyval.s).u.ast = mkNd(WHILE, (yyvsp[-6].s).u.ast, (yyvsp[-2].s).u.ast);
	   }
#line 1562 "pcc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 176 "pcc.y" /* yacc.c:1646  */
    {
           (yyval.s).flag = fAST;
	   (yyval.s).u.ast = mkNd(FOR,(yyvsp[-8].s).u.ast,mkNd(';',(yyvsp[-7].s).u.ast,mkNd(';',(yyvsp[-6].s).u.ast,(yyvsp[-2].s).u.ast)));
           }
#line 1571 "pcc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 185 "pcc.y" /* yacc.c:1646  */
    {
		(yyval.s).flag = fAST;
		(yyval.s).u.ast = appR(';', NULL, (yyvsp[0].s).u.ast);
		}
#line 1580 "pcc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 190 "pcc.y" /* yacc.c:1646  */
    {
		(yyval.s).flag = fAST;
		(yyval.s).u.ast = appR(';', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		}
#line 1589 "pcc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(OR, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1598 "pcc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 204 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(AND, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1607 "pcc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 209 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(EQ, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1616 "pcc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 214 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(NE, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1625 "pcc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 219 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(LE, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1634 "pcc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 224 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(GE, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1643 "pcc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 229 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('<', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1652 "pcc.c" /* yacc.c:1646  */
    break;

  case 32:
#line 234 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('>', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1661 "pcc.c" /* yacc.c:1646  */
    break;

  case 33:
#line 239 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('+', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1670 "pcc.c" /* yacc.c:1646  */
    break;

  case 34:
#line 244 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('-', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1679 "pcc.c" /* yacc.c:1646  */
    break;

  case 35:
#line 249 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('*', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1688 "pcc.c" /* yacc.c:1646  */
    break;

  case 36:
#line 254 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('/', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1697 "pcc.c" /* yacc.c:1646  */
    break;

  case 37:
#line 259 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('^', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
    }
#line 1706 "pcc.c" /* yacc.c:1646  */
    break;

  case 38:
#line 264 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('!',NULL,(yyvsp[0].s).u.ast);
    }
#line 1715 "pcc.c" /* yacc.c:1646  */
    break;

  case 39:
#line 269 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s) = (yyvsp[0].s);
    }
#line 1723 "pcc.c" /* yacc.c:1646  */
    break;

  case 40:
#line 273 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd('-',NULL,(yyvsp[0].s).u.ast);
    }
#line 1732 "pcc.c" /* yacc.c:1646  */
    break;

  case 41:
#line 278 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s) = (yyvsp[-1].s);
    }
#line 1740 "pcc.c" /* yacc.c:1646  */
    break;

  case 42:
#line 282 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkDlf(FLOAT,(yyvsp[0].s).u.vFloat);
    }
#line 1749 "pcc.c" /* yacc.c:1646  */
    break;

  case 43:
#line 287 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkSlf(IDENT,(yyvsp[0].s).u.vStr);
    }
#line 1758 "pcc.c" /* yacc.c:1646  */
    break;

  case 44:
#line 292 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(SIN,(yyvsp[-1].s).u.ast,NULL);
    }
#line 1767 "pcc.c" /* yacc.c:1646  */
    break;

  case 45:
#line 298 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(ASIN,(yyvsp[-1].s).u.ast,NULL);
    }
#line 1776 "pcc.c" /* yacc.c:1646  */
    break;

  case 46:
#line 305 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(COS,(yyvsp[-1].s).u.ast,NULL);
    }
#line 1785 "pcc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 310 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(ACOS,(yyvsp[-1].s).u.ast,NULL);
    }
#line 1794 "pcc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 316 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(TAN,(yyvsp[-1].s).u.ast,NULL);
    }
#line 1803 "pcc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 321 "pcc.y" /* yacc.c:1646  */
    {
      (yyval.s).flag = fAST;
      (yyval.s).u.ast = mkNd(ATAN,(yyvsp[-1].s).u.ast,NULL);
    }
#line 1812 "pcc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 327 "pcc.y" /* yacc.c:1646  */
    {
        (yyval.s).flag = fAST;
        (yyval.s).u.ast = mkNd(CEIL,(yyvsp[-1].s).u.ast,NULL);
        }
#line 1821 "pcc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 333 "pcc.y" /* yacc.c:1646  */
    {
        (yyval.s).flag = fAST;
        (yyval.s).u.ast = mkNd(FLOOR,(yyvsp[-1].s).u.ast,NULL);
        }
#line 1830 "pcc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 339 "pcc.y" /* yacc.c:1646  */
    {
        (yyval.s).flag = fAST;
        (yyval.s).u.ast = mkNd(EXP,(yyvsp[-1].s).u.ast,NULL);
        }
#line 1839 "pcc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 345 "pcc.y" /* yacc.c:1646  */
    {
        (yyval.s).flag = fAST;
        (yyval.s).u.ast = mkNd(LOG,(yyvsp[-1].s).u.ast,NULL);
        }
#line 1848 "pcc.c" /* yacc.c:1646  */
    break;


#line 1852 "pcc.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 352 "pcc.y" /* yacc.c:1906  */


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


