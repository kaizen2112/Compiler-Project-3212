
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "parser.y"

# include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
#include <stdbool.h>
int yylex(void);
void yyerror(char *s);
int hash_table(char *s);
int symi[1000],stored[1000]={0},declared[1000]={0},type[1000];
float symf[1000];
char symstr[1000][100];

float switchval;
bool is_match = false;
bool execute_else = true;
bool printFromStmts = false; /* invoked when print statements are inside if else or switch block */
bool fromCase = false;
bool hasPrinted = false, canPrint = false;/* triggered false when condition is met & already another block is executed */
int type_of_var;
int ifstmtcnt = 0;
float caseARG = 0;

// loop variables
bool for_loop = false;
int start;
int end;
int inc;

FILE *fptr; // use appropriate location if you are using MacOS or Linux


/* Line 189 of yacc.c  */
#line 107 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SLCOM = 258,
     NUMERIC = 259,
     WHOLE = 260,
     TEXT = 261,
     MATCH = 262,
     CHECK = 263,
     NOMATCH = 264,
     SHOW = 265,
     LPT = 266,
     RPT = 267,
     LCB = 268,
     RCB = 269,
     LTB = 270,
     RTB = 271,
     CM = 272,
     SM = 273,
     ADD = 274,
     SUB = 275,
     MULFN = 276,
     SUMFN = 277,
     MUL = 278,
     DIV = 279,
     REPEAT = 280,
     COL = 281,
     GT = 282,
     LT = 283,
     EQL = 284,
     IF = 285,
     ELSEIF = 286,
     ELSE = 287,
     VOIDMAIN = 288,
     UNTIL = 289,
     DO = 290,
     ITER = 291,
     PALINDROMEFN = 292,
     VAR = 293,
     STRING = 294,
     NUMi = 295,
     NUMf = 296,
     EQU = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 37 "parser.y"

	int i;
	float f;
  char str[100];



