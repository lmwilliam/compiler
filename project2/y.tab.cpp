/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */


#include <iostream>
#include "symbols.hpp"
#include "lex.yy.cpp"

#define Trace(t) if (P) if (P) cout << t << endl;

int P = 1;
void yyerror(string s);

SymbolTableList symbols;
vector<vector<idInfo>> functions;


#line 82 "y.tab.cpp" /* yacc.c:339  */

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
   by #include "y.tab.hpp".  */
#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
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
    LE = 258,
    RE = 259,
    NEQ = 260,
    ASSIGNMENT = 261,
    AND = 262,
    OR = 263,
    NOT = 264,
    BEG = 265,
    BREAK = 266,
    CHARACTER = 267,
    CASE = 268,
    CONTINUE = 269,
    CONSTANT = 270,
    DECLARE = 271,
    DO = 272,
    ELSE = 273,
    END = 274,
    EXIT = 275,
    FLOAT = 276,
    FOR = 277,
    IF = 278,
    IN = 279,
    INTEGER = 280,
    LOOP = 281,
    PRINT = 282,
    PRINTLN = 283,
    PROCEDURE = 284,
    PROGRAM = 285,
    RETURN = 286,
    STRING = 287,
    WHILE = 288,
    THEN = 289,
    BOOLEAN = 290,
    READ = 291,
    INTEGER_C = 292,
    ID = 293,
    REAL_C = 294,
    STRING_C = 295,
    BOOLEAN_C = 296,
    UMINUS = 297
  };
#endif
/* Tokens.  */
#define LE 258
#define RE 259
#define NEQ 260
#define ASSIGNMENT 261
#define AND 262
#define OR 263
#define NOT 264
#define BEG 265
#define BREAK 266
#define CHARACTER 267
#define CASE 268
#define CONTINUE 269
#define CONSTANT 270
#define DECLARE 271
#define DO 272
#define ELSE 273
#define END 274
#define EXIT 275
#define FLOAT 276
#define FOR 277
#define IF 278
#define IN 279
#define INTEGER 280
#define LOOP 281
#define PRINT 282
#define PRINTLN 283
#define PROCEDURE 284
#define PROGRAM 285
#define RETURN 286
#define STRING 287
#define WHILE 288
#define THEN 289
#define BOOLEAN 290
#define READ 291
#define INTEGER_C 292
#define ID 293
#define REAL_C 294
#define STRING_C 295
#define BOOLEAN_C 296
#define UMINUS 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:355  */

	int ival;
	bool bval;
  	double dval;
  	string *sval;
  	int type;
  	idInfo* info;

