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
#include "codeGen.hpp"

#define Trace(t) if (P) if (P) cout << t << endl;

string filename;
ofstream out;

int P = 0;
int method_num = 0;
int main_num = 0;
void yyerror(string s);

SymbolTableList symbols;
vector<vector<idInfo>> functions;


#line 88 "y.tab.cpp" /* yacc.c:339  */

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
    GE = 259,
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
    ID = 292,
    BOOLEAN_C = 293,
    INTEGER_C = 294,
    REAL_C = 295,
    STRING_C = 296,
    UMINUS = 297
  };
#endif
/* Tokens.  */
#define LE 258
#define GE 259
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
#define ID 292
#define BOOLEAN_C 293
#define INTEGER_C 294
#define REAL_C 295
#define STRING_C 296
#define UMINUS 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 24 "parser.y" /* yacc.c:355  */

	int ival;
	bool bval;
  	double dval;
  	string *sval;
  	int type;
  	idInfo *info;

#line 221 "y.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "y.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

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
       2,     2,     2,     2,     2,     2,     2,     2,    51,    50,
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
       0,    63,    63,    68,    62,    81,    86,    80,   101,   100,
     111,   112,   113,   116,   128,   140,   162,   177,   193,   207,
     217,   221,   225,   229,   235,   239,   243,   247,   254,   255,
     256,   260,   270,   259,   285,   295,   284,   311,   312,   315,
     316,   319,   330,   335,   340,   341,   342,   345,   346,   347,
     348,   349,   355,   371,   384,   383,   413,   412,   441,   448,
     453,   462,   461,   472,   471,   484,   488,   483,   499,   498,
     503,   506,   507,   511,   515,   510,   523,   535,   534,   558,
     559,   562,   563,   566,   572,   595,   605,   614,   615,   635,
     648,   662,   683,   705,   729,   753,   777,   801,   826,   849,
     858,   871,   884
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LE", "GE", "NEQ", "ASSIGNMENT", "AND",
  "OR", "NOT", "BEG", "BREAK", "CHARACTER", "CASE", "CONTINUE", "CONSTANT",
  "DECLARE", "DO", "ELSE", "END", "EXIT", "FLOAT", "FOR", "IF", "IN",
  "INTEGER", "LOOP", "PRINT", "PRINTLN", "PROCEDURE", "PROGRAM", "RETURN",
  "STRING", "WHILE", "THEN", "BOOLEAN", "READ", "ID", "BOOLEAN_C",
  "INTEGER_C", "REAL_C", "STRING_C", "'<'", "'='", "'>'", "'+'", "'-'",
  "'*'", "'/'", "UMINUS", "';'", "':'", "'['", "']'", "'('", "')'", "'.'",
  "','", "$accept", "program", "$@1", "$@2", "$@3", "$@4", "main_block",
  "$@5", "opt_variables_dec", "constant_dec", "variable_dec",
  "variable_type", "constant_value", "opt_procedures_dec", "procedure_dec",
  "$@6", "$@7", "$@8", "$@9", "opt_arguments", "arguments", "argument",
  "opt_return_type", "opt_statements", "statement", "simple", "$@10",
  "$@11", "block", "$@12", "$@13", "conditional", "$@14", "$@15",
  "else_statement", "$@16", "BorS", "loop", "$@17", "$@18",
  "procedure_invocation", "$@19", "opt_comma_separated", "comma_separated",
  "procedure_expression", "expression", YY_NULLPTR
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
      59,    58,    91,    93,    40,    41,    46,    44
};
# endif

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -78

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,   -19,    43,    18,  -179,    31,    41,    38,    44,  -179,
      41,    23,    41,    38,    38,    14,    42,  -179,    39,  -179,
      -2,  -179,  -179,  -179,    45,    67,   419,    81,    39,   -30,
    -179,  -179,  -179,  -179,    39,    39,  -179,  -179,   173,    15,
    -179,  -179,  -179,  -179,    -1,    42,    64,     6,  -179,  -179,
      38,    54,  -179,  -179,  -179,   399,  -179,    72,     1,  -179,
     419,  -179,  -179,  -179,  -179,  -179,    73,   377,    39,    57,
    -179,    99,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,  -179,    39,     6,    39,  -179,    39,
      93,    62,    59,  -179,    65,  -179,     4,   419,   113,    87,
      39,    39,    39,  -179,   192,    39,    75,    39,    39,   107,
    -179,  -179,   114,    39,  -179,    49,    49,    49,   377,   359,
      49,    49,    49,   -22,   -22,  -179,  -179,   201,   121,   221,
     126,    91,     6,    67,    64,   116,   118,  -179,   108,   345,
     249,   269,  -179,   352,  -179,   278,   145,    89,  -179,    85,
    -179,    94,   352,  -179,    39,  -179,   105,  -179,  -179,  -179,
    -179,   127,   125,   419,   124,  -179,  -179,  -179,   140,  -179,
     176,  -179,   133,    39,   297,  -179,     4,   134,  -179,   166,
     130,   438,   438,    39,  -179,  -179,  -179,   175,  -179,   151,
     146,     1,  -179,  -179,   185,   188,   326,   174,  -179,   171,
    -179,   193,   187,  -179,   164,   167,   438,   204,   180,  -179,
     438,  -179,   181,  -179,   213,  -179,   210,   191,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,    30,    12,     0,     6,
      29,     0,    30,    12,    12,    34,     0,    28,     0,    18,
       0,     3,    11,    10,     0,    43,    46,     0,     0,    84,
      26,    24,    25,    27,     0,     0,    85,    87,     0,     0,
      23,    20,    21,    22,     0,     0,    38,     0,    35,    63,
      12,     0,    65,    54,    56,     0,    73,     0,    77,     8,
      45,    47,    48,    49,    50,    51,     0,    99,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,    16,     0,
       0,     0,     0,    37,    40,    42,     0,    46,     0,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,     0,
      44,     7,     0,    80,   102,    94,    96,    98,   100,   101,
      93,    95,    97,    91,    92,    89,    90,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,    61,     0,     0,
       0,     0,    59,    74,    58,     0,     0,     0,    86,     0,
      79,    82,    83,    14,     0,    15,     0,     4,    41,    32,
      39,     0,     0,    46,     0,    66,    55,    57,     0,    52,
       0,     9,     0,     0,     0,    19,     0,     0,    64,     0,
       0,     0,     0,     0,    78,    81,    13,     0,    36,     0,
       0,     0,    71,    72,    70,     0,     0,     0,    62,     0,
      68,     0,     0,    53,     0,     0,     0,     0,     0,    33,
       0,    69,     0,    75,     0,    67,     0,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,  -179,  -179,  -179,   205,  -179,    -5,  -179,
    -179,   -44,  -179,    34,  -179,  -179,  -179,  -179,  -179,  -179,
     128,  -179,   122,   -58,  -179,  -170,  -179,  -179,   -90,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -178,  -179,  -179,  -179,
     -25,  -179,  -179,    86,  -179,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    45,     6,    16,    27,   109,    12,    13,
      14,    44,    36,     9,    10,    24,   176,    25,    96,    92,
      93,    94,    48,    59,    60,    61,   101,   102,    62,   163,
      97,    63,   100,   181,   201,   206,   194,    64,   105,   168,
      37,    69,   149,   150,   151,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    65,   110,    95,   195,    87,   135,   107,    22,    23,
      67,   192,   192,    39,    49,     1,    70,    71,     3,    40,
      50,    85,    68,    41,   -77,    82,    83,    40,   211,    18,
      42,    41,   214,    43,    -2,    65,   192,   104,    42,   136,
     192,    43,   128,     4,    17,    98,    21,     7,    28,    88,
     112,    89,    26,   108,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    86,   127,   -31,   129,
       8,   130,    65,    19,    20,    11,    29,    30,    31,    32,
      33,    15,   139,   140,   141,    34,   187,   143,   158,   145,
     146,   193,   193,    35,    80,    81,    82,    83,    47,    46,
      66,    91,    72,    73,    74,   179,    75,    76,    99,   106,
     111,   113,   131,   132,   133,   134,   193,    72,    73,    74,
     193,    75,    76,   137,   138,   144,   147,   154,   157,    72,
      73,    74,   164,    75,    76,   161,   174,   162,    65,   171,
     172,    77,    78,    79,    80,    81,    82,    83,    72,    73,
      74,   173,    75,    76,   114,   175,    77,    78,    79,    80,
      81,    82,    83,   180,   177,   196,   182,   148,    77,    78,
      79,    80,    81,    82,    83,   178,    72,    73,    74,   156,
      75,    76,   183,   184,   188,   189,   190,    77,    78,    79,
      80,    81,    82,    83,   197,    72,    73,    74,   170,    75,
      76,   198,   199,   200,    72,    73,    74,   202,    75,    76,
     205,   204,   207,   208,   209,    77,    78,    79,    80,    81,
      82,    83,   210,    84,    72,    73,    74,   212,    75,    76,
     213,   215,   216,   217,    77,    78,    79,    80,    81,    82,
      83,   218,   142,    77,    78,    79,    80,    81,    82,    83,
      90,   153,    72,    73,    74,   159,    75,    76,     0,   185,
       0,     0,   160,    77,    78,    79,    80,    81,    82,    83,
       0,   155,    72,    73,    74,     0,    75,    76,     0,     0,
       0,    72,    73,    74,     0,    75,    76,     0,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,     0,   166,
      72,    73,    74,     0,    75,    76,     0,     0,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,     0,   167,
      77,    78,    79,    80,    81,    82,    83,     0,   169,    72,
      73,    74,     0,    75,    76,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,     0,   186,    72,    73,
      74,     0,    75,    76,     0,    72,    73,    74,     0,    75,
      76,     0,    72,    73,    74,     0,    75,     0,    77,    78,
      79,    80,    81,    82,    83,     0,   203,     0,     0,   165,
      72,    73,    74,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,    77,    78,    79,    80,    81,    82,
      83,    77,    78,    79,    80,    81,    82,    83,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,     0,     0,     0,    49,
       0,     0,     0,     0,     0,    50,    29,    30,    31,    32,
      33,    51,    52,     0,     0,    34,    53,    54,    49,   103,
      55,     0,    56,    35,    50,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,    55,
       0,     0,     0,     0,    57,   191
};

