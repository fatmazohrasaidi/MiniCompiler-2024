
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
#line 1 "synta.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
        int nb_ligne=1, nb_colonne=1;
	char sauv_op[20];
	//#include "ts.h"
	int yylex();
	int yyerror(char *msg);
void mise_ajour(char entite[], int lmax, int cmax, int y);
void verifi_type(char entite[], int l, int c);
int lookup(char entite[], int y);
void initialisation();
void afficher();


/* Line 189 of yacc.c  */
#line 90 "synta.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     mc_program = 258,
     mc_end = 259,
     mc_call = 260,
     mc_routine = 261,
     mc_endr = 262,
     integer = 263,
     real = 264,
     character = 265,
     logical = 266,
     dimension = 267,
     mc_true = 268,
     mc_false = 269,
     READ = 270,
     mc_write = 271,
     inst_if = 272,
     inst_then = 273,
     mc_else = 274,
     mc_endif = 275,
     inst_dowhile = 276,
     mc_enddo = 277,
     mc_equivalence = 278,
     mc_or = 279,
     mc_and = 280,
     mc_gt = 281,
     mc_ge = 282,
     mc_eq = 283,
     mc_ne = 284,
     mc_le = 285,
     mc_lt = 286,
     idf = 287,
     cst_reel = 288,
     cst_int = 289,
     DOUBL_QUOT = 290,
     plus = 291,
     moins = 292,
     mc_mult = 293,
     mc_div = 294,
     egal = 295,
     vg = 296,
     pvg = 297,
     pr_ov = 298,
     pr_fer = 299,
     comment = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "synta.y"

         int  entier;
         char* str;
         float reel;