#line 215 "y.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "y.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   550

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,    47,    45,    57,    46,    56,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    51,
      42,    43,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    61,    56,    70,    69,    80,    81,    82,
      85,    97,   109,   121,   130,   138,   148,   158,   162,   166,
     170,   176,   180,   184,   188,   195,   196,   200,   199,   217,
     218,   221,   222,   225,   236,   241,   246,   247,   250,   251,
     252,   253,   254,   260,   270,   282,   286,   290,   294,   298,
     305,   309,   316,   315,   327,   326,   339,   344,   351,   352,
     355,   360,   372,   371,   389,   395,   397,   400,   401,   404,
     410,   416,   420,   429,   430,   445,   465,   485,   505,   525,
     549,   573,   599,   623,   650,   673,   683,   696
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LE", "RE", "NEQ", "ASSIGNMENT", "AND",
  "OR", "NOT", "BEG", "BREAK", "CHARACTER", "CASE", "CONTINUE", "CONSTANT",
  "DECLARE", "DO", "ELSE", "END", "EXIT", "FLOAT", "FOR", "IF", "IN",
  "INTEGER", "LOOP", "PRINT", "PRINTLN", "PROCEDURE", "PROGRAM", "RETURN",
  "STRING", "WHILE", "THEN", "BOOLEAN", "READ", "INTEGER_C", "ID",
  "REAL_C", "STRING_C", "BOOLEAN_C", "'<'", "'='", "'>'", "'+'", "'-'",
  "'*'", "'/'", "UMINUS", "':'", "';'", "'['", "']'", "'('", "')'", "'.'",
  "','", "$accept", "program", "$@1", "$@2", "$@3", "opt_variables_dec",
  "constant_dec", "variable_dec", "variable_type", "constant_value",
  "opt_procedures_dec", "procedure_dec", "$@4", "opt_arguments",
  "arguments", "argument", "opt_return_type", "opt_statements",
  "statement", "simple", "block", "$@5", "$@6", "conditional", "BorS",
  "loop", "procedure_invocation", "$@7", "opt_comma_separated",
  "comma_separated", "procedure_expression", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    60,    61,    62,    43,    45,    42,    47,   297,
      58,    59,    91,    93,    40,    41,    46,    44
};
# endif

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    -8,    25,    34,   -78,    30,    40,   -78,   512,    20,
     -78,    20,    21,   480,   432,   442,   465,   480,    45,     2,
      59,   512,   -78,   -78,   -78,   -78,   -78,    23,    55,    20,
      20,   512,    85,    58,   480,   -78,   -14,   -78,   -78,   -78,
     480,   -78,   -78,   369,   480,   179,   480,   212,   -78,   228,
     392,    49,   480,   -78,   480,    51,    84,   -78,   480,    98,
      -9,    69,   106,    55,   -78,   -78,    89,   -78,    93,   416,
     480,   -78,   480,   480,   480,   480,   480,    66,   480,   480,
     480,   480,   480,   480,   480,    44,   -78,   107,   -78,   -78,
      66,   -78,   238,   132,   480,    80,   261,     5,   -78,   -78,
     -78,   -78,    13,    68,   -78,   512,   -78,    71,   512,    87,
     153,    99,    99,    99,   416,   401,     4,   -78,   -78,    24,
      99,    99,    99,    33,    33,   -78,   -78,    81,    92,   119,
     -78,   142,   108,   -78,   109,   385,   -78,   -78,   480,    -9,
     480,   -78,   480,   110,   146,   -78,   148,   115,   -78,    66,
     158,   -78,   -78,   162,   480,   138,   480,   287,   184,   310,
     165,   154,   172,   143,   137,   183,   152,   163,   320,   -78,
     -78,   -78,   480,   -78,   177,   155,   149,   -78,   178,   196,
     -78,   200,   215,   -78,   -78,   -78,   336,   -78,    -9,   208,
     154,   -78,   185,   193,   -78,   -78,    -9,   -78,    66,   -78,
     -78,    18,   229,   230,   224,   213,   199,   201,   -78,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     3,     0,     9,
      54,     9,     0,     0,     0,     0,     0,     0,     0,    62,
       0,    37,    38,    39,    40,    41,    42,     0,     0,     9,
       9,     0,     0,     0,     0,    21,    70,    22,    24,    23,
       0,    71,    73,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,    64,     0,     0,     0,    36,     0,     0,
      15,     0,     0,    26,     8,     7,     0,    52,     0,    85,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,    48,    50,
       0,    49,     0,     0,    66,     0,     0,     0,    20,    17,
      18,    19,     0,     0,    27,     0,    25,     0,     0,     0,
       0,    80,    82,    84,    86,    87,     0,    58,    59,     0,
      79,    81,    83,    77,    78,    75,    76,     0,     0,     0,
      43,     0,     0,    65,    68,    69,     6,    14,     0,     0,
       0,    13,     0,     0,     0,    55,     0,     0,    72,     0,
       0,    45,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,    63,
      67,    11,     0,    12,     0,     0,     0,    29,    32,     0,
      53,     0,     0,    57,    60,    44,     0,    16,     0,     0,
       0,     4,     0,     0,    10,    33,    35,    31,     0,    56,
      34,     0,     0,     0,     0,     0,     0,     0,    61,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   -78,   -78,     6,   -78,   -78,   -54,   -78,
     190,   -78,   -78,   -78,    72,   -78,   -78,    -7,   -78,   -72,
     -70,   -78,   -78,   -78,   -77,   -78,     1,   -78,   -78,   105,
     -78,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     9,     6,    28,    29,    30,   102,    41,
      62,    63,   143,   176,   177,   178,   201,    20,    21,    22,
      23,   108,    31,    24,   119,    25,    42,    55,   132,   133,
     134,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    45,    47,    49,    50,   117,   103,   118,    52,    26,
      52,   138,    98,   129,    57,     1,    99,    32,   117,   140,
     118,    69,    26,   100,    66,     4,   101,    71,    10,    58,
       3,    85,    26,    87,    11,    64,    65,    53,    70,    92,
     -62,    93,   149,   150,    -5,    96,     7,    72,    73,    74,
       8,    75,    76,    53,    54,   139,    54,   110,    27,   111,
     112,   113,   114,   115,   141,   120,   121,   122,   123,   124,
     125,   126,   165,    59,    60,    33,    10,   117,    56,   118,
      83,    84,    11,    51,    61,   158,    78,    79,    80,    81,
      82,    83,    84,    14,    15,    67,    68,    16,   144,   127,
      91,   146,    18,    95,   116,    94,    26,   104,   107,    26,
      72,    73,    74,    97,    75,    76,   105,   109,   136,    98,
     142,   202,   145,    99,   147,   157,   117,   159,   118,   160,
     100,   203,   151,   101,   195,    72,    73,    74,   153,    75,
      76,   168,   200,   152,    81,    82,    83,    84,   154,    78,
      79,    80,    81,    82,    83,    84,    72,    73,    74,   186,
      75,    76,   128,   155,   161,   162,   156,   163,    72,    73,
      74,   164,    75,    76,    78,    79,    80,    81,    82,    83,
      84,   166,    72,    73,    74,   131,    75,    76,   167,   169,
     172,   179,   175,   181,   180,    78,    79,    80,    81,    82,
      83,    84,   182,   183,   189,   188,   148,    78,    79,    80,
      81,    82,    83,    84,   184,    72,    73,    74,   174,    75,
      76,    78,    79,    80,    81,    82,    83,    84,   187,   190,
      86,    72,    73,    74,   191,    75,    76,   192,   193,   196,
     198,    72,    73,    74,   199,    75,    76,   206,   204,   205,
     208,   207,   209,   106,    78,    79,    80,    81,    82,    83,
      84,   170,   197,    88,    72,    73,    74,     0,    75,    76,
      78,    79,    80,    81,    82,    83,    84,     0,     0,    89,
      78,    79,    80,    81,    82,    83,    84,     0,     0,   130,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,   137,    72,    73,    74,     0,    75,    76,     0,
       0,     0,     0,    72,    73,    74,     0,    75,    76,    78,
      79,    80,    81,    82,    83,    84,     0,     0,   171,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,   173,    78,    79,    80,    81,    82,    83,    84,     0,
       0,   185,    72,    73,    74,     0,    75,    76,    78,    79,
      80,    81,    82,    83,    84,     0,     0,   194,    72,    73,
      74,     0,    75,    76,     0,    72,    73,    74,     0,    75,
      76,     0,     0,    77,    72,    73,    74,     0,    75,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    90,    72,
      73,    74,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    78,    79,    80,    81,    82,    83,
      84,    34,     0,    78,    79,    80,    81,    82,    83,    84,
       0,    34,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,    35,
      36,    37,    38,    39,    34,     0,     0,     0,    40,    35,
      36,    37,    38,    39,     0,     0,    44,     0,    40,    34,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,     0,     0,     0,
       0,    40,     0,     0,     0,     0,    48,    35,    36,    37,
      38,    39,    10,     0,     0,     0,    40,     0,    11,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
      15,     0,     0,    16,     0,    17,     0,     0,    18,     0,
      19
};