static const yytype_int16 yycheck[] =
{
      18,    26,    60,    47,   182,     6,    96,     6,    13,    14,
      28,   181,   182,    15,    10,    30,    34,    35,    37,    21,
      16,     6,    52,    25,    54,    47,    48,    21,   206,     6,
      32,    25,   210,    35,    16,    60,   206,    55,    32,    97,
     210,    35,    86,     0,    10,    50,    12,    16,     9,    50,
      68,    52,    10,    52,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    51,    85,    54,    87,
      29,    89,    97,    50,    51,    37,    37,    38,    39,    40,
      41,    37,   100,   101,   102,    46,   176,   105,   132,   107,
     108,   181,   182,    54,    45,    46,    47,    48,    31,    54,
      19,    37,     3,     4,     5,   163,     7,     8,    54,    37,
      37,    54,    19,    51,    55,    50,   206,     3,     4,     5,
     210,     7,     8,    10,    37,    50,    19,     6,    37,     3,
       4,     5,    24,     7,     8,    19,   154,    19,   163,    50,
      55,    42,    43,    44,    45,    46,    47,    48,     3,     4,
       5,    57,     7,     8,    55,    50,    42,    43,    44,    45,
      46,    47,    48,    39,    37,   183,    26,    53,    42,    43,
      44,    45,    46,    47,    48,    50,     3,     4,     5,    53,
       7,     8,     6,    50,    50,    19,    56,    42,    43,    44,
      45,    46,    47,    48,    19,     3,     4,     5,    53,     7,
       8,    50,    56,    18,     3,     4,     5,    19,     7,     8,
      39,    37,    19,    26,    50,    42,    43,    44,    45,    46,
      47,    48,    55,    50,     3,     4,     5,    23,     7,     8,
      50,    50,    19,    23,    42,    43,    44,    45,    46,    47,
      48,    50,    50,    42,    43,    44,    45,    46,    47,    48,
      45,    50,     3,     4,     5,   133,     7,     8,    -1,   173,
      -1,    -1,   134,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     3,     4,
       5,    -1,     7,     8,    -1,     3,     4,     5,    -1,     7,
       8,    -1,     3,     4,     5,    -1,     7,    -1,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    34,
       3,     4,     5,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    42,    43,    44,    45,    46,    47,
      48,    42,    43,    44,    45,    46,    47,    48,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    37,    38,    39,    40,
      41,    22,    23,    -1,    -1,    46,    27,    28,    10,    50,
      31,    -1,    33,    54,    16,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    59,    37,     0,    60,    62,    16,    29,    71,
      72,    37,    66,    67,    68,    37,    63,    71,     6,    50,
      51,    71,    66,    66,    73,    75,    10,    64,     9,    37,
      38,    39,    40,    41,    46,    54,    70,    98,   103,    15,
      21,    25,    32,    35,    69,    61,    54,    31,    80,    10,
      16,    22,    23,    27,    28,    31,    33,    36,    37,    81,
      82,    83,    86,    89,    95,    98,    19,   103,    52,    99,
     103,   103,     3,     4,     5,     7,     8,    42,    43,    44,
      45,    46,    47,    48,    50,     6,    51,     6,    50,    52,
      64,    37,    77,    78,    79,    69,    76,    88,    66,    54,
      90,    84,    85,    50,   103,    96,    37,     6,    52,    65,
      81,    37,   103,    54,    55,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,    69,   103,
     103,    19,    51,    55,    50,    86,    81,    10,    37,   103,
     103,   103,    50,   103,    50,   103,   103,    19,    53,   100,
     101,   102,   103,    50,     6,    50,    53,    37,    69,    80,
      78,    19,    19,    87,    24,    34,    50,    50,    97,    50,
      53,    50,    55,    57,   103,    50,    74,    37,    50,    81,
      39,    91,    26,     6,    50,   101,    50,    86,    50,    19,
      56,    37,    83,    86,    94,    94,   103,    19,    50,    56,
      18,    92,    19,    50,    37,    39,    93,    19,    26,    50,
      55,    94,    23,    50,    94,    50,    19,    23,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    60,    61,    59,    62,    63,    59,    65,    64,
      66,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    73,    74,    72,    75,    76,    72,    77,    77,    78,
      78,    79,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    82,    83,    83,    84,    83,    85,    83,    83,    83,
      83,    87,    86,    88,    86,    90,    91,    89,    93,    92,
      92,    94,    94,    96,    97,    95,    95,    99,    98,   100,
     100,   101,   101,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    10,     0,     0,     8,     0,     5,
       2,     2,     0,     8,     6,     6,     4,     4,     2,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       0,     0,     0,    12,     0,     0,     9,     1,     0,     3,
       1,     3,     2,     0,     2,     1,     0,     1,     1,     1,
       1,     1,     4,     7,     0,     4,     0,     4,     3,     3,
       2,     0,     7,     0,     5,     0,     0,    10,     0,     3,
       0,     1,     1,     0,     0,     9,    13,     0,     6,     1,
       0,     3,     1,     1,     1,     1,     4,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3
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
#line 63 "parser.y" /* yacc.c:1646  */
    {
				ProgramStart();
				Trace("program(program)");
			}
#line 1522 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "parser.y" /* yacc.c:1646  */
    {
				Trace("program(declare)");
				MainStart();
			}
#line 1531 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "parser.y" /* yacc.c:1646  */
    {
                         	if(main_num == 0){
					yyerror("no main");
				}
                                symbols.pop();
				ProgramEnd();
                        }
#line 1543 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "parser.y" /* yacc.c:1646  */
    {
                                ProgramStart();
                                Trace("program(program)");
                        }
#line 1552 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "parser.y" /* yacc.c:1646  */
    {
                                Trace("program(declare)");
                                MainStart();
                        }
#line 1561 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 91 "parser.y" /* yacc.c:1646  */
    {
                                if(main_num == 0){
                                        yyerror("no main");
                                }
                                symbols.pop();
                                ProgramEnd();
                        }
#line 1573 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 101 "parser.y" /* yacc.c:1646  */
    {
                                main_num++;
                        }
#line 1581 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 105 "parser.y" /* yacc.c:1646  */
    {
				Return();
				MainEnd();
			}
#line 1590 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "parser.y" /* yacc.c:1646  */
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
#line 1606 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("constant declaration");
				/* check constant */
                          	if (!isConst(*(yyvsp[-1].info))) yyerror("expression not constant value");
	                        (yyvsp[-1].info)->flag = constVariableFlag;
                          	(yyvsp[-1].info)->init = true;
				/* symbol check */
				if (symbols.insert(*(yyvsp[-5].sval), *(yyvsp[-1].info)) == -1) yyerror("constant redefinition");
                        }