/* Line 214 of yacc.c  */
#line 179 "synta.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "synta.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  263

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    18,    28,    29,    33,    37,    39,
      42,    44,    48,    51,    53,    55,    57,    59,    61,    66,
      71,    76,    80,    84,    88,    91,    92,    96,    98,   108,
     116,   124,   130,   136,   140,   143,   146,   149,   152,   155,
     158,   160,   162,   164,   166,   168,   170,   173,   174,   178,
     181,   185,   189,   191,   193,   197,   199,   201,   203,   210,
     215,   217,   219,   221,   223,   225,   227,   229,   231,   233,
     239,   243,   246,   250,   254,   256,   258,   261,   265,   267,
     271,   274,   276,   280,   286,   294,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   314,   316,   318,   320,   323,
     325,   327,   329,   332,   335,   337,   339,   341,   345,   348,
     350,   352,   356,   362,   366,   370,   374,   378,   387,   394,
     396,   398,   400,   402,   409,   414,   417,   421,   424,   429,
     433,   437,   446,   453,   462,   469,   471,   478,   483,   490
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    52,    55,    59,    51,    -1,    48,
      53,    49,    50,    67,    55,    59,     7,    -1,    48,    53,
      49,    50,    67,    45,    55,    59,     7,    -1,    -1,     6,
      32,    43,    -1,    50,    41,    32,    -1,    32,    -1,    45,
       4,    -1,     4,    -1,     3,    32,    45,    -1,     3,    32,
      -1,     8,    -1,     9,    -1,    11,    -1,    54,    -1,    10,
      -1,    55,    53,    56,    42,    -1,    55,    53,    57,    42,
      -1,    55,    54,    58,    42,    -1,    53,    56,    42,    -1,
      53,    57,    42,    -1,    54,    58,    42,    -1,    45,    55,
      -1,    -1,    56,    41,    32,    -1,    32,    -1,    57,    41,
      32,    12,    43,    34,    41,    34,    44,    -1,    57,    41,
      32,    12,    43,    34,    44,    -1,    32,    12,    43,    34,
      41,    34,    44,    -1,    32,    12,    43,    34,    44,    -1,
      58,    41,    32,    38,    34,    -1,    32,    38,    34,    -1,
      60,    59,    -1,    68,    59,    -1,    73,    59,    -1,    89,
      59,    -1,    93,    59,    -1,    97,    59,    -1,    60,    -1,
      68,    -1,    73,    -1,    89,    -1,    93,    -1,    97,    -1,
      45,    59,    -1,    -1,    61,    62,    42,    -1,    32,    40,
      -1,    62,    65,    63,    -1,    62,    65,    64,    -1,    64,
      -1,    63,    -1,    66,    62,    67,    -1,    33,    -1,    32,
      -1,    34,    -1,    32,    43,    34,    41,    34,    44,    -1,
      32,    43,    34,    44,    -1,    35,    -1,    13,    -1,    14,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    43,
      -1,    44,    -1,    15,    66,    72,    44,    42,    -1,    69,
      70,    71,    -1,    16,    43,    -1,    70,    41,    35,    -1,
      70,    41,    32,    -1,    35,    -1,    32,    -1,    44,    42,
      -1,    72,    41,    32,    -1,    32,    -1,    74,    81,    84,
      -1,    75,    76,    -1,    17,    -1,    66,    76,    77,    -1,
      66,    79,    80,    79,    67,    -1,    78,    66,    79,    80,
      79,    67,    67,    -1,    24,    -1,    25,    -1,    32,    -1,
      34,    -1,    33,    -1,    14,    -1,    13,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,    -1,
      82,    83,    -1,    18,    -1,    59,    -1,    88,    -1,    85,
      88,    -1,    86,    87,    -1,    19,    -1,    59,    -1,    20,
      -1,    90,    83,    92,    -1,    91,    76,    -1,    21,    -1,
      22,    -1,    94,    95,    96,    -1,    32,    40,     5,    32,
      43,    -1,    95,    41,    34,    -1,    95,    41,    33,    -1,
      95,    41,    35,    -1,    95,    41,    32,    -1,    95,    41,
      32,    43,    34,    41,    34,    44,    -1,    95,    41,    32,
      43,    34,    44,    -1,    34,    -1,    33,    -1,    35,    -1,
      32,    -1,    32,    43,    34,    41,    34,    44,    -1,    32,
      43,    34,    44,    -1,    44,    42,    -1,    98,    99,   100,
      -1,    23,    43,    -1,   101,    44,    41,    43,    -1,   101,
      44,    42,    -1,   101,    41,    32,    -1,   101,    41,    32,
      43,    34,    41,    34,    44,    -1,   101,    41,    32,    43,
      34,    44,    -1,   101,    41,    32,    43,    32,    41,    32,
      44,    -1,   101,    41,    32,    43,    32,    44,    -1,    32,
      -1,    32,    43,    34,    41,    34,    44,    -1,    32,    43,
      34,    44,    -1,    32,    43,    32,    41,    32,    44,    -1,
      32,    43,    32,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    33,    34,    35,    37,    39,    40,    43,
      44,    46,    47,    50,    51,    52,    53,    55,    58,    59,
      60,    61,    62,    63,    64,    65,    68,    69,    72,    73,
      74,    75,    77,    78,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   102,   105,
     112,   113,   114,   115,   117,   120,   121,   122,   123,   124,
     125,   126,   127,   130,   131,   132,   133,   135,   137,   150,
     151,   153,   155,   156,   157,   158,   160,   162,   163,   174,
     176,   179,   181,   182,   184,   186,   187,   189,   190,   191,
     192,   193,   195,   196,   197,   198,   199,   200,   202,   204,
     206,   208,   209,   211,   212,   213,   214,   221,   223,   224,
     226,   235,   237,   239,   240,   241,   242,   243,   244,   246,
     247,   248,   249,   250,   251,   253,   266,   268,   270,   272,
     274,   275,   276,   277,   278,   280,   281,   282,   283,   284
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_program", "mc_end", "mc_call",
  "mc_routine", "mc_endr", "integer", "real", "character", "logical",
  "dimension", "mc_true", "mc_false", "READ", "mc_write", "inst_if",
  "inst_then", "mc_else", "mc_endif", "inst_dowhile", "mc_enddo",
  "mc_equivalence", "mc_or", "mc_and", "mc_gt", "mc_ge", "mc_eq", "mc_ne",
  "mc_le", "mc_lt", "idf", "cst_reel", "cst_int", "DOUBL_QUOT", "plus",
  "moins", "mc_mult", "mc_div", "egal", "vg", "pvg", "pr_ov", "pr_fer",
  "comment", "$accept", "S", "ROUT", "DEB_ROUT", "LISTE_PARAME", "FIN",
  "PRO", "TYPE", "CHAR", "DECLARATION", "IDF_SIM", "IDF_TAB", "IDF_CHAR",
  "INSTRUCTION", "AFFECTATION", "AFF", "OPERANDE_S", "OPERANDE_S2",
  "OPERANDE", "OPERATION", "PROV", "PRFER", "ENTRE_SORTI", "DEBUT_WRITE",
  "BODYWRITE", "FIN_WRITE", "PLUSidf", "CONDITION_IF", "INSTRUCTION_IF",
  "DEB_IF", "EXP_COND", "REST_EXP", "ORAND", "CHOIX", "OPERATEUR",
  "INSTRUCTION_THEN", "DEB_THEN", "FIN_THEN", "INSTRUCT_IF",
  "INSTRUCTION_ELSE", "DEBSINON", "FINSINON", "FIN_IF", "CONDITION_WHILE",
  "INSTRUCTION_DOWHILE", "DEB_WHILE", "FIN_WHILE", "APPEL_FON",
  "BODY_APPEL", "FON_PAR", "FIN_APPEL", "EQUIV", "DEB_EQ", "BODY_EQ",
  "FIN_EQ", "EQ_PAR", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    53,    53,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    61,
      62,    62,    62,    62,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    66,    67,    68,
      68,    69,    70,    70,    70,    70,    71,    72,    72,    73,
      74,    75,    76,    76,    77,    78,    78,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    81,    82,
      83,    84,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    97,    98,    99,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     8,     9,     0,     3,     3,     1,     2,
       1,     3,     2,     1,     1,     1,     1,     1,     4,     4,
       4,     3,     3,     3,     2,     0,     3,     1,     9,     7,
       7,     5,     5,     3,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     0,     3,     2,
       3,     3,     1,     1,     3,     1,     1,     1,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     2,     3,     3,     1,     1,     2,     3,     1,     3,
       2,     1,     3,     5,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     2,     1,     1,     1,     3,     2,     1,
       1,     3,     5,     3,     3,     3,     3,     8,     6,     1,
       1,     1,     1,     6,     4,     2,     3,     2,     4,     3,
       3,     8,     6,     8,     6,     1,     6,     4,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,    13,    14,    17,    15,    25,
       0,    16,    12,    25,     0,     0,    47,     0,     0,    11,
      24,    27,     0,     0,     0,     0,     0,     0,    81,   109,
       0,     0,    47,     0,     0,     0,    40,     0,    41,     0,
      42,     0,     0,    43,    47,     0,    44,     0,    45,     0,
       0,     8,     0,     0,     0,    21,     0,    22,     0,     0,
      23,    67,     0,    71,   127,    49,    46,     0,     0,     0,
      10,     0,     2,    34,    61,    62,    56,    55,    57,    60,
       0,    53,    52,     0,    35,    75,    74,     0,    36,    99,
       0,    47,     0,    80,    37,   100,     0,   108,    38,   122,
     120,   119,   121,     0,    39,   135,     0,     0,     6,     0,
      68,    25,     0,    26,     0,    33,     0,    78,     0,     0,
      18,    19,    20,     9,     0,    63,    64,    65,    66,    48,
       0,     0,     0,     0,    70,   104,   106,    79,     0,    47,
     101,    98,    91,    90,    87,    89,    88,     0,     0,   110,
     107,     0,     0,     0,   111,     0,   126,     0,     0,     0,
       7,    25,    47,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    54,    73,    72,    76,   102,   105,   103,    85,
      86,    82,     0,    92,    93,    94,    95,    96,    97,     0,
       0,   116,   114,   113,   115,   125,     0,     0,     0,   130,
       0,    24,     0,     0,    31,     0,    32,    77,    69,   112,
       0,    59,     0,     0,     0,   124,     0,     0,   139,     0,
     137,   129,     0,   128,     0,     3,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     4,    30,     0,
      29,    58,     0,   123,     0,   118,   138,   136,     0,   134,
       0,   132,     0,     0,     0,     0,     0,    28,     0,   117,
     133,   131,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    18,    52,    72,     9,    14,    15,    16,
      22,    23,    25,    95,    36,    37,    80,    81,    82,   130,
      83,   111,    38,    39,    87,   134,   118,    40,    41,    42,
      93,   181,   182,   148,   189,    90,    91,    96,   137,   138,
     139,   178,   140,    43,    44,    45,   150,    46,    47,   103,
     154,    48,    49,   106,   156,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -183