static const yytype_int16 yycheck[] =
{
      13,    14,    15,    16,    17,    77,    60,    77,     6,     8,
       6,     6,    21,    90,    21,    30,    25,    11,    90,     6,
      90,    34,    21,    32,    31,     0,    35,    40,    10,     6,
      38,    44,    31,    46,    16,    29,    30,    51,    52,    52,
      54,    54,    18,    19,    10,    58,    16,     3,     4,     5,
      10,     7,     8,    51,    52,    50,    52,    70,    38,    72,
      73,    74,    75,    76,    51,    78,    79,    80,    81,    82,
      83,    84,   149,    50,    51,    54,    10,   149,    19,   149,
      47,    48,    16,    38,    29,   139,    42,    43,    44,    45,
      46,    47,    48,    27,    28,    10,    38,    31,   105,    55,
      51,   108,    36,    19,    38,    54,   105,    38,    19,   108,
       3,     4,     5,    15,     7,     8,    10,    24,    38,    21,
      52,   198,    51,    25,    37,   138,   198,   140,   198,   142,
      32,   201,    51,    35,   188,     3,     4,     5,    19,     7,
       8,   154,   196,    51,    45,    46,    47,    48,     6,    42,
      43,    44,    45,    46,    47,    48,     3,     4,     5,   172,
       7,     8,    55,    55,    54,    19,    57,    19,     3,     4,
       5,    56,     7,     8,    42,    43,    44,    45,    46,    47,
      48,    23,     3,     4,     5,    53,     7,     8,    26,    51,
       6,    19,    38,    56,    51,    42,    43,    44,    45,    46,
      47,    48,    19,    51,    55,    50,    53,    42,    43,    44,
      45,    46,    47,    48,    51,     3,     4,     5,    53,     7,
       8,    42,    43,    44,    45,    46,    47,    48,    51,    51,
      51,     3,     4,     5,    38,     7,     8,    37,    23,    31,
      55,     3,     4,     5,    51,     7,     8,    23,    19,    19,
      51,    38,    51,    63,    42,    43,    44,    45,    46,    47,
      48,   156,   190,    51,     3,     4,     5,    -1,     7,     8,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    51,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    51,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    51,     3,     4,     5,    -1,     7,     8,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,     3,     4,
       5,    -1,     7,     8,    -1,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    34,     3,     4,     5,    -1,     7,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    26,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    42,    43,    44,    45,    46,    47,
      48,     9,    -1,    42,    43,    44,    45,    46,    47,    48,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,     9,    -1,    -1,    -1,    46,    37,
      38,    39,    40,    41,    -1,    -1,    54,    -1,    46,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    37,    38,    39,
      40,    41,    10,    -1,    -1,    -1,    46,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    -1,    33,    -1,    -1,    36,    -1,
      38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    59,    38,     0,    60,    62,    16,    10,    61,
      10,    16,    22,    23,    27,    28,    31,    33,    36,    38,
      75,    76,    77,    78,    81,    83,    84,    38,    63,    64,
      65,    80,    63,    54,     9,    37,    38,    39,    40,    41,
      46,    67,    84,    89,    54,    89,    54,    89,    51,    89,
      89,    38,     6,    51,    52,    85,    19,    75,     6,    50,
      51,    29,    68,    69,    63,    63,    75,    10,    38,    89,
      52,    89,     3,     4,     5,     7,     8,    34,    42,    43,
      44,    45,    46,    47,    48,    89,    51,    89,    51,    51,
      26,    51,    89,    89,    54,    19,    89,    15,    21,    25,
      32,    35,    66,    66,    38,    10,    68,    19,    79,    24,
      89,    89,    89,    89,    89,    89,    38,    77,    78,    82,
      89,    89,    89,    89,    89,    89,    89,    55,    55,    82,
      51,    53,    86,    87,    88,    89,    38,    51,     6,    50,
       6,    51,    52,    70,    75,    51,    75,    37,    53,    18,
      19,    51,    51,    19,     6,    55,    57,    89,    66,    89,
      89,    54,    19,    19,    56,    82,    23,    26,    89,    51,
      87,    51,     6,    51,    53,    38,    71,    72,    73,    19,
      51,    56,    19,    51,    51,    51,    89,    51,    50,    55,
      51,    38,    37,    23,    51,    66,    31,    72,    55,    51,
      66,    74,    82,    78,    19,    19,    23,    38,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    60,    61,    59,    62,    59,    63,    63,    63,
      64,    64,    65,    65,    65,    65,    65,    66,    66,    66,
      66,    67,    67,    67,    67,    68,    68,    70,    69,    71,
      71,    72,    72,    73,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    79,    78,    80,    78,    81,    81,    82,    82,
      83,    83,    85,    84,    84,    86,    86,    87,    87,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    12,     0,     8,     2,     2,     0,
       8,     6,     6,     4,     4,     2,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     0,    12,     1,
       0,     3,     1,     3,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     4,     7,     5,     3,     5,     3,     3,
       3,     2,     0,     7,     0,     5,     9,     7,     1,     1,
       7,    13,     0,     6,     2,     1,     0,     3,     1,     1,
       1,     1,     4,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3
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
#line 57 "parser.y" /* yacc.c:1646  */
    {
				Trace("program(program)");
			}
#line 1518 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "parser.y" /* yacc.c:1646  */
    {
				Trace("program(declare)");
			}
#line 1526 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "parser.y" /* yacc.c:1646  */
    {
                                symbols.dump();
                                symbols.pop();
                        }
#line 1535 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 70 "parser.y" /* yacc.c:1646  */
    {
                                Trace("program(program)");
                        }
#line 1543 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 74 "parser.y" /* yacc.c:1646  */
    {
                                symbols.dump();
                                symbols.pop();
                        }
#line 1552 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 86 "parser.y" /* yacc.c:1646  */
    {
                        	Trace("constant declaration(type)");
				/* check constant */
                       		if (!isConst(*(yyvsp[-1].info))) yyerror("expression is not a constant value");
				/* check type parameter */
                          	if ((yyvsp[-3].type) != (yyvsp[-1].info)->type) yyerror("type not match");
                          	(yyvsp[-1].info)->flag = constVariableFlag;
                          	(yyvsp[-1].info)->init = true;
				/* symbol check*/
				if (symbols.insert(*(yyvsp[-7].sval), *(yyvsp[-1].info)) == -1) yyerror("constant redefinition");
                        }
#line 1568 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("constant declaration");
				/* check constant */
                          	if (!isConst(*(yyvsp[-1].info))) yyerror("expression not constant value");
	                        (yyvsp[-1].info)->flag = constVariableFlag;
                          	(yyvsp[-1].info)->init = true;
				/* symbol check */
				if (symbols.insert(*(yyvsp[-5].sval), *(yyvsp[-1].info)) == -1) yyerror("constant redefinition");
                        }