#line 1620 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 141 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("variable declaration(ID ':' variable_type ':=' expression ';' )");
				/* check constant*/
                          	//if (!isConst(*$5)) yyerror("expression is not constant value");
				/* check type */
                          	if ((yyvsp[-3].type) != (yyvsp[-1].info)->type) yyerror("type is not match");
	                        (yyvsp[-1].info)->flag = variableFlag;
        	                (yyvsp[-1].info)->init = true;
				/* symbol check */
				if (symbols.insert(*(yyvsp[-5].sval), *(yyvsp[-1].info)) == -1) yyerror("variable redefinition");
				if ((yyvsp[-3].type) == intType || (yyvsp[-3].type) == boolType) {
					int idx = symbols.getIndex(*(yyvsp[-5].sval));
					int val = getValue(*(yyvsp[-1].info));
					if (idx == -1) {
						GlobalVarWithVal(*(yyvsp[-5].sval), val);
					}
					else if (idx >= 0) {
						LocalVarWithVal(idx, val);
					}
				}
			}
#line 1646 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 163 "parser.y" /* yacc.c:1646  */
    {
				Trace("variable declaration (ID ':' variable_type expression ';')");
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = (yyvsp[-1].type);
                          	info->init = false;
                          	if (symbols.insert(*(yyvsp[-3].sval), *info) == -1) yyerror("variable redefinition");
				if ((yyvsp[-1].type) == intType || (yyvsp[-1].type) == boolType) {
					int idx = symbols.getIndex(*(yyvsp[-3].sval));
					if (idx == -1) {
                                                GlobalVar(*(yyvsp[-3].sval));
                                        }
				}
			}