static const yytype_int16 yypact[] =
{
    -183,    33,   109,  -183,     5,  -183,  -183,  -183,  -183,    46,
      38,  -183,     3,    46,    18,    29,    30,    35,    39,  -183,
     128,    71,     1,    40,    54,    61,    72,    78,  -183,  -183,
      85,    64,    53,    18,    29,     4,    53,    45,    53,   -19,
      53,    79,    72,    53,    53,    72,    53,   108,    53,    41,
     126,  -183,    -9,   145,   158,  -183,   159,  -183,   160,   161,
    -183,  -183,   163,  -183,  -183,   187,  -183,   107,   117,   141,
    -183,   192,  -183,  -183,  -183,  -183,   154,  -183,  -183,  -183,
      57,  -183,  -183,    45,  -183,  -183,  -183,    70,  -183,  -183,
     165,    53,    73,  -183,  -183,  -183,    91,  -183,  -183,   155,
    -183,  -183,  -183,    81,  -183,   164,    41,    82,  -183,   169,
    -183,    55,   168,  -183,   191,  -183,   166,  -183,   111,   173,
    -183,  -183,  -183,  -183,   172,  -183,  -183,  -183,  -183,  -183,
      45,   -27,   121,   167,  -183,  -183,  -183,  -183,   188,    53,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,   162,   104,  -183,
    -183,   176,   112,   170,  -183,   -11,  -183,   113,   179,   174,
    -183,    46,    30,   122,   171,   182,   181,   175,   177,   123,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,    72,  -183,  -183,  -183,  -183,  -183,  -183,    76,
     124,   178,  -183,  -183,  -183,  -183,   129,   130,   180,   183,
     184,    30,   211,   185,  -183,   189,  -183,  -183,  -183,  -183,
     190,  -183,    76,   186,   194,  -183,   195,   193,  -183,   197,
    -183,  -183,    -5,  -183,   225,  -183,   196,   131,   198,   104,
    -183,   199,   135,   200,   201,   136,   137,  -183,  -183,   202,
    -183,  -183,    76,  -183,   203,  -183,  -183,  -183,   206,  -183,
     205,  -183,   204,   186,   207,   208,   209,  -183,   186,  -183,
    -183,  -183,  -183
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,  -183,  -183,  -183,  -183,    -2,    -1,   -10,
     213,   214,   215,   -12,  -183,  -183,   150,   105,   120,  -183,
     -20,  -129,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
     -40,  -183,  -183,  -182,    12,  -183,  -183,   143,  -183,  -183,
    -183,  -183,   116,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,   149
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      10,    11,   172,    20,    35,    97,    62,   213,    70,   125,
     126,   127,   128,    85,    33,    34,    86,   110,    33,    34,
      66,   196,    92,   197,    73,    92,    84,   235,    88,   236,
     229,    94,   109,     3,    98,   110,   104,    12,     5,     6,
       7,     8,    54,    55,    17,    26,    27,    28,    19,    71,
      21,    29,   147,    30,     5,     6,     7,     8,    74,    75,
     253,    24,    31,     5,     6,     7,     8,    50,    26,    27,
      28,    51,    92,   105,    29,    32,    30,    76,    77,    78,
      79,    56,    57,    53,   230,    31,   142,   143,    61,   142,
     143,    13,    58,   125,   126,   127,   128,    89,    32,   129,
     161,   162,    59,    60,    65,   144,   145,   146,   144,   145,
     146,   132,     4,   149,   133,    61,    61,     5,     6,     7,
       8,    63,   152,   158,   258,   153,   159,   177,    64,   262,
     183,   184,   185,   186,   187,   188,     5,     6,     7,     8,
      99,   100,   101,   102,   191,   192,   193,   194,    54,   120,
     202,   201,   166,   173,   158,   167,   174,   198,    56,   121,
      33,    34,   212,   203,   210,   214,   204,   211,   215,   108,
     217,   219,   239,   218,   220,   240,   244,   248,   250,   245,
     249,   251,    59,   122,   135,   136,   179,   180,   112,   224,
     113,   114,   119,   116,   115,   117,   123,   124,   151,    33,
      34,   160,   163,   164,   165,   168,   169,   155,   136,   175,
     190,   199,   195,   207,   205,   200,   206,   208,   225,   226,
     209,   216,   221,   227,   228,   233,   222,   223,   231,   232,
     110,   234,   237,   131,   141,   170,   252,   254,   255,   256,
     238,   242,   241,   243,   246,   247,    67,    68,   257,    69,
     171,   259,   260,   261,   176,   157
};