/* Line 214 of yacc.c  */
#line 193 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    12,    14,    18,    21,    25,    28,
      32,    36,    39,    42,    45,    48,    57,    59,    68,    73,
      81,    83,    92,    97,   105,   120,   123,   125,   127,   129,
     131,   135,   137,   141,   145,   149,   153,   158,   160,   162,
     164,   166,   168,   170,   174,   180,   182,   186,   190,   194,
     196,   200,   203,   207,   211,   213,   217,   221,   223,   225,
     232,   239,   244,   249,   251,   253,   255,   257,   259,   261,
     263,   264
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    -1,    33,    11,    12,    13,    46,
      14,    -1,    72,    -1,    63,    18,    46,    -1,    18,    46,
      -1,    53,    18,    46,    -1,    73,    46,    -1,    57,    18,
      46,    -1,    56,    18,    46,    -1,    47,    46,    -1,    49,
      46,    -1,    51,    46,    -1,    52,    46,    -1,    69,    11,
      59,    12,    13,    46,    14,    48,    -1,    72,    -1,    31,
      11,    59,    12,    13,    46,    14,    48,    -1,    68,    13,
      46,    14,    -1,    70,    11,    59,    12,    13,    50,    14,
      -1,    72,    -1,     7,    11,    59,    12,    13,    46,    14,
      50,    -1,    71,    13,    46,    14,    -1,    25,    11,    62,
      12,    13,    46,    14,    -1,    34,    11,    61,    12,    17,
      36,    15,    60,    16,    35,    26,    13,    46,    14,    -1,
      54,    55,    -1,     4,    -1,     5,    -1,     6,    -1,    38,
      -1,    55,    17,    38,    -1,    56,    -1,    55,    17,    56,
      -1,    38,    26,    40,    -1,    38,    26,    41,    -1,    38,
      26,    39,    -1,    10,    11,    58,    12,    -1,    39,    -1,
      38,    -1,    63,    -1,    63,    -1,    63,    -1,    63,    -1,
      63,    26,    63,    -1,    63,    26,    63,    26,    63,    -1,
      66,    -1,    63,    27,    64,    -1,    63,    28,    64,    -1,
      63,    29,    64,    -1,    64,    -1,    11,    63,    12,    -1,
      20,    63,    -1,    64,    19,    65,    -1,    64,    20,    65,
      -1,    65,    -1,    65,    23,    67,    -1,    65,    24,    67,
      -1,    67,    -1,    66,    -1,    22,    11,    67,    17,    67,
      12,    -1,    21,    11,    67,    17,    67,    12,    -1,    37,
      11,    39,    12,    -1,    37,    11,    38,    12,    -1,    40,
      -1,    41,    -1,    38,    -1,    32,    -1,    30,    -1,     8,
      -1,     9,    -1,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    58,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    75,    81,    84,    86,    91,
     101,   102,   103,   106,   111,   116,   118,   118,   118,   120,
     121,   122,   123,   126,   150,   174,   200,   202,   228,   304,
     323,   351,   355,   363,   376,   390,   391,   399,   407,   415,
     418,   421,   426,   427,   428,   431,   431,   431,   431,   433,
     434,   435,   468,   502,   503,   504,   526,   531,   539,   548,
     554,   555
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SLCOM", "NUMERIC", "WHOLE", "TEXT",
  "MATCH", "CHECK", "NOMATCH", "SHOW", "LPT", "RPT", "LCB", "RCB", "LTB",
  "RTB", "CM", "SM", "ADD", "SUB", "MULFN", "SUMFN", "MUL", "DIV",
  "REPEAT", "COL", "GT", "LT", "EQL", "IF", "ELSEIF", "ELSE", "VOIDMAIN",
  "UNTIL", "DO", "ITER", "PALINDROMEFN", "VAR", "STRING", "NUMi", "NUMf",
  "EQU", "$accept", "program", "StartProgram", "stmt", "ifstmt",
  "elifstmt", "switchstmt", "allCases", "repeatstmt", "untildostmt",
  "declarations", "type", "declaration", "assignment", "showstmt",
  "displayArgs", "arg", "iteratorArg", "whileArgs", "forArgs", "exp",
  "word", "term", "function", "factor", "ELSEPredicate", "IFPredicate",
  "CHECKPredicate", "NOMATCHPredicate", "epsilon", "commentstmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    48,    48,    48,    49,
      50,    50,    50,    51,    52,    53,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    56,    57,    58,    58,    58,
      59,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    67,    67,    67,    68,    69,    70,    71,
      72,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     1,     3,     2,     3,     2,     3,
       3,     2,     2,     2,     2,     8,     1,     8,     4,     7,
       1,     8,     4,     7,    14,     2,     1,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     3,     3,     1,
       3,     2,     3,     3,     1,     3,     3,     1,     1,     6,
       6,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,    70,    71,    26,
      27,    28,    68,     0,     0,    70,     0,     0,     0,     0,
      67,     0,     0,    65,    63,    64,     0,    70,    70,    70,
      70,     0,     0,     0,     0,     0,    49,    54,    45,    57,
       0,     0,     4,    70,     0,    65,     0,     6,    51,     0,
       0,     0,     0,     0,     0,     3,    11,    12,    13,    14,
      70,    29,    25,    31,    70,    70,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,    65,    37,     0,
      39,    50,     0,     0,     0,     0,     0,    42,     0,     0,
      35,    33,    34,     7,     0,    10,     9,     5,    46,    58,
      47,    48,    52,    53,    55,    56,     0,    40,     0,    36,
       0,     0,     0,     0,     0,    62,    61,    30,    32,     0,
       0,     0,     0,    70,    43,     0,    70,    70,    60,    59,
       0,     0,     0,     0,     0,    69,     0,     0,    20,    23,
      44,     0,    70,     0,    19,    70,     0,    41,     0,    66,
      15,     0,    16,     0,     0,     0,     0,    70,     0,    22,
       0,     0,     0,    70,     0,     0,    18,     0,    70,    70,
      70,     0,     0,    21,    24,    70,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    26,    27,   150,    28,   136,    29,    30,
      31,    32,    62,    33,    34,    79,   106,   146,    86,    84,
      35,    36,    37,    38,    39,   151,    40,    41,   137,    42,
      43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -123