#line 1582 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("variable declaration(ID ':' variable_type ':=' expression ';' )");
				/* check constant*/
                          	if (!isConst(*(yyvsp[-1].info))) yyerror("expression is not constant value");
				/* check type */
                          	if ((yyvsp[-3].type) != (yyvsp[-1].info)->type) yyerror("type is not match");
	                        (yyvsp[-1].info)->flag = variableFlag;
        	                (yyvsp[-1].info)->init = true;
				/* symbol check */
				if (symbols.insert(*(yyvsp[-5].sval), *(yyvsp[-1].info)) == -1) yyerror("variable redefinition");
			}
#line 1598 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "parser.y" /* yacc.c:1646  */
    {
				Trace("variable declaration (ID ':' variable_type expression ';')");
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = (yyvsp[-1].type);
                          	info->init = false;
                          	if (symbols.insert(*(yyvsp[-3].sval), *info) == -1) yyerror("variable redefinition");
			}
#line 1611 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "parser.y" /* yacc.c:1646  */
    {
                        	Trace("variable declaration (ID ASSIGNMENT expression ';')");
                          	if (!isConst(*(yyvsp[-1].info))) yyerror("expression not constant value");
	                        (yyvsp[-1].info)->flag = variableFlag;
        	                (yyvsp[-1].info)->init = true;
                	        if (symbols.insert(*(yyvsp[-3].sval), *(yyvsp[-1].info)) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
#line 1623 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 139 "parser.y" /* yacc.c:1646  */
    {
                        	Trace("variable declaration(ID ';')");

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = intType;
                          	info->init = false;
                          	if (symbols.insert(*(yyvsp[-1].sval), *info) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
#line 1637 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 149 "parser.y" /* yacc.c:1646  */
    {
			  	Trace("array declaration");
                          	if (!isConst(*(yyvsp[-2].info))) yyerror("array size not constant");
                          	if ((yyvsp[-2].info)->type != intType) yyerror("array size not integer");
                          	if ((yyvsp[-2].info)->value.ival < 1) yyerror("array size < 1");
                          	if (symbols.insert(*(yyvsp[-6].sval), (yyvsp[-4].type), (yyvsp[-2].info)->value.ival) == -1) yyerror("variable redefinition");
			}
#line 1649 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 159 "parser.y" /* yacc.c:1646  */
    {
				(yyval.type) = intType;
			}
#line 1657 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "parser.y" /* yacc.c:1646  */
    {
				(yyval.type) = strType;
			}
#line 1665 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 167 "parser.y" /* yacc.c:1646  */
    {	
				(yyval.type) = boolType;
			}
#line 1673 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 171 "parser.y" /* yacc.c:1646  */
    {
				(yyval.type) = realType;
			}
#line 1681 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 177 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = intConst((yyvsp[0].ival));
			}
#line 1689 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 181 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = realConst((yyvsp[0].dval));
			}
#line 1697 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 185 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = boolConst((yyvsp[0].bval));
			}
#line 1705 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 189 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = strConst((yyvsp[0].sval));
			}