static const yytype_uint16 yycheck[] =
{
       2,     2,   131,    13,    16,    45,    26,   189,     4,    36,
      37,    38,    39,    32,    16,    16,    35,    44,    20,    20,
      32,    32,    42,    34,    36,    45,    38,    32,    40,    34,
     212,    43,    41,     0,    46,    44,    48,    32,     8,     9,
      10,    11,    41,    42,     6,    15,    16,    17,    45,    45,
      32,    21,    92,    23,     8,     9,    10,    11,    13,    14,
     242,    32,    32,     8,     9,    10,    11,    32,    15,    16,
      17,    32,    92,    32,    21,    45,    23,    32,    33,    34,
      35,    41,    42,    12,   213,    32,    13,    14,    43,    13,
      14,    45,    38,    36,    37,    38,    39,    18,    45,    42,
      45,   111,    41,    42,    40,    32,    33,    34,    32,    33,
      34,    41,     3,    22,    44,    43,    43,     8,     9,    10,
      11,    43,    41,    41,   253,    44,    44,   139,    43,   258,
      26,    27,    28,    29,    30,    31,     8,     9,    10,    11,
      32,    33,    34,    35,    32,    33,    34,    35,    41,    42,
     162,   161,    41,    32,    41,    44,    35,    44,    41,    42,
     162,   162,   182,    41,    41,    41,    44,    44,    44,    43,
      41,    41,    41,    44,    44,    44,    41,    41,    41,    44,
      44,    44,    41,    42,    19,    20,    24,    25,    43,   201,
      32,    32,     5,    32,    34,    32,     4,    43,    43,   201,
     201,    32,    34,    12,    38,    32,    34,    43,    20,    42,
      34,    32,    42,    32,    43,    41,    34,    42,     7,    34,
      43,    43,    42,    34,    34,    32,    43,    43,    34,    34,
      44,    34,     7,    83,    91,   130,    34,    34,    32,    34,
      44,   229,    44,    44,    44,    44,    33,    33,    44,    34,
     130,    44,    44,    44,   138,   106
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    48,     0,     3,     8,     9,    10,    11,    52,
      53,    54,    32,    45,    53,    54,    55,     6,    49,    45,
      55,    32,    56,    57,    32,    58,    15,    16,    17,    21,
      23,    32,    45,    53,    54,    59,    60,    61,    68,    69,
      73,    74,    75,    89,    90,    91,    93,    94,    97,    98,
      32,    32,    50,    12,    41,    42,    41,    42,    38,    41,
      42,    43,    66,    43,    43,    40,    59,    56,    57,    58,
       4,    45,    51,    59,    13,    14,    32,    33,    34,    35,
      62,    63,    64,    66,    59,    32,    35,    70,    59,    18,
      81,    82,    66,    76,    59,    59,    83,    76,    59,    32,
      33,    34,    35,    95,    59,    32,    99,   101,    43,    41,
      44,    67,    43,    32,    32,    34,    32,    32,    72,     5,
      42,    42,    42,     4,    43,    36,    37,    38,    39,    42,
      65,    62,    41,    44,    71,    19,    20,    84,    85,    86,
      88,    83,    13,    14,    32,    33,    34,    76,    79,    22,
      92,    43,    41,    44,    96,    43,   100,   101,    41,    44,
      32,    45,    55,    34,    12,    38,    41,    44,    32,    34,
      63,    64,    67,    32,    35,    42,    88,    59,    87,    24,
      25,    77,    78,    26,    27,    28,    29,    30,    31,    80,
      34,    32,    33,    34,    35,    42,    32,    34,    44,    32,
      41,    55,    59,    41,    44,    43,    34,    32,    42,    43,
      41,    44,    66,    79,    41,    44,    43,    41,    44,    41,
      44,    42,    43,    43,    59,     7,    34,    34,    34,    79,
      67,    34,    34,    32,    34,    32,    34,     7,    44,    41,
      44,    44,    80,    44,    41,    44,    44,    44,    41,    44,
      41,    44,    34,    79,    34,    32,    34,    44,    67,    44,
      44,    44,    67
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
#line 30 "synta.y"
    {printf("\nsyntaxe correcte");YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 33 "synta.y"
    {printf("%s ", (yyvsp[(8) - (8)].str)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 34 "synta.y"
    {printf("%s ", (yyvsp[(9) - (9)].str)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 37 "synta.y"
    {printf("%s %s %s",(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); mise_ajour((yyvsp[(2) - (3)].str),0,0,0);mise_ajour((yyvsp[(2) - (3)].str),0,0,1);mise_ajour(";",0,0,1); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 39 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 40 "synta.y"
    { printf("%s",(yyvsp[(1) - (1)].str)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 43 "synta.y"
    {printf("\n%s\n", (yyvsp[(2) - (2)].str)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 44 "synta.y"
    {printf("\n%s\n", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 46 "synta.y"
    { printf("\n%s %s\n",(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 47 "synta.y"
    { printf("\n%s %s\n",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 50 "synta.y"
    {printf("%s ", (yyvsp[(1) - (1)].str)); mise_ajour((yyvsp[(1) - (1)].str),0,0,1);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 51 "synta.y"
    {printf("%s ", (yyvsp[(1) - (1)].str)); mise_ajour((yyvsp[(1) - (1)].str),0,0,1);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 52 "synta.y"
    { printf("%s ", (yyvsp[(1) - (1)].str));mise_ajour((yyvsp[(1) - (1)].str),0,0,1); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 55 "synta.y"
    { printf("%s ", (yyvsp[(1) - (1)].str)); mise_ajour((yyvsp[(1) - (1)].str),0,0,1); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 58 "synta.y"
    { printf("%s\n",(yyvsp[(4) - (4)].str));mise_ajour((yyvsp[(4) - (4)].str),0,0,1); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 59 "synta.y"
    { printf("%s\n",(yyvsp[(4) - (4)].str)); mise_ajour((yyvsp[(4) - (4)].str),0,0,1);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 60 "synta.y"
    { printf("%s\n",(yyvsp[(4) - (4)].str)); mise_ajour((yyvsp[(4) - (4)].str),0,0,1);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 61 "synta.y"
    { printf("%s\n", (yyvsp[(3) - (3)].str)); mise_ajour((yyvsp[(3) - (3)].str),0,0,1);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 62 "synta.y"
    { printf("%s\n", (yyvsp[(3) - (3)].str)); mise_ajour((yyvsp[(3) - (3)].str),0,0,1);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 63 "synta.y"
    { printf("%s\n",(yyvsp[(3) - (3)].str)); mise_ajour((yyvsp[(3) - (3)].str),0,0,1);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 68 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));if(lookup((yyvsp[(3) - (3)].str),0)==1) printf("*erreur semantique!Double declaration*");  mise_ajour((yyvsp[(3) - (3)].str),0,0,1);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 69 "synta.y"
    { printf("%s",(yyvsp[(1) - (1)].str));if(lookup((yyvsp[(1) - (1)].str),0)==1) printf("*erreur semantique!Double declaration*");  mise_ajour((yyvsp[(1) - (1)].str),0,0,1);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 72 "synta.y"
    { printf("%s %s %s %s %d %s %d %s",(yyvsp[(2) - (9)].str),(yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),(yyvsp[(5) - (9)].str),(yyvsp[(6) - (9)].entier),(yyvsp[(7) - (9)].str),(yyvsp[(8) - (9)].entier),(yyvsp[(9) - (9)].str));if(lookup((yyvsp[(3) - (9)].str),0)==1) printf("*erreur semantique!Double declaration*"); mise_ajour((yyvsp[(3) - (9)].str),0,0,1);mise_ajour( (yyvsp[(3) - (9)].str),(yyvsp[(6) - (9)].entier),(yyvsp[(8) - (9)].entier),2); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 73 "synta.y"
    { printf("%s %s %s %s %d %s",(yyvsp[(2) - (7)].str),(yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].entier),(yyvsp[(7) - (7)].str));if(lookup((yyvsp[(3) - (7)].str),0)==1) printf("*erreur semantique!Double declaration*");  mise_ajour((yyvsp[(3) - (7)].str),0,0,1);mise_ajour( (yyvsp[(3) - (7)].str),(yyvsp[(6) - (7)].entier),0 ,2);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 74 "synta.y"
    { printf("%s %s %s %d %s %d %s",(yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),(yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].entier),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].entier),(yyvsp[(7) - (7)].str));if(lookup((yyvsp[(1) - (7)].str),0)==1) printf("*erreur semantique!Double declaration*"); mise_ajour((yyvsp[(1) - (7)].str),0,0,1); mise_ajour( (yyvsp[(1) - (7)].str),(yyvsp[(4) - (7)].entier),(yyvsp[(6) - (7)].entier),2);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 75 "synta.y"
    { printf("%s %s %s %d %s",(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].entier),(yyvsp[(5) - (5)].str));mise_ajour((yyvsp[(1) - (5)].str),0,0,1);if(lookup((yyvsp[(1) - (5)].str),0)==1) printf("*erreur semantique!Double declaration*"); mise_ajour( (yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].entier),0 ,2);/**declaration d un plusieurs tableau**/ ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 77 "synta.y"
    {printf("%s %s %s %d",(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].entier));mise_ajour((yyvsp[(3) - (5)].str),0,0,1); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 78 "synta.y"
    { printf("%s%s%d",(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].entier)); mise_ajour((yyvsp[(1) - (3)].str),0,0,1);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 102 "synta.y"
    {printf(" %s\n",(yyvsp[(3) - (3)].str));verifi_type((yyvsp[(3) - (3)].str),0,0);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 105 "synta.y"
    {printf("%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); 
		verifi_type((yyvsp[(1) - (2)].str),0,0);
			 ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 120 "synta.y"
    {printf(" %.2f",(yyvsp[(1) - (1)].reel));char str[20];sprintf(str,"%.2f",(yyvsp[(1) - (1)].reel)); verifi_type(str,0,0);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 121 "synta.y"
    {printf("%s",(yyvsp[(1) - (1)].str));verifi_type((yyvsp[(1) - (1)].str),0,0);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 122 "synta.y"
    {printf(" %d",(yyvsp[(1) - (1)].entier));char str[20];sprintf(str,"%d",(yyvsp[(1) - (1)].entier)); verifi_type(str,0,0);if ( strcmp(sauv_op,"/")==0  && (yyvsp[(1) - (1)].entier)==0) {printf("**erreur!division par 0\n");strcpy(sauv_op, ";");};}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 123 "synta.y"
    {printf(" %s %s %d %s %d %s",(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].entier),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].entier),(yyvsp[(6) - (6)].str));verifi_type((yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].entier),(yyvsp[(5) - (6)].entier));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 124 "synta.y"
    {printf(" %s %s %d %s",(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].entier),(yyvsp[(4) - (4)].str));verifi_type((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier),0);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 125 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));/*verifi_type($1);*/;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 126 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));verifi_type((yyvsp[(1) - (1)].str),0,0);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 127 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));verifi_type((yyvsp[(1) - (1)].str),0,0);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 130 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));strcpy(sauv_op, (yyvsp[(1) - (1)].str));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 131 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));strcpy(sauv_op, (yyvsp[(1) - (1)].str));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 132 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));strcpy(sauv_op, (yyvsp[(1) - (1)].str));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 133 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));strcpy(sauv_op, (yyvsp[(1) - (1)].str));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 135 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 137 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 150 "synta.y"
    {printf("%s %s\n",(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 153 "synta.y"
    {printf("%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 155 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 156 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));if(lookup((yyvsp[(3) - (3)].str),0)==0) printf("*erreur semantique!%s non declaration*",(yyvsp[(3) - (3)].str));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 157 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 158 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));if(lookup((yyvsp[(1) - (1)].str),0)==0) printf("*erreur semantique!%s non declaration*",(yyvsp[(1) - (1)].str));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 160 "synta.y"
    {printf("%s %s\n",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 162 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));if(lookup((yyvsp[(3) - (3)].str),0)==0) printf("*erreur semantique!%s non declaration*",(yyvsp[(3) - (3)].str));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 163 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));if(lookup((yyvsp[(1) - (1)].str),0)==0) printf("*erreur semantique!%s non declaration*",(yyvsp[(1) - (1)].str));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 179 "synta.y"
    {printf("%s ",(yyvsp[(1) - (1)].str));;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 182 "synta.y"
    {verifi_type(";",0,0);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 184 "synta.y"
    {/*its so confusing!!!!*/;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 186 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 187 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 189 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));verifi_type((yyvsp[(1) - (1)].str),0,0);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 190 "synta.y"
    {printf(" %d",(yyvsp[(1) - (1)].entier));char str[20];sprintf(str,"%d",(yyvsp[(1) - (1)].entier));verifi_type(str,0,0);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 191 "synta.y"
    {printf(" %.2f",(yyvsp[(1) - (1)].reel));char str[20];sprintf(str,"%.2f",(yyvsp[(1) - (1)].reel));verifi_type(str,0,0);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 192 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));verifi_type((yyvsp[(1) - (1)].str),0,0);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 193 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));verifi_type((yyvsp[(1) - (1)].str),0,0);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 195 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 196 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 197 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 198 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 199 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 200 "synta.y"
    {printf(" %s",(yyvsp[(1) - (1)].str));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 204 "synta.y"
    {printf("%s\n",(yyvsp[(1) - (1)].str));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 212 "synta.y"
    {printf("%s\n",(yyvsp[(1) - (1)].str));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 214 "synta.y"
    {printf("%s\n",(yyvsp[(1) - (1)].str));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 224 "synta.y"
    {printf("%s",(yyvsp[(1) - (1)].str));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 226 "synta.y"
    {printf("\n%s \n",(yyvsp[(1) - (1)].str));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 237 "synta.y"
    {printf("%s%s%s %s%s ",(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));verifi_type((yyvsp[(1) - (5)].str),0,0);verifi_type((yyvsp[(4) - (5)].str),0,0);verifi_type(";",0,0);;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 239 "synta.y"
    {printf("%s %d",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].entier));;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 240 "synta.y"
    {printf("%s %.2f",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].reel));;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 241 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 242 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 243 "synta.y"
    {printf("%s%s%s %d %s %d ",(yyvsp[(2) - (8)].str),(yyvsp[(3) - (8)].str),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].entier),(yyvsp[(6) - (8)].str),(yyvsp[(7) - (8)].entier));;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 244 "synta.y"
    {printf("%s%s%s%d%s",(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].str),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].entier),(yyvsp[(6) - (6)].str));;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 246 "synta.y"
    {printf("%d ",(yyvsp[(1) - (1)].entier));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 247 "synta.y"
    {printf("%.2f ",(yyvsp[(1) - (1)].reel));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 248 "synta.y"
    {printf("%s",(yyvsp[(1) - (1)].str));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 249 "synta.y"
    {printf("%s",(yyvsp[(1) - (1)].str));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 250 "synta.y"
    {printf("%s%s %d %s %d %s",(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].entier),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].entier),(yyvsp[(6) - (6)].str));;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 251 "synta.y"
    {printf("%s%s%d%s ",(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].entier),(yyvsp[(4) - (4)].str));;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 253 "synta.y"
    {printf("%s%s\n",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 268 "synta.y"
    { printf("%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 270 "synta.y"
    { printf("%s %s %s",(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 272 "synta.y"
    { printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 274 "synta.y"
    {printf("%s %s",(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 275 "synta.y"
    {printf("%s%s%s%d%s%d%s ",(yyvsp[(2) - (8)].str),(yyvsp[(3) - (8)].str),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].entier),(yyvsp[(6) - (8)].str),(yyvsp[(7) - (8)].entier),(yyvsp[(8) - (8)].str));;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 276 "synta.y"
    {printf("%s%s%s%d%s ",(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].str),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].entier),(yyvsp[(6) - (6)].str));;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 277 "synta.y"
    {printf("%s%s%s%s%s%s%s ",(yyvsp[(2) - (8)].str),(yyvsp[(3) - (8)].str),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(yyvsp[(7) - (8)].str),(yyvsp[(8) - (8)].str));/*mat(a,n), a et n declarer deja comme entier*/;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 278 "synta.y"
    {printf("%s%s%s%s%s ",(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].str),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].str));;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 280 "synta.y"
    {printf("%s",(yyvsp[(1) - (1)].str));;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 281 "synta.y"
    {printf("%s%s%d%s%d%s ",(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].entier),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].entier),(yyvsp[(6) - (6)].str));;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 282 "synta.y"
    {printf("%s%s%d%s ",(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].entier),(yyvsp[(4) - (4)].str));;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 283 "synta.y"
    {printf("%s%s%s%s%s%s ",(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].str),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].str));;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 284 "synta.y"
    {printf("%s%s%s%s ",(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;



/* Line 1455 of yacc.c  */
#line 2341 "synta.tab.c"
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
#line 297 "synta.y"

int main ()
{
   initialisation();
   yyparse(); 
   afficher();
return 0;
 }

 int yyerror ( char*  msg )  
 {
    printf ("Erreur Syntaxique a ligne %d a colonne %d \n", nb_ligne,nb_colonne);
	return 0; 
  }
 
 