static const yytype_int16 yypact[] =
{
     -17,    22,    31,  -123,    40,  -123,    30,    69,  -123,  -123,
    -123,  -123,  -123,    48,    75,    69,    75,    53,    55,    67,
    -123,    70,    77,    50,  -123,  -123,    84,    69,    69,    69,
      69,    82,    64,   102,   123,    96,    51,    81,    98,  -123,
     132,   136,  -123,    69,    -3,  -123,    -2,  -123,   122,     6,
       6,    75,    75,    54,    15,  -123,  -123,  -123,  -123,  -123,
      69,    50,   135,  -123,    69,    69,    69,    20,    20,    20,
      20,    20,     6,     6,    75,    75,  -123,   143,  -123,   144,
      56,  -123,   140,   141,   147,    -5,   148,    56,   149,   150,
    -123,  -123,  -123,  -123,   125,  -123,  -123,  -123,    51,  -123,
      51,    51,    81,    81,  -123,  -123,   152,    56,   153,  -123,
       6,     6,   154,    75,   151,  -123,  -123,    50,  -123,   156,
     157,   159,   160,    69,   111,   130,    69,     2,  -123,  -123,
     161,    75,   158,   162,   163,  -123,   164,   166,  -123,  -123,
      56,    75,   114,    75,  -123,    69,   165,    56,   169,  -123,
    -123,   170,  -123,   172,   168,   142,    75,    69,   173,  -123,
     167,   175,   171,    69,   176,   177,  -123,   174,    69,    69,
       2,   178,   180,  -123,  -123,   114,  -123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,   -15,  -123,    16,  -123,    25,  -123,  -123,
    -123,  -123,  -123,   -29,  -123,  -123,   -74,  -123,  -123,  -123,
     -12,    59,    79,    65,   -43,  -123,  -123,  -123,  -123,  -122,
    -123
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      47,   108,    46,    63,    48,   138,    82,    83,    14,   134,
      81,   135,    56,    57,    58,    59,     1,    16,    17,    18,
     152,   113,    67,    68,    69,    67,    68,    69,    76,   104,
     105,     5,    80,     4,    22,    77,    78,    24,    25,    85,
      87,    17,    18,     7,    45,    93,    24,    25,   138,    95,
      96,    97,     6,   152,    90,    91,    92,    22,    45,    44,
      24,    25,   107,   107,    49,   118,    50,   121,   122,   153,
      70,    71,     8,     9,    10,    11,    54,    12,    51,    13,
      14,    52,   161,    67,    68,    69,    14,    15,    53,    16,
      17,    18,    88,    89,    19,    16,    17,    18,    55,    20,
      60,   124,    61,    21,    72,    73,    22,    23,   130,    24,
      25,   133,    22,    45,    66,    24,    25,   -58,   -58,   140,
      64,   -58,   -58,    67,    68,    69,    98,   100,   101,   147,
     154,   107,    99,    99,    99,    99,    99,   131,    67,    68,
      69,    65,   162,    74,   107,   148,   149,    75,   167,   102,
     103,    69,    94,   171,   172,   -38,   109,   110,   111,   112,
     114,   115,   116,   117,   119,   120,   132,   123,   125,   126,
     127,   128,   129,   141,   143,   139,   142,   160,   144,   145,
     156,   155,   159,   157,   158,   166,   163,   165,   170,   168,
     169,   176,   174,   164,   175,   173
};