#line 1665 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "parser.y" /* yacc.c:1646  */
    {
                        	Trace("variable declaration (ID ASSIGNMENT expression ';')");
                          	//if (!isConst(*$3)) yyerror("expression not constant value");
	                        (yyvsp[-1].info)->flag = variableFlag;
        	                (yyvsp[-1].info)->init = true;
                	        if (symbols.insert(*(yyvsp[-3].sval), *(yyvsp[-1].info)) == -1) yyerror("variable redefinition"); /* symbol check */
				int idx = symbols.getIndex(*(yyvsp[-3].sval));
				int val = getValue(*(yyvsp[-1].info));
				if (idx == -1) {
					GlobalVarWithVal(*(yyvsp[-3].sval), val);
				}
				else if (idx >= 0){
					LocalVarWithVal(idx, val);
				}
                        }
#line 1685 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 194 "parser.y" /* yacc.c:1646  */
    {
                        	Trace("variable declaration(ID ';')");

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = intType;
                          	info->init = false;
                          	if (symbols.insert(*(yyvsp[-1].sval), *info) == -1) yyerror("variable redefinition"); /* symbol check */
				int idx = symbols.getIndex(*(yyvsp[-1].sval));
				if (idx == -1) {
					GlobalVar(*(yyvsp[-1].sval));
				}
                        }