#line 1713 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 200 "parser.y" /* yacc.c:1646  */
    {
				Trace("procedure declaration");
                                cout << *(yyvsp[0].sval) <<endl;
                                idInfo *info = new idInfo();
                                info->flag = functionFlag;
                                info->init = false;
                                if (symbols.insert(*(yyvsp[0].sval), *info) == -1) yyerror("function redefinition"); /* symbol check */
                                symbols.push();

			}
#line 1728 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 211 "parser.y" /* yacc.c:1646  */
    {
				symbols.dump();
                          	symbols.pop();
			}
#line 1737 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 226 "parser.y" /* yacc.c:1646  */
    {
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = (yyvsp[0].type);
                          	info->init = false;
                          	if (symbols.insert(*(yyvsp[-2].sval), *info) == -1) yyerror("variable redefinition");
                          	symbols.addFuncArg(*(yyvsp[-2].sval), *info);
			}
#line 1750 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 237 "parser.y" /* yacc.c:1646  */
    {
				symbols.setFuncType((yyvsp[0].type));
			}
#line 1758 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 241 "parser.y" /* yacc.c:1646  */
    {
				symbols.setFuncType(voidType);
			}
#line 1766 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 255 "parser.y" /* yacc.c:1646  */
    {
                            if((yyvsp[0].info) != NULL) yyerror("procedure invocation should not have return value");
                        }