static const yytype_uint8 yycheck[] =
{
      15,    75,    14,    32,    16,   127,    49,    50,    11,     7,
      12,     9,    27,    28,    29,    30,    33,    20,    21,    22,
     142,    26,    27,    28,    29,    27,    28,    29,    43,    72,
      73,     0,    44,    11,    37,    38,    39,    40,    41,    51,
      52,    21,    22,    13,    38,    60,    40,    41,   170,    64,
      65,    66,    12,   175,    39,    40,    41,    37,    38,    11,
      40,    41,    74,    75,    11,    94,    11,   110,   111,   143,
      19,    20,     3,     4,     5,     6,    26,     8,    11,    10,
      11,    11,   156,    27,    28,    29,    11,    18,    11,    20,
      21,    22,    38,    39,    25,    20,    21,    22,    14,    30,
      18,   113,    38,    34,    23,    24,    37,    38,   123,    40,
      41,   126,    37,    38,    18,    40,    41,    19,    20,   131,
      18,    23,    24,    27,    28,    29,    67,    68,    69,   141,
     145,   143,    67,    68,    69,    70,    71,    26,    27,    28,
      29,    18,   157,    11,   156,    31,    32,    11,   163,    70,
      71,    29,    17,   168,   169,    12,    12,    17,    17,    12,
      12,    12,    12,    38,    12,    12,    36,    13,    17,    13,
      13,    12,    12,    15,    11,    14,    14,    35,    14,    13,
      11,    16,    14,    13,    12,    14,    13,    12,    14,    13,
      13,   175,    14,    26,    14,   170
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    44,    45,    11,     0,    12,    13,     3,     4,
       5,     6,     8,    10,    11,    18,    20,    21,    22,    25,
      30,    34,    37,    38,    40,    41,    46,    47,    49,    51,
      52,    53,    54,    56,    57,    63,    64,    65,    66,    67,
      69,    70,    72,    73,    11,    38,    63,    46,    63,    11,
      11,    11,    11,    11,    26,    14,    46,    46,    46,    46,
      18,    38,    55,    56,    18,    18,    18,    27,    28,    29,
      19,    20,    23,    24,    11,    11,    46,    38,    39,    58,
      63,    12,    67,    67,    62,    63,    61,    63,    38,    39,
      39,    40,    41,    46,    17,    46,    46,    46,    64,    66,
      64,    64,    65,    65,    67,    67,    59,    63,    59,    12,
      17,    17,    12,    26,    12,    12,    12,    38,    56,    12,
      12,    67,    67,    13,    63,    17,    13,    13,    12,    12,
      46,    26,    36,    46,     7,     9,    50,    71,    72,    14,
      63,    15,    14,    11,    14,    13,    60,    63,    31,    32,
      48,    68,    72,    59,    46,    16,    11,    13,    12,    14,
      35,    59,    46,    13,    26,    12,    14,    46,    13,    13,
      14,    46,    46,    50,    14,    14,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { printf("\nSuccessfully COMPILED...... \n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    {printf("START function invoked\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {
	canPrint = false;
	hasPrinted = false;
	printFromStmts = false;
	ifstmtcnt = 0;
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {
		printf("####ENDING OF IF ELSE STATEMENTS####\n___________________________________________\n");
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {
		printf("####ENDING OF IF ELSE STATEMENTS####\n___________________________________________\n");
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {
	printf("####ENDING OF CASE STATEMENTS####\n___________________________________________\n");
	canPrint = false;
	hasPrinted = false;
	printFromStmts = false;
	caseARG = -1;
	fromCase = false;

;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {
	for_loop = false;
	printf("####ENDING of Repeat loop####\n___________________________________________\n");
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {
	for_loop = false;
	printf("####ENDING of Until do loop####\n___________________________________________\n");
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {printf("___________________________________________\nVariables properly declared.\n\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf("Type declared is : Numeric\n___________________________________________\n");type_of_var=1;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf("Type declared is : Whole\n___________________________________________\n");type_of_var=2;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf("Type declared is : Text\n___________________________________________\n");type_of_var=3;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {declared[(yyvsp[(1) - (1)].i)] = 1;type[(yyvsp[(1) - (1)].i)] = type_of_var;printf("Variable %d has been declared.\n",(yyvsp[(1) - (1)].i));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {declared[(yyvsp[(3) - (3)].i)] = 1;type[(yyvsp[(3) - (3)].i)] = type_of_var;printf("Variable %d has been declared.\n",(yyvsp[(3) - (3)].i));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {
			if(declared[(yyvsp[(1) - (3)].i)]){
				if(type[(yyvsp[(1) - (3)].i)]==2){
						stored[(yyvsp[(1) - (3)].i)] = 1;
						symi[(yyvsp[(1) - (3)].i)] = (yyvsp[(3) - (3)].i);
						printf("Value of %d has been assigned to variable %d.\n",symi[(yyvsp[(1) - (3)].i)],(yyvsp[(1) - (3)].i));
				}
				else{
					yyerror("Type of variable and assignment type donot match.");
				}
			}
			else{
				if(type_of_var==2){
		        declared[(yyvsp[(1) - (3)].i)] = 1;
		        stored[(yyvsp[(1) - (3)].i)] = 1;
		        type[(yyvsp[(1) - (3)].i)] = type_of_var;
		        symi[(yyvsp[(1) - (3)].i)] = (yyvsp[(3) - (3)].i);
		        printf("Value of %d has been assigned to variable %d.\n",symi[(yyvsp[(1) - (3)].i)],(yyvsp[(1) - (3)].i));
		    }
		    else{
		      yyerror("Type of variable and assignment type donot match.");
		    }
			}
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {
						if(declared[(yyvsp[(1) - (3)].i)]){
							if(type[(yyvsp[(1) - (3)].i)]==1){
									stored[(yyvsp[(1) - (3)].i)] = 1;
									symf[(yyvsp[(1) - (3)].i)] = (yyvsp[(3) - (3)].f);
									printf("Value of %f has been assigned to variable %d.\n",symf[(yyvsp[(1) - (3)].i)],(yyvsp[(1) - (3)].i));
							}
							else{
								yyerror("Type of variable and assignment type donot match.");
							}
						}
						else{
              if(type_of_var==1){
                  declared[(yyvsp[(1) - (3)].i)] = 1;
                  stored[(yyvsp[(1) - (3)].i)] = 1;
                  type[(yyvsp[(1) - (3)].i)] = type_of_var;
                  symf[(yyvsp[(1) - (3)].i)] = (yyvsp[(3) - (3)].f);
                  printf("Value of %f has been assigned to variable %d.\n",symf[(yyvsp[(1) - (3)].i)],(yyvsp[(1) - (3)].i));
              }
              else{
                yyerror("Type of variable and assignment type donot match.");
              }
						}
          ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    {
						if(declared[(yyvsp[(1) - (3)].i)]){
							if(type[(yyvsp[(1) - (3)].i)]==3){
									stored[(yyvsp[(1) - (3)].i)] = 1;
									 strcpy(symstr[(yyvsp[(1) - (3)].i)], (yyvsp[(3) - (3)].str));
	 							 	 printf("Value of %s has been assigned to variable %d.\n",symstr[(yyvsp[(1) - (3)].i)],(yyvsp[(1) - (3)].i));
							}
							else{
								yyerror("Type of variable and assignment type donot match.");
							}
						}
						else{
	              if(type_of_var==3){
	                  declared[(yyvsp[(1) - (3)].i)] = 1;
	                  stored[(yyvsp[(1) - (3)].i)] = 1;
	                  type[(yyvsp[(1) - (3)].i)] = type_of_var;
	                  strcpy(symstr[(yyvsp[(1) - (3)].i)], (yyvsp[(3) - (3)].str));
	                  printf("Value of %s has been assigned to variable %d.\n",symstr[(yyvsp[(1) - (3)].i)],(yyvsp[(1) - (3)].i));
	              }
	              else{
	                yyerror("Type of variable and assignment type donot match.");
	              }
            }
			  	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {
																if(for_loop){
																	if(start>end){
																		int temp = start;
																		start = end;
																		end = temp;
																	}
																	if(inc<0) inc = -1*inc;

																	printf("%d %d %d is in in new loop",start,end,inc);

																	for(int i = start;i<end;i+=inc){
																		fprintf(fptr,"%s\n",(yyvsp[(1) - (1)].str));
																	}
																}
					                      else if(printFromStmts){
																	if(canPrint && !hasPrinted){
																			fprintf(fptr,"%s\n",(yyvsp[(1) - (1)].str));
																			hasPrinted = true;
																			canPrint = false;
																	}
					                      }
					                      else{
					                        fprintf(fptr,"%s\n",(yyvsp[(1) - (1)].str));
					                      }
					                  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {
																	if(for_loop){
																		if(declared[(yyvsp[(1) - (1)].i)]){
																			if(stored[(yyvsp[(1) - (1)].i)]){
																					if(type[(yyvsp[(1) - (1)].i)]==1){
																						for(int i = start;i<end;i+=inc){
																							fprintf(fptr,"%f\n",symf[(yyvsp[(1) - (1)].i)]);
																						}
																					}
																					else if(type[(yyvsp[(1) - (1)].i)]==2){
																						for(int i = start;i<end;i+=inc){
																							fprintf(fptr,"%f\n",symi[(yyvsp[(1) - (1)].i)]);
																						}
																					}
																					else {
																						for(int i = start;i<end;i+=inc){
																							fprintf(fptr,"%f\n",symstr[(yyvsp[(1) - (1)].i)]);
																						}
																					}
																			}
																			else{
																				fprintf(fptr,"Variable %d has not been assigned any value yet\n",(yyvsp[(1) - (1)].i));
																			}
																		}
																		else{
																			fprintf(fptr,"Variable %d has not been declared\n",(yyvsp[(1) - (1)].i));
																		}
																	}
																	else if(printFromStmts){
										                    if(canPrint && !hasPrinted){
																					hasPrinted = true;
																					canPrint = false;
																					if(declared[(yyvsp[(1) - (1)].i)]){
																						if(stored[(yyvsp[(1) - (1)].i)]){
																								if(type[(yyvsp[(1) - (1)].i)]==1){
																									fprintf(fptr,"%f\n",symf[(yyvsp[(1) - (1)].i)]);
																								}
																								else if(type[(yyvsp[(1) - (1)].i)]==2){
																									fprintf(fptr,"%d\n",symi[(yyvsp[(1) - (1)].i)]);
																								}
																								else {
																									fprintf(fptr,"%s\n",symstr[(yyvsp[(1) - (1)].i)]);
																								}
																						}
																						else{
																							fprintf(fptr,"Variable %d has not been assigned any value yet\n",(yyvsp[(1) - (1)].i));
																						}
																					}
																					else{
																						fprintf(fptr,"Variable %d has not been declared\n",(yyvsp[(1) - (1)].i));
																					}
										                        canPrint = false;
										                    }
										                  }
										                  else{
																				if(declared[(yyvsp[(1) - (1)].i)]){
																					if(stored[(yyvsp[(1) - (1)].i)]){
																							if(type[(yyvsp[(1) - (1)].i)]==1){
																								fprintf(fptr,"%f\n",symf[(yyvsp[(1) - (1)].i)]);
																							}
																							else if(type[(yyvsp[(1) - (1)].i)]==2){
																								fprintf(fptr,"%d\n",symi[(yyvsp[(1) - (1)].i)]);
																							}
																							else {
																								fprintf(fptr,"%s\n",symstr[(yyvsp[(1) - (1)].i)]);
																							}
																					}
																					else{
																						fprintf(fptr,"Variable %d has not been assigned any value yet\n",(yyvsp[(1) - (1)].i));
																					}
																				}
																				else{
																					fprintf(fptr,"Variable %d has not been declared\n",(yyvsp[(1) - (1)].i));
																				}
										                  }
										                ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {
											if(for_loop){
												for(int i = start;i<end;i+=inc){
													fprintf(fptr,"%f\n",(yyvsp[(1) - (1)].f));
												}
											}
											else if(printFromStmts){
												if(canPrint && !hasPrinted){
														fprintf(fptr,"%f\n",(yyvsp[(1) - (1)].f));
														hasPrinted = true;
														canPrint = false;
												}
											}
											else{
												fprintf(fptr,"%f\n",(yyvsp[(1) - (1)].f));
											}
										;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    {
	(yyval.f)=(yyvsp[(1) - (1)].f);

	if(!fromCase){
		if((yyval.f)!=0.0){
			if(!hasPrinted) {
				canPrint = true;
			}
		}
		else{
			canPrint = false;
		}
	}

	else{
		if(caseARG<=0){ ///this is the case argument
				caseARG = (yyval.f);
		}
		else{
			if(caseARG==(yyval.f)){
				canPrint=true;
			}
		}
	}

;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    {
	inc = (yyvsp[(1) - (1)].f);
	printf("start: %d end: %d inc: %d\n",start,end,inc);
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    {
	printf("\n___________________________________________\n####Beginning of Until do loop####\n");
	for_loop = true;
	start = (yyvsp[(1) - (1)].f);
	end = 0;

;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    {
	printf("\n___________________________________________\n####Beginning of Repeat loop####\n");
	for_loop = true;
	start = (yyvsp[(1) - (3)].f);
	end = (yyvsp[(3) - (3)].f);
	if(start>end){
		int temp = start;
		start=end;
		end=temp;
	}
	inc = 1;
	printf("start: %d end: %d inc: %d\n",start,end,inc);
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    {
	printf("\n___________________________________________\n####Beginning of Repeat loop####\n");
	for_loop = true;
	start = (yyvsp[(1) - (5)].f);
	end = (yyvsp[(3) - (5)].f);
	if(start>end){
		int temp = start;
		start=end;
		end=temp;
	}
	inc = (yyvsp[(5) - (5)].f);
	printf("start: %d end: %d inc: %d\n",start,end,inc);
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    {
				if((yyvsp[(1) - (3)].f)>(yyvsp[(3) - (3)].f)){
					(yyval.f)=1.0;
				}
				else{
					(yyval.f)=0.0;
				}
	   ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    {
			if((yyvsp[(1) - (3)].f)<(yyvsp[(3) - (3)].f)){
				(yyval.f)=1.0;
			}
			else{
				(yyval.f)=0.0;
			}
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    {
			if((yyvsp[(1) - (3)].f)==(yyvsp[(3) - (3)].f)){
				(yyval.f)=1.0;
			}
			else{
				(yyval.f)=0.0;
			}
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 415 "parser.y"
    {
		(yyval.f)=(yyvsp[(1) - (1)].f);
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    {
		(yyval.f)=(yyvsp[(2) - (3)].f);
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    {
		(yyval.f) = -1.0 * (yyvsp[(2) - (2)].f);
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)+(yyvsp[(3) - (3)].f);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)-(yyvsp[(3) - (3)].f);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    {(yyval.f) = (yyvsp[(1) - (3)].f)*(yyvsp[(3) - (3)].f);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    {(yyval.f) = (yyvsp[(1) - (3)].f)/(yyvsp[(3) - (3)].f);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    {(yyval.f)=(yyvsp[(3) - (6)].f)+(yyvsp[(5) - (6)].f); fprintf(fptr,"Function invoked: SUM(%f,%f)= %f\n",(yyvsp[(3) - (6)].f),(yyvsp[(5) - (6)].f),(yyval.f));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    {(yyval.f)=(yyvsp[(3) - (6)].f)*(yyvsp[(5) - (6)].f); fprintf(fptr,"Function invoked: MUL(%f,%f)= %f\n",(yyvsp[(3) - (6)].f),(yyvsp[(5) - (6)].f),(yyval.f));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    {
									int i = 0;
									char x[100];
									char s[100];

									strcpy(s,(yyvsp[(3) - (4)].str));
									int len = strlen(s);
								//	printf("%s is %d\n",s,len);


									for(int j = len-1 ; j>=0 ; j--){
										x[i] = s[j];
										i++;
									}
									x[i] = '\0';
									bool isPalin = true;

									for(int i = 0 ;i <len;i++){
										if(s[i]!=x[i]){
											isPalin = false;
											//printf("FALSE FOR %c & %c\n",s[i],x[i]);
											break;
										}
									}
									if(isPalin) {
										fprintf(fptr,"Function invoked: PLD: %s is a palindromic string\n",(yyvsp[(3) - (4)].str));
										(yyval.f) = 1.0;
									}
									else {
										fprintf(fptr,"Function invoked: PLD: %s is not a palindromic string\n",(yyvsp[(3) - (4)].str));
										(yyval.f) = 0.0;
									}
								;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    {
									if(type[(yyvsp[(3) - (4)].i)]!=3){
										yyerror("ERROR: Not a string variable!!\n");
									}
									else{
										int i = 0;
										char x[100];
										char s[100];

										strcpy(s,symstr[(yyvsp[(3) - (4)].i)]);
										int len = strlen(s);
									//	printf("%s is %d\n",s,len);


										for(int j = len-1 ; j>=0 ; j--){
											x[i] = s[j];
											i++;
										}
										x[i] = '\0';
										bool isPalin = true;

										for(int i = 0 ;i <len;i++){
											if(s[i]!=x[i]){
												isPalin = false;
												//printf("FALSE FOR %c & %c\n",s[i],x[i]);
												break;
											}
										}
										if(isPalin) fprintf(fptr,"%s is a palindromic string\n",s);
										else fprintf(fptr,"%s is not a palindromic string\n",s);
									}

								;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 502 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].i)*1.0;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 503 "parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 504 "parser.y"
    {
					 if(declared[(yyvsp[(1) - (1)].i)]){
						 if(stored[(yyvsp[(1) - (1)].i)]){
								 if(type[(yyvsp[(1) - (1)].i)]==1){
									 (yyval.f)=symf[(yyvsp[(1) - (1)].i)];
								 }
								 else if(type[(yyvsp[(1) - (1)].i)]==2){
									 (yyval.f)=symi[(yyvsp[(1) - (1)].i)]*1.0;
								 }
								 else{
									 yyerror("Strings cannot be an expression\n");
								 }
						 }
						 else{
							 printf("Variable %d has not been assigned any value yet\n",(yyvsp[(1) - (1)].i));
						 }
					 }
					 else{
						 printf("Variable %d has not been declared\n",(yyvsp[(1) - (1)].i));
					 }
				 ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 526 "parser.y"
    {
				 if(!hasPrinted){
					 canPrint = true;
				 }
				 ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 531 "parser.y"
    {
				printf("\n___________________________________________\n####Beginning of IF ELSE statement####\n");
				printFromStmts = true;
				canPrint = false;
				hasPrinted = false;
				ifstmtcnt = 0;
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 539 "parser.y"
    {
				printf("\n___________________________________________\n####Beginning of CASE statement####\n");
				fromCase = true;
				printFromStmts = true;
				canPrint = false;
				hasPrinted = false;
				caseARG = -1.0;
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 548 "parser.y"
    {
	if(!hasPrinted){
 	 canPrint = true;
  }
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 555 "parser.y"
    {printf("Single line comment encountered.\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2332 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 557 "parser.y"



          int yywrap(){
          return 1;
          }
          void yyerror(char *s)
          {
            fprintf(stderr,"%s\n",s);
          }
          int main()
          {
	          freopen("Input.txt","r",stdin);

   					fptr = fopen("Output.txt","w");
	          yyparse();
          }