#line 1703 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 208 "parser.y" /* yacc.c:1646  */
    {
			  	Trace("array declaration");
                          	if (!isConst(*(yyvsp[-2].info))) yyerror("array size not constant");
                          	if ((yyvsp[-2].info)->type != intType) yyerror("array size not integer");
                          	if ((yyvsp[-2].info)->value.ival < 1) yyerror("array size < 1");
                          	if (symbols.insert(*(yyvsp[-6].sval), (yyvsp[-4].type), (yyvsp[-2].info)->value.ival) == -1) yyerror("variable redefinition");
			}
#line 1715 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 218 "parser.y" /* yacc.c:1646  */
    {
				(yyval.type) = intType;
			}
#line 1723 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 222 "parser.y" /* yacc.c:1646  */
    {
				(yyval.type) = strType;
			}
#line 1731 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 226 "parser.y" /* yacc.c:1646  */
    {	
				(yyval.type) = boolType;
			}
#line 1739 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 230 "parser.y" /* yacc.c:1646  */
    {
				(yyval.type) = realType;
			}
#line 1747 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 236 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = intConst((yyvsp[0].ival));
			}
#line 1755 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 240 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = realConst((yyvsp[0].dval));
			}
#line 1763 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 244 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = boolConst((yyvsp[0].bval));
			}
#line 1771 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 248 "parser.y" /* yacc.c:1646  */
    {
				(yyval.info) = strConst((yyvsp[0].sval));
			}
#line 1779 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 260 "parser.y" /* yacc.c:1646  */
    {
				Trace("procedure declaration");
                                idInfo *info = new idInfo();
                                info->flag = functionFlag;
                                info->init = false;
                                if (symbols.insert(*(yyvsp[0].sval), *info) == -1) yyerror("function redefinition"); /* symbol check */
                                symbols.push();

			}
#line 1793 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 270 "parser.y" /* yacc.c:1646  */
    {
                                FuncStart(*symbols.lookup(*(yyvsp[-5].sval)));
			}