#line 1774 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 261 "parser.y" /* yacc.c:1646  */
    {
				Trace(" variable assignment");
	                        idInfo *info = symbols.lookup(*(yyvsp[-3].sval));
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag == constVariableFlag) yyerror("can't assign to constant"); /* constant check */
                          	if (info->flag == functionFlag) yyerror("can't assign to function"); /* function check */
                          	if (info->type != (yyvsp[-1].info)->type) yyerror("type not match"); /* type check */

			}
#line 1788 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 271 "parser.y" /* yacc.c:1646  */
    {
				Trace("Array assignment");

                          	idInfo *info = symbols.lookup(*(yyvsp[-6].sval));
                         	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag != variableFlag) yyerror("not a variable"); /* variable check */
                          	if (info->type != arrayType) yyerror("not a array"); /* type check */
                          	if ((yyvsp[-4].info)->type != intType) yyerror("index not integer"); /* index type check */
                          	if ((yyvsp[-4].info)->value.ival >= info->value.aval.size() || (yyvsp[-4].info)->value.ival < 0) yyerror("index out of range"); /* index range check */
                          	if (info->value.aval[0].type != (yyvsp[-1].info)->type) yyerror("type not match"); /* type check */
			}
#line 1804 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 283 "parser.y" /* yacc.c:1646  */
    {
				Trace("print(expression)");
			}
#line 1812 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 287 "parser.y" /* yacc.c:1646  */
    {
				Trace("print expression");
			}
#line 1820 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 291 "parser.y" /* yacc.c:1646  */
    {
				Trace("println(expression)");
			}
#line 1828 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "parser.y" /* yacc.c:1646  */
    {
				Trace("expression");
			}
#line 1836 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 299 "parser.y" /* yacc.c:1646  */
    {
				idInfo *info = symbols.lookup(*(yyvsp[-1].sval));
	                        if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
        	                Trace("READ ID");

			}