#line 1801 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 274 "parser.y" /* yacc.c:1646  */
    {
				if (symbols.lookup(*(yyvsp[-10].sval))->type == voidType) {
					VoidFuncEnd();
				}
				else {
					BlockEnd();
				}
				method_num++;
                          	symbols.pop();
			}
#line 1816 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 285 "parser.y" /* yacc.c:1646  */
    {
                                Trace("procedure declaration");
                                idInfo *info = new idInfo();
                                info->flag = functionFlag;
                                info->init = false;
                                if (symbols.insert(*(yyvsp[0].sval), *info) == -1) yyerror("function redefinition"); /* symbol check */
                                symbols.push();

                        }
#line 1830 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 295 "parser.y" /* yacc.c:1646  */
    {
                                FuncStart(*symbols.lookup(*(yyvsp[-2].sval)));
                        }
#line 1838 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 299 "parser.y" /* yacc.c:1646  */
    {
                                if (symbols.lookup(*(yyvsp[-7].sval))->type == voidType) {
                                        VoidFuncEnd();
                                }
                                else {
                                        BlockEnd();
                                }
                                method_num++;
                                symbols.pop();
                        }
#line 1853 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 320 "parser.y" /* yacc.c:1646  */
    {
				idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = (yyvsp[0].type);
                          	info->init = false;
                          	if (symbols.insert(*(yyvsp[-2].sval), *info) == -1) yyerror("variable redefinition");
                          	symbols.addFuncArg(*(yyvsp[-2].sval), *info);
			}
#line 1866 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 331 "parser.y" /* yacc.c:1646  */
    {
				symbols.setFuncType((yyvsp[0].type));
			}
#line 1874 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 335 "parser.y" /* yacc.c:1646  */
    {
				symbols.setFuncType(voidType);
			}
#line 1882 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 350 "parser.y" /* yacc.c:1646  */
    {
                            if((yyvsp[0].info) != NULL) yyerror("procedure invocation should not have return value");
                        }
#line 1890 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 356 "parser.y" /* yacc.c:1646  */
    {
				Trace(" variable assignment");
	                        idInfo *info = symbols.lookup(*(yyvsp[-3].sval));
                          	if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          	if (info->flag == constVariableFlag) yyerror("can't assign to constant"); /* constant check */
                          	if (info->flag == functionFlag) yyerror("can't assign to function"); /* function check */
                          	if (info->type != (yyvsp[-1].info)->type) yyerror("type not match"); /* type check */
				 if (info->type == intType || info->type == boolType) {
					int idx = symbols.getIndex(*(yyvsp[-3].sval));
					if (idx == -1)
						SetGlobalVar(*(yyvsp[-3].sval));
					else
						SetLocalVar(idx);
				}
			}
#line 1910 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 372 "parser.y" /* yacc.c:1646  */
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
#line 1926 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 384 "parser.y" /* yacc.c:1646  */
    {
                                PrintStart();
                        }
#line 1934 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 388 "parser.y" /* yacc.c:1646  */
    {
				Trace("print(expression)");
				if ((yyvsp[-1].info)->type == strType){
					ConstStr((yyvsp[-1].info)->value.sval);
					PrintStr();
				}
				else {
					PrintInt();
				}
			}
#line 1949 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 413 "parser.y" /* yacc.c:1646  */
    {
                                PrintStart();
                        }
#line 1957 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 417 "parser.y" /* yacc.c:1646  */
    {
				Trace("println(expression)");
				if ((yyvsp[-1].info)->type == strType) {
					ConstStr((yyvsp[-1].info)->value.sval);
                                        PrintlnStr();
				}
                                else {
                                        PrintlnInt();
				}
			}
#line 1972 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 442 "parser.y" /* yacc.c:1646  */
    {
				idInfo *info = symbols.lookup(*(yyvsp[-1].sval));
	                        if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
        	                Trace("READ ID");

			}
#line 1983 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 449 "parser.y" /* yacc.c:1646  */
    {
				Trace("return expression");
				IReturn();
			}
#line 1992 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 454 "parser.y" /* yacc.c:1646  */
    {
				Trace("return");
				Return();
			}
#line 2001 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 462 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block start----");
				symbols.push();
			}
#line 2010 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 467 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block end----");
				symbols.pop();
			}
#line 2019 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 472 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block start----");
                                symbols.push();
			}