#line 1847 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 306 "parser.y" /* yacc.c:1646  */
    {
				Trace("return expression");
			}
#line 1855 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 310 "parser.y" /* yacc.c:1646  */
    {
				Trace("return");
			}
#line 1863 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 316 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block start----");
				symbols.push();
			}
#line 1872 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 321 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block end----");
				symbols.dump();
				symbols.pop();
			}
#line 1882 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 327 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block start----");
                                symbols.push();
			}
#line 1891 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 332 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block end----");
                                symbols.dump();
                                symbols.pop();
			}
#line 1901 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 340 "parser.y" /* yacc.c:1646  */
    {
                          	Trace(" if then else");
                          	if ((yyvsp[-7].info)->type != boolType) yyerror("condition type error (if_then_else)");
                        }
#line 1910 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 345 "parser.y" /* yacc.c:1646  */
    {
				Trace(" if then");
                          	if ((yyvsp[-5].info)->type != boolType) yyerror("condition type error (if then)");
			}
#line 1919 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 356 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("while loop");
                          	if ((yyvsp[-5].info)->type != boolType) yyerror("while condition type error");
                        }
#line 1928 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 361 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("FOR loop");
                          	idInfo *info = symbols.lookup(*(yyvsp[-10].sval));
                          	if (info == NULL) yyerror("undeclared indentifier(for)"); /* declaration check */
                          	if (info->flag != variableFlag) yyerror("not a variable(for)"); /* function check */
                          	if(info->type != intType) yyerror("variable should be int(for)");

                        }
#line 1941 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 372 "parser.y" /* yacc.c:1646  */
    {
                          functions.push_back(vector<idInfo>());
                        }
#line 1949 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 376 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("procedure_invocation");
                          	idInfo *info = symbols.lookup(*(yyvsp[-5].sval));
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag != functionFlag) yyerror("not a function"); /* function check */
                          	vector<idInfo> para = info->value.aval;
                          	if (para.size() != functions[functions.size() - 1].size()) yyerror("parameter size not match"); /* parameter size check */
                          	for (int i = 0; i < para.size(); ++i) {
                            		if (para[i].type != functions[functions.size() - 1].at(i).type) yyerror("parameter type not match"); /* parameter type check */
                          	}
                          	(yyval.info) = info;
                          	functions.pop_back();
                        }
#line 1967 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 390 "parser.y" /* yacc.c:1646  */
    {
                          	functions.push_back(vector<idInfo>());
                        }
#line 1975 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 405 "parser.y" /* yacc.c:1646  */
    {
                          	functions[functions.size() - 1].push_back(*(yyvsp[0].info));
                        }
#line 1983 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 411 "parser.y" /* yacc.c:1646  */
    {
                          	idInfo *info = symbols.lookup(*(yyvsp[0].sval));
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	(yyval.info) = info;
                        }
#line 1993 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 417 "parser.y" /* yacc.c:1646  */
    {
                            	(yyval.info) = (yyvsp[0].info);
                        }
#line 2001 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 421 "parser.y" /* yacc.c:1646  */
    {
                          	idInfo *info = symbols.lookup(*(yyvsp[-3].sval));
                          	if (info == NULL) yyerror("undeclared identifier");
                          	if (info->type != arrayType) yyerror("not array type");
                          	if ((yyvsp[-1].info)->type != intType) yyerror("invalid index");
                          	if ((yyvsp[-1].info)->value.ival >= info->value.aval.size()) yyerror("index out of range");
                          	(yyval.info) = new idInfo(info->value.aval[(yyvsp[-1].info)->value.ival]);
                        }
#line 2014 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 431 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("-expression");

                          	if ((yyvsp[0].info)->type != intType && (yyvsp[0].info)->type != realType) yyerror("operator error"); /* operator check */
                          	if((yyvsp[0].info) -> type == intType)
                          	{
                            		(yyvsp[0].info) -> value.ival *= -1;
                          	}
                          	else
                         	{
                            		(yyvsp[0].info) -> value.dval *= -1;
                          	}
                          	(yyval.info) = (yyvsp[0].info);
                        }
#line 2033 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 446 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression * expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          	if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = (yyvsp[-2].info)->type;

                          	if((yyvsp[-2].info) -> type == intType)
                          	{
                            		info->value.ival = (yyvsp[-2].info) -> value.ival * (yyvsp[0].info) -> value.ival;
                          	}
                          	else
                          	{
                             		info->value.dval = (yyvsp[-2].info) -> value.dval * (yyvsp[0].info) -> value.dval;
                          	}

                          	(yyval.info) = info;
                        }
#line 2057 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 466 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression / expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[-2].info)->type;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[-2].info) -> value.ival / (yyvsp[0].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[-2].info) -> value.dval / (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2081 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 486 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression + expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[-2].info)->type;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[-2].info) -> value.ival + (yyvsp[0].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[-2].info) -> value.dval + (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2105 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 506 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression - expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[-2].info)->type;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[-2].info) -> value.ival - (yyvsp[0].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[-2].info) -> value.dval - (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2129 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 526 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression < expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType && (yyvsp[-2].info) -> type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[-2].info) -> value.ival < (yyvsp[0].info) -> value.ival;
                          }
                          else if((yyvsp[-2].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[-2].info) -> value.bval < (yyvsp[0].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[-2].info) -> value.dval < (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2157 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 550 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression <= expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType && (yyvsp[-2].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[-2].info) -> value.ival <= (yyvsp[0].info) -> value.ival;
                          }
                           else if((yyvsp[-2].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[-2].info) -> value.bval <= (yyvsp[0].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[-2].info) -> value.dval <= (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2185 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 574 "parser.y" /* yacc.c:1646  */
    {

                          Trace("expression == expression");
                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */


                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[-2].info) -> value.ival == (yyvsp[0].info) -> value.ival;

                          }
                          else if((yyvsp[-2].info) -> type == boolType)
                          {

                            info -> value.bval = (yyvsp[-2].info) -> value.bval == (yyvsp[0].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[-2].info) -> value.dval == (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2215 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 600 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression >= expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType && (yyvsp[-2].info)->type!= boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[-2].info) -> value.ival >= (yyvsp[0].info) -> value.ival;
                          }
                           else if((yyvsp[-2].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[-2].info) -> value.bval >= (yyvsp[0].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[-2].info) -> value.dval >= (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2243 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 624 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression > expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType && (yyvsp[-2].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[-2].info) -> type == intType)
                          {

                            info->value.bval = (yyvsp[-2].info) -> value.ival > (yyvsp[0].info) -> value.ival;

                          }
                          else if((yyvsp[-2].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[-2].info) -> value.bval > (yyvsp[0].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[-2].info) -> value.dval > (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;

                        }
#line 2274 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 651 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression != expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[-2].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[-2].info) -> value.ival != (yyvsp[0].info) -> value.ival;
                          }
                           else if((yyvsp[-2].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[-2].info) -> value.bval != (yyvsp[0].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[-2].info) -> value.dval != (yyvsp[0].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
#line 2301 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 674 "parser.y" /* yacc.c:1646  */
    {
                          Trace("NOT expression");

                          if ((yyvsp[0].info)->type != boolType) yyerror("operator error"); /* operator check */

                          (yyvsp[0].info) -> value.bval = !(yyvsp[0].info) -> value.bval;

                          (yyval.info) = (yyvsp[0].info);
                        }
#line 2315 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 684 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression && expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[-2].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = (yyvsp[-2].info)-> value.bval && (yyvsp[0].info) -> value.bval;
                          (yyval.info) = info;
                        }
#line 2332 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 697 "parser.y" /* yacc.c:1646  */
    {
                          Trace("expression || expression");

                          if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */

                          if ((yyvsp[-2].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = (yyvsp[-2].info)-> value.bval && (yyvsp[0].info) -> value.bval;
                          (yyval.info) = info;
                        }
#line 2350 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2354 "y.tab.cpp" /* yacc.c:1646  */
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
#line 712 "parser.y" /* yacc.c:1906  */

void yyerror(string s)
{
	cerr << "line" << lineNum << ":" << s << endl;
	exit(1);
}	
	
int main(void)
{
	yyparse();
	return 0;
}