#line 2028 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 477 "parser.y" /* yacc.c:1646  */
    {
				Trace("----block end----");
                                symbols.pop();
			}
#line 2037 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 484 "parser.y" /* yacc.c:1646  */
    {
				IfStart();
			}
#line 2045 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 488 "parser.y" /* yacc.c:1646  */
    {
                          	if ((yyvsp[-1].info)->type != boolType) yyerror("condition type error (if_then_else)");
                        }
#line 2053 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 492 "parser.y" /* yacc.c:1646  */
    {
				Trace(" if then else");
				IfEnd();
			}
#line 2062 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 499 "parser.y" /* yacc.c:1646  */
    {
				Else();
			}
#line 2070 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 511 "parser.y" /* yacc.c:1646  */
    {
				WhileStart();
			}
#line 2078 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 515 "parser.y" /* yacc.c:1646  */
    {
				WhileCond();
			}
#line 2086 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 519 "parser.y" /* yacc.c:1646  */
    {
				Trace("while loop");
				WhileEnd();
			}
#line 2095 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 524 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("FOR loop");
                          	idInfo *info = symbols.lookup(*(yyvsp[-10].sval));
                          	if (info == NULL) yyerror("undeclared indentifier(for)"); /* declaration check */
                          	if (info->flag != variableFlag) yyerror("not a variable(for)"); /* function check */
                          	if(info->type != intType) yyerror("variable should be int(for)");

                        }
#line 2108 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 535 "parser.y" /* yacc.c:1646  */
    {
                          functions.push_back(vector<idInfo>());
                        }
#line 2116 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 539 "parser.y" /* yacc.c:1646  */
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
				CallFunc(*info);
                          	(yyval.info) = info;
                          	functions.pop_back();
                        }
#line 2135 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 567 "parser.y" /* yacc.c:1646  */
    {
                          	functions[functions.size() - 1].push_back(*(yyvsp[0].info));
                        }
#line 2143 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 573 "parser.y" /* yacc.c:1646  */
    {
                          	idInfo *info = symbols.lookup(*(yyvsp[0].sval));
                          	if (info == NULL) yyerror("undeclared indentifier");
                          	(yyval.info) = info;
				if (!symbols.isGlobal() && isConst(*info)) {
					if (info->type == strType) {
						ConstStr(info->value.sval);
					}
					else if (info->type == intType || info->type == boolType) {
						ConstInt(getValue(*info));
					}
				}
				else if (info->type == intType || info->type == boolType) {
					int idx = symbols.getIndex(*(yyvsp[0].sval));
					if (idx == -1) {
						GetGlobalVar(*(yyvsp[0].sval));
					}
					else {
						GetLocalVar(idx);
					}
				}
                        }
#line 2170 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 596 "parser.y" /* yacc.c:1646  */
    {
				if (!symbols.isGlobal()){
					if ((yyvsp[0].info)->type == strType)
						ConstStr((yyvsp[0].info)->value.sval);
					else if ((yyvsp[0].info)->type == intType || (yyvsp[0].info)->type == boolType)
						ConstInt(getValue(*(yyvsp[0].info)));
				}
                            	(yyval.info) = (yyvsp[0].info);
                        }
#line 2184 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 606 "parser.y" /* yacc.c:1646  */
    {
                          	idInfo *info = symbols.lookup(*(yyvsp[-3].sval));
                          	if (info == NULL) yyerror("undeclared identifier");
                          	if (info->type != arrayType) yyerror("not array type");
                          	if ((yyvsp[-1].info)->type != intType) yyerror("invalid index");
                          	if ((yyvsp[-1].info)->value.ival >= info->value.aval.size()) yyerror("index out of range");
                          	(yyval.info) = new idInfo(info->value.aval[(yyvsp[-1].info)->value.ival]);
                        }
#line 2197 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 616 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("-expression");

                          	if ((yyvsp[0].info)->type != intType && (yyvsp[0].info)->type != realType) yyerror("operator error"); /* operator check */
				if (!symbols.isGlobal())
                          	if((yyvsp[0].info) -> type == intType)
                          	{
                            		(yyvsp[0].info) -> value.ival *= -1;
                          	}
                          	else
                         	{
                            		(yyvsp[0].info) -> value.dval *= -1;
                          	}
                          	(yyval.info) = (yyvsp[0].info);
				if ((yyvsp[0].info)->type == intType)
				{
					Operator('n');
				}
                        }
#line 2221 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 636 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression * expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          	if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = (yyvsp[-2].info)->type;
				(yyval.info) = info;

                          	if((yyvsp[-2].info) -> type == intType)
					Operator('*');
                        }
#line 2238 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 649 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression / expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          	if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType) yyerror("operator error"); /* operator check */

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                         	info->type = (yyvsp[-2].info)->type;
				(yyval.info) = info;
                          	if((yyvsp[-2].info) -> type == intType){
					Operator('/');
                          	}
                        }
#line 2256 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 663 "parser.y" /* yacc.c:1646  */
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
				if ((yyvsp[-2].info)->type == intType)
					Operator('+');
                        }
#line 2281 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 684 "parser.y" /* yacc.c:1646  */
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
				if ((yyvsp[-2].info)->type == intType)
					Operator('-');
                        }
#line 2307 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 706 "parser.y" /* yacc.c:1646  */
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
				if ((yyvsp[-2].info)->type == intType) 
					CondOp(IFLT);
                        }
#line 2335 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 730 "parser.y" /* yacc.c:1646  */
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
				if ((yyvsp[-2].info)->type == intType) 
					CondOp(IFLE);
                        }
#line 2363 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 754 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression == expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /*type check*/
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

				if ((yyvsp[-2].info)->type == intType || (yyvsp[-2].info)->type == boolType)
                            		CondOp(IFEQ);
                        }
#line 2391 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 778 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression >= expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          	if ((yyvsp[-2].info)->type != intType && (yyvsp[-2].info)->type != realType && (yyvsp[-2].info)->type!= boolType) yyerror("operator error"); /* operator check */

                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = boolType;
                          	if((yyvsp[-2].info) -> type == intType) {
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
				if ((yyvsp[-2].info)->type == intType) 
					CondOp(IFGE);
                        }
#line 2419 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 802 "parser.y" /* yacc.c:1646  */
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
				if ((yyvsp[-2].info)->type == intType) 
					CondOp(IFGT);
                        }
#line 2448 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 827 "parser.y" /* yacc.c:1646  */
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
				if ((yyvsp[-2].info)->type == intType || (yyvsp[-2].info)->type == boolType) 
					CondOp(IFNE);
                        }
#line 2475 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 850 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("NOT expression");
                          	if ((yyvsp[0].info)->type != boolType) yyerror("operator error"); /* operator check */
                          	(yyvsp[0].info) -> value.bval = !(yyvsp[0].info) -> value.bval;
                          	(yyval.info) = (yyvsp[0].info);
				if ((yyvsp[0].info)->type == boolType) 
					Operator('N');
                        }
#line 2488 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 859 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression and expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          	if ((yyvsp[-2].info)->type != boolType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                          	info->flag = variableFlag;
                          	info->type = boolType;
                          	info -> value.bval = (yyvsp[-2].info)-> value.bval && (yyvsp[0].info) -> value.bval;
                          	(yyval.info) = info;
				if ((yyvsp[-2].info)->type == boolType) 
					Operator('A');
                        }
#line 2505 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 872 "parser.y" /* yacc.c:1646  */
    {
                          	Trace("expression or expression");
                          	if ((yyvsp[-2].info)->type != (yyvsp[0].info)->type) yyerror("type not match"); /* type check */
                          	if ((yyvsp[-2].info)->type != boolType) yyerror("operator error"); /* operator check */
                          	idInfo *info = new idInfo();
                         	info->flag = variableFlag;
                          	info->type = boolType;
                          	info -> value.bval = (yyvsp[-2].info)-> value.bval && (yyvsp[0].info) -> value.bval;
                          	(yyval.info) = info;
				if ((yyvsp[-2].info)->type == boolType) 
					Operator('O');
                        }
#line 2522 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 885 "parser.y" /* yacc.c:1646  */
    {
                          	(yyval.info) = (yyvsp[-1].info);
                        }
#line 2530 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2534 "y.tab.cpp" /* yacc.c:1646  */
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
#line 890 "parser.y" /* yacc.c:1906  */


void yyerror(string s) {
	cerr << "line" << lineNum << ":" << s << endl;
	exit(1);
}	
	
int main(int argc, char **argv) {
	yyin = fopen(argv[1], "r");
  	string source = string(argv[1]);
  	int dot = source.find(".");
  	filename = source.substr(0, dot);
  	out.open(filename + ".jasm");
	yyparse();
	return 0;
}
