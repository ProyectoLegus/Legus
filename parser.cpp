/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 10 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"

    #include <QMessageBox>
    #include <QString>
    #include <iostream>
    #include <vector>
    #include <stdio.h>
    #include <stdlib.h>
    #include "tokens.h"

    /* Imports Tree */
    #include "ParserImports.h"

    using namespace std;

    extern int yylex();
    extern char *yytext;
    extern int linea;
    extern FILE *yyin;
    extern int yytoken;
    extern int yylineno;

    void yyerror(const char *s) {
        //char arr[100];
        //sprintf(arr,"%d: error: '%s' at '%s'", yylineno, s, yytext);
        QMessageBox::about(0,"","Error Sintactico: " + QString(s) + "linea: " + QString::number(yylineno));
    }


/* Line 268 of yacc.c  */
#line 100 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.cpp"

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

/* "%code requires" blocks.  */

/* Line 288 of yacc.c  */
#line 3 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"

    #include <string>
    #include "Expresion.h"
    #include "Instruccion.h"
    #include "Lista.h"
    #include "ListaDeCaso.h"



/* Line 288 of yacc.c  */
#line 134 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IDENTIFICADOR = 258,
     T_SIMBOLO_IGUAL = 259,
     T_SUMA = 260,
     T_RESTA = 261,
     T_MULTIPLICACION = 262,
     T_DIVISION = 263,
     T_SIMBOLO_MODULO = 264,
     T_EXPONENCIACION = 265,
     T_MAYOR_IGUAL = 266,
     T_MENOR_IGUAL = 267,
     T_MENOR = 268,
     T_MAYOR = 269,
     T_IGUALDAD = 270,
     T_NEGACION = 271,
     T_SIMBOLO_OPERADOR_Y = 272,
     T_SIMBOLO_OPERADOR_O = 273,
     T_CORCHETE_IZQUIERDO = 274,
     T_CORCHETE_DERECHO = 275,
     T_PARENTESIS_IZQUIERDO = 276,
     T_PARENTESIS_DERECHO = 277,
     T_DOS_PUNTOS = 278,
     T_DESIGUALDAD = 279,
     T_LITERAL_CARACTER = 280,
     T_LITERAL_FLOTANTE = 281,
     T_LITERAL_CADENA = 282,
     T_COMA = 283,
     T_MODULO = 284,
     T_DIVISION_ENTERA = 285,
     T_IGUAL = 286,
     T_A = 287,
     T_DISTINTO = 288,
     T_DE = 289,
     T_OPERADOR_Y = 290,
     T_OPERADOR_O = 291,
     T_NO = 292,
     T_SI = 293,
     T_ENTONCES = 294,
     T_FIN = 295,
     T_SINO = 296,
     T_CASO = 297,
     T_MIENTRAS = 298,
     T_HAGA = 299,
     T_EJECUTE = 300,
     T_REPETIR = 301,
     T_INFINITAS = 302,
     T_VECES = 303,
     T_PARA = 304,
     T_DESDE = 305,
     T_REPITA = 306,
     T_CADA = 307,
     T_EN = 308,
     T_FUNCION = 309,
     T_HASTA = 310,
     T_RETORNA = 311,
     T_RETORNAR = 312,
     T_UTILIZAR = 313,
     T_COMO = 314,
     T_LITERAL_NUMERICA = 315,
     T_DEFINIR = 316,
     T_VERDADERO = 317,
     T_FALSO = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 38 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"

    std::string              *string;
    Expresion                *expresion;
    Instruccion              *instruccion;
    Expresion                *vectorExpresiones;
    Lista                    *lista;
    ListaDeCaso              *lista_de_caso;



/* Line 293 of yacc.c  */
#line 225 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 250 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    17,    18,    26,    27,    30,    31,
      33,    35,    37,    39,    41,    43,    45,    47,    49,    51,
      58,    65,    74,    81,    87,    94,   105,   112,   116,   120,
     130,   141,   146,   149,   153,   157,   161,   165,   169,   173,
     175,   179,   183,   187,   191,   193,   197,   201,   205,   209,
     213,   215,   219,   221,   223,   225,   227,   229,   234,   237,
     239,   241,   243,   245,   247,   249,   251,   256,   260,   263,
     264,   268,   269,   275,   280,   283
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    67,    66,    68,    -1,    54,     3,    21,
      90,    22,    68,    40,    54,    66,    -1,    -1,    58,     3,
      59,     3,    53,     3,    67,    -1,    -1,    69,    68,    -1,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    51,    69,    43,    80,    40,    51,    -1,    38,    80,
      39,    68,    40,    38,    -1,    38,    80,    39,    68,    41,
      68,    40,    38,    -1,    42,     3,    92,    93,    40,    42,
      -1,    42,    92,    93,    40,    42,    -1,    43,    80,    45,
      68,    40,    43,    -1,    49,     3,     4,    80,    55,    80,
      45,    68,    40,    49,    -1,    46,    80,    48,    68,    40,
      46,    -1,     3,     4,    80,    -1,    86,     4,    80,    -1,
      51,    50,    80,    55,    80,    45,    68,    40,    51,    -1,
      49,    52,    80,    53,    80,    45,    68,    40,    49,    52,
      -1,     3,    21,    90,    22,    -1,    57,    80,    -1,    80,
      13,    81,    -1,    80,    14,    81,    -1,    80,    11,    81,
      -1,    80,    12,    81,    -1,    80,    15,    81,    -1,    80,
      24,    81,    -1,    81,    -1,    81,     5,    82,    -1,    81,
       6,    82,    -1,    81,    36,    82,    -1,    81,    18,    82,
      -1,    82,    -1,    82,     7,    83,    -1,    82,     8,    83,
      -1,    82,    35,    83,    -1,    82,    17,    83,    -1,    82,
       9,    83,    -1,    83,    -1,    21,    80,    22,    -1,    88,
      -1,    84,    -1,     3,    -1,    85,    -1,    86,    -1,     3,
      21,    90,    22,    -1,     3,    89,    -1,    62,    -1,    63,
      -1,    87,    -1,    60,    -1,    25,    -1,    26,    -1,    27,
      -1,    19,    80,    20,    89,    -1,    19,    80,    20,    -1,
      80,    91,    -1,    -1,    28,    80,    91,    -1,    -1,    23,
      80,    23,    68,    92,    -1,    23,    80,    23,    68,    -1,
      41,    68,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    95,   101,   107,   113,   121,   127,   133,
     137,   141,   145,   149,   153,   157,   161,   165,   169,   173,
     178,   183,   196,   200,   206,   213,   220,   227,   232,   239,
     246,   253,   259,   267,   271,   275,   279,   283,   287,   291,
     297,   301,   305,   309,   313,   319,   323,   327,   331,   335,
     339,   345,   349,   353,   357,   363,   367,   373,   379,   387,
     391,   397,   401,   405,   409,   413,   419,   424,   432,   438,
     443,   449,   454,   459,   466,   471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENTIFICADOR", "T_SIMBOLO_IGUAL",
  "T_SUMA", "T_RESTA", "T_MULTIPLICACION", "T_DIVISION",
  "T_SIMBOLO_MODULO", "T_EXPONENCIACION", "T_MAYOR_IGUAL", "T_MENOR_IGUAL",
  "T_MENOR", "T_MAYOR", "T_IGUALDAD", "T_NEGACION", "T_SIMBOLO_OPERADOR_Y",
  "T_SIMBOLO_OPERADOR_O", "T_CORCHETE_IZQUIERDO", "T_CORCHETE_DERECHO",
  "T_PARENTESIS_IZQUIERDO", "T_PARENTESIS_DERECHO", "T_DOS_PUNTOS",
  "T_DESIGUALDAD", "T_LITERAL_CARACTER", "T_LITERAL_FLOTANTE",
  "T_LITERAL_CADENA", "T_COMA", "T_MODULO", "T_DIVISION_ENTERA", "T_IGUAL",
  "T_A", "T_DISTINTO", "T_DE", "T_OPERADOR_Y", "T_OPERADOR_O", "T_NO",
  "T_SI", "T_ENTONCES", "T_FIN", "T_SINO", "T_CASO", "T_MIENTRAS",
  "T_HAGA", "T_EJECUTE", "T_REPETIR", "T_INFINITAS", "T_VECES", "T_PARA",
  "T_DESDE", "T_REPITA", "T_CADA", "T_EN", "T_FUNCION", "T_HASTA",
  "T_RETORNA", "T_RETORNAR", "T_UTILIZAR", "T_COMO", "T_LITERAL_NUMERICA",
  "T_DEFINIR", "T_VERDADERO", "T_FALSO", "$accept", "programa",
  "declaracion_funciones", "declaracion_sensores_motores", "instrucciones",
  "instruccion", "instruccion_si", "instruccion_caso",
  "instruccion_mientras", "instruccion_para", "instruccion_repetir",
  "instruccion_asignacion", "instruccion_repita_desde",
  "instruccion_para_cada", "instruccion_llamada_a_funcion",
  "instruccion_retornar", "relacionales", "expresiones", "factores",
  "terminales", "id_variable", "id_funcion", "id_arreglo",
  "literal_booleana", "literales", "lista_indices", "lista_parametros",
  "acumulador_parametros", "lista_casos", "sino_caso", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    72,    73,    74,    75,    75,    76,
      77,    78,    79,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    84,    84,    85,    86,    87,
      87,    88,    88,    88,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     9,     0,     7,     0,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     8,     6,     5,     6,    10,     6,     3,     3,     9,
      10,     4,     2,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     2,     0,
       3,     0,     5,     4,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     4,     0,     1,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,    69,     0,     0,    69,    58,    54,     0,    63,
      64,    65,    62,    59,    60,     0,    39,    44,    50,    53,
      55,    56,    61,    52,     0,     0,    75,     0,     0,     0,
       0,     0,     0,    32,     7,     0,     0,    71,     0,    27,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     8,     0,     8,     8,     0,     0,     0,     0,
      28,     6,     0,    68,     8,    67,    31,     0,    51,    35,
      36,    33,    34,    37,    38,     0,    40,    41,    43,    42,
      45,    46,    49,    48,    47,     0,     8,    74,     0,     0,
       0,     0,     0,     0,     0,     5,    71,     0,    66,    57,
       0,     8,     0,    73,    23,     0,     0,     0,     0,     0,
       0,    70,     0,    20,     0,    22,    72,    24,    26,     0,
       8,     8,    19,     4,     0,     8,     0,     0,     3,    21,
       0,     0,     0,     0,     0,    29,    25,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    67,    46,    47,    48,
      49,    50,    51,    52,    53,    36,    68,   103,    56,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     -48,    19,    24,   -29,   -30,   -53,    27,    63,    28,    17,
      94,    18,     3,    18,    18,     1,    14,    18,   -53,    63,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      38,    -5,    18,    18,    18,    18,   -53,    -3,    18,   -53,
     -53,   -53,   -53,   -53,   -53,   217,    64,     6,   -53,   -53,
     -53,   -53,   -53,   -53,    35,    18,     9,   169,   153,    43,
      18,    18,     8,   284,   -53,    18,    58,   233,    45,   284,
     251,    46,    18,   265,    18,    18,    18,    18,    18,    18,
      63,    18,    18,    18,    18,    18,    18,    18,    18,    18,
       9,   270,    63,    32,    63,    63,    18,    22,   124,    18,
     284,   -48,    18,   -53,    63,    60,   -53,    61,   -53,    64,
      64,    64,    64,    64,    64,   -21,     6,     6,     6,     6,
     -53,   -53,   -53,   -53,   -53,    44,    63,   -53,    47,    52,
      55,   148,    18,    18,   212,   -53,   233,    59,   -53,   -53,
      56,    63,    62,    35,   -53,    67,    57,    18,   174,   193,
      51,   -53,    53,   -53,    71,   -53,   -53,   -53,   -53,   198,
      63,    63,   -53,   -29,    78,    63,    77,    81,   -53,   -53,
      82,    69,    73,    76,    88,   -53,   -53,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   -19,    70,   -18,   129,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    -6,    54,    68,   215,
     -53,   -53,    -7,   -53,   -53,    41,   -32,    20,   -52,    65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      30,    64,    90,    71,    59,    45,    54,    57,    58,    30,
       1,    63,    30,    85,    86,    87,    34,    10,    72,   140,
     141,    37,     4,    88,     5,     6,    55,    69,    70,     8,
       9,    31,    73,    74,    75,    76,    77,    78,    32,    38,
     107,    89,    65,    39,    40,    41,    79,    96,    66,    91,
      92,    99,    11,    60,    97,    98,    12,    13,    55,   100,
      14,   101,   115,    15,    61,    16,    10,   104,   106,    81,
      82,    17,   128,    30,   127,   132,   129,   130,    42,    34,
      43,    44,    83,   139,   142,    30,   137,    30,    30,   144,
     131,   156,   145,   134,   153,   146,   136,    30,    33,   152,
      84,    11,   162,   158,   155,    12,    13,   163,   143,    14,
     157,   164,    15,    34,    16,    35,   169,   171,   174,    30,
      17,   172,   173,   154,   175,   176,   148,   149,   109,   110,
     111,   112,   113,   114,    30,    74,    75,    76,    77,    78,
     177,   159,   166,   167,   168,    62,   138,   170,    79,   116,
     117,   118,   119,    30,    30,   125,   151,     0,    30,    74,
      75,    76,    77,    78,    74,    75,    76,    77,    78,     0,
       0,   135,    79,     0,     0,     0,     0,    79,     0,   133,
      74,    75,    76,    77,    78,    74,    75,    76,    77,    78,
       0,     0,     0,    79,     0,     0,     0,     0,    79,     0,
       0,    95,     0,   147,    74,    75,    76,    77,    78,    74,
      75,    76,    77,    78,    94,     0,     0,    79,     0,   160,
       0,     0,    79,    74,    75,    76,    77,    78,    74,    75,
      76,    77,    78,     0,     0,     0,    79,     0,   161,     0,
       0,    79,     0,   165,    74,    75,    76,    77,    78,     0,
       0,     0,   150,     0,     0,     0,    80,    79,     0,     0,
       0,   102,    74,    75,    76,    77,    78,     0,     0,     0,
       0,   105,     0,     0,     0,    79,    74,    75,    76,    77,
      78,    74,    75,    76,    77,    78,     0,   108,     0,    79,
       0,     0,     0,   126,    79,    74,    75,    76,    77,    78,
     120,   121,   122,   123,   124,     0,     0,     0,    79
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-53))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    19,    54,    35,     3,    11,     3,    13,    14,    16,
      58,    17,    19,     7,     8,     9,    19,     3,    21,    40,
      41,     3,     3,    17,     0,    54,    23,    33,    34,    59,
       3,     3,    38,    11,    12,    13,    14,    15,    21,    21,
      72,    35,     4,    25,    26,    27,    24,     4,    53,    55,
      41,    43,    38,    52,    60,    61,    42,    43,    23,    65,
      46,     3,    80,    49,    50,    51,     3,    22,    22,     5,
       6,    57,    40,    80,    92,    53,    94,    95,    60,    19,
      62,    63,    18,    22,    40,    92,   104,    94,    95,    42,
      96,   143,    40,    99,    38,    40,   102,   104,     4,    40,
      36,    38,    51,    46,    42,    42,    43,    54,   126,    46,
      43,    40,    49,    19,    51,    21,    38,    40,    49,   126,
      57,    40,    40,   141,    51,    49,   132,   133,    74,    75,
      76,    77,    78,    79,   141,    11,    12,    13,    14,    15,
      52,   147,   160,   161,   163,    16,   105,   165,    24,    81,
      82,    83,    84,   160,   161,    90,   136,    -1,   165,    11,
      12,    13,    14,    15,    11,    12,    13,    14,    15,    -1,
      -1,   101,    24,    -1,    -1,    -1,    -1,    24,    -1,    55,
      11,    12,    13,    14,    15,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    48,    -1,    55,    11,    12,    13,    14,    15,    11,
      12,    13,    14,    15,    45,    -1,    -1,    24,    -1,    45,
      -1,    -1,    24,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    24,    -1,    45,    -1,
      -1,    24,    -1,    45,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    39,    24,    -1,    -1,
      -1,    28,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    11,    12,    13,    14,
      15,    11,    12,    13,    14,    15,    -1,    22,    -1,    24,
      -1,    -1,    -1,    23,    24,    11,    12,    13,    14,    15,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    65,    67,     3,     0,    54,    66,    59,     3,
       3,    38,    42,    43,    46,    49,    51,    57,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      86,     3,    21,     4,    19,    21,    89,     3,    21,    25,
      26,    27,    60,    62,    63,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     3,    23,    92,    80,    80,     3,
      52,    50,    69,    80,    68,     4,    53,    80,    90,    80,
      80,    90,    21,    80,    11,    12,    13,    14,    15,    24,
      39,     5,     6,    18,    36,     7,     8,     9,    17,    35,
      92,    80,    41,    93,    45,    48,     4,    80,    80,    43,
      80,     3,    28,    91,    22,    20,    22,    90,    22,    81,
      81,    81,    81,    81,    81,    68,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    93,    23,    68,    40,    68,
      68,    80,    53,    55,    80,    67,    80,    68,    89,    22,
      40,    41,    40,    68,    42,    40,    40,    55,    80,    80,
      40,    91,    40,    38,    68,    42,    92,    43,    46,    80,
      45,    45,    51,    54,    40,    45,    68,    68,    66,    38,
      68,    40,    40,    40,    49,    51,    49,    52
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 86 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(3) - (3)].instruccion);
            Programa::obtenerInstancia()->instrucciones = (yyvsp[(3) - (3)].instruccion);
        }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 96 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            DeclaracionDeFuncion *declrFuncion = new DeclaracionDeFuncion(new Variable((yyvsp[(2) - (9)].string)), (yyvsp[(4) - (9)].lista), (yyvsp[(6) - (9)].instruccion));
            Programa::obtenerInstancia()->tablaDeFunciones->push_back(declrFuncion);
        }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 101 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.string)=0;
        }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 108 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            DeclaracionUtilizar *declrUtilizar = new DeclaracionUtilizar(new VariablePuerto((yyvsp[(2) - (7)].string)), new VariableSensor((yyvsp[(4) - (7)].string)), new Variable((yyvsp[(6) - (7)].string)));
            Programa::obtenerInstancia()->tablaDePuertosYSensores->push_back(declrUtilizar);
        }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 113 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.string)=0;
        }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 122 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyvsp[(1) - (2)].instruccion)->establecerSiguiente((yyvsp[(2) - (2)].instruccion));
            (yyval.instruccion) = (yyvsp[(1) - (2)].instruccion);
        }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 127 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = 0;
        }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 134 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 138 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 142 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 146 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 150 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 154 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 158 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 162 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 166 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 170 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);
        }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 174 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
        }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 179 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            (yyval.instruccion) = new InstruccionSi((yyvsp[(2) - (6)].expresion), (yyvsp[(4) - (6)].instruccion), 0, 0, 0);
        }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 184 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            (yyval.instruccion) = new InstruccionSi((yyvsp[(2) - (8)].expresion), (yyvsp[(4) - (8)].instruccion), (yyvsp[(6) - (8)].instruccion), 0, 0);
        }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 197 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = new InstruccionCaso( new Variable((yyvsp[(2) - (6)].string)), (yyvsp[(3) - (6)].lista_de_caso), (yyvsp[(4) - (6)].instruccion), 0);
        }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 201 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = new InstruccionCaso(0, (yyvsp[(2) - (5)].lista_de_caso), (yyvsp[(3) - (5)].instruccion), 0);
        }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 207 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /* Parametros:   condicion, instrucciones, siguiente */
            (yyval.instruccion) = new InstruccionMientras((yyvsp[(2) - (6)].expresion), (yyvsp[(4) - (6)].instruccion), 0);
        }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 214 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /*identificador, inicio, final, instrucciones, siguiente*/
            (yyval.instruccion) = new InstruccionPara((yyvsp[(2) - (10)].string), (yyvsp[(4) - (10)].expresion), (yyvsp[(6) - (10)].expresion), (yyvsp[(8) - (10)].instruccion), 0);
        }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 221 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /*Cantidad, instrucciones, siguiente*/
            (yyval.instruccion) = new InstruccionRepetir((yyvsp[(2) - (6)].expresion), (yyvsp[(4) - (6)].instruccion), 0);
        }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 228 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /*Variable, Expresion, siguiente*/
            (yyval.instruccion) = new InstruccionAsignacion( new Variable((yyvsp[(1) - (3)].string)), (yyvsp[(3) - (3)].expresion), 0 );
        }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 233 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /*Variable, Expresion, siguiente*/
            (yyval.instruccion) = new InstruccionAsignacion((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), 0);
        }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 240 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /* inicio , final , instrucciones , siguiente*/
            (yyval.instruccion) = new InstruccionRepitaDesde((yyvsp[(3) - (9)].expresion), (yyvsp[(5) - (9)].expresion), (yyvsp[(7) - (9)].instruccion), 0);
        }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 247 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /* variable, coleccion, instrucciones, siguientes */
            (yyval.instruccion) = new InstruccionParaCada((yyvsp[(3) - (10)].expresion), (yyvsp[(5) - (10)].expresion), (yyvsp[(7) - (10)].instruccion), 0);
        }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 254 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = new InstruccionLlamadaAFuncion((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].lista), 0);
        }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 260 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = new InstruccionRetornar((yyvsp[(2) - (2)].expresion), 0);
        }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 268 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMenor((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 272 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMayor((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 276 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMayorIgual((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 280 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMenorIgual((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 284 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaIgualdad((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 288 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaDistinto((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 292 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 298 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaSuma((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 302 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaResta((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 306 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaO((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 310 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaO((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 314 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 320 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMultiplicacion((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 324 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaDivision((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 328 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaY((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 332 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaY((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 336 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaModulo((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion));
        }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 340 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 346 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(2) - (3)].expresion);
        }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 350 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 354 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 358 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new Variable((yyvsp[(1) - (1)].string));
        }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 364 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 368 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 374 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new VariableFuncion((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].lista));
        }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 380 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new VariableArreglo((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].lista));
        }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 388 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralBooleana(true);
        }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 392 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralBooleana(false);
        }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 398 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 402 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralEntera( atoi( (yyvsp[(1) - (1)].string)->c_str() ));
       }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 406 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralCaracter( (char)(yyvsp[(1) - (1)].string)->c_str()[0]);
       }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 410 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralFlotante( atof( (yyvsp[(1) - (1)].string)->c_str() ));
       }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 414 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralCadena((yyvsp[(1) - (1)].string));
       }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 420 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyvsp[(4) - (4)].lista)->lista->push_back((yyvsp[(2) - (4)].expresion));
            (yyval.lista) = (yyvsp[(4) - (4)].lista);
        }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 425 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            Lista *lista = new Lista();
            lista->lista->push_back((yyvsp[(2) - (3)].expresion));
            (yyval.lista) = lista;
        }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 433 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyvsp[(2) - (2)].lista)->lista->push_back((yyvsp[(1) - (2)].expresion));
            (yyval.lista) = (yyvsp[(2) - (2)].lista);
        }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 438 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.lista) = new Lista();
        }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 444 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyvsp[(3) - (3)].lista)->lista->push_back((yyvsp[(2) - (3)].expresion));
            (yyval.lista) = (yyvsp[(3) - (3)].lista);
        }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 449 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.lista) = new Lista();
        }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 455 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyvsp[(5) - (5)].lista_de_caso)->establecerSiguiente(new ListaDeCaso((yyvsp[(2) - (5)].expresion), (yyvsp[(4) - (5)].instruccion), 0) );
            (yyval.lista_de_caso) = (yyvsp[(5) - (5)].lista_de_caso);
         }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 460 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            /*Parametros, Expresion, Instruccion, Siguiente*/
            (yyval.lista_de_caso) = new ListaDeCaso((yyvsp[(2) - (4)].expresion), (yyvsp[(4) - (4)].instruccion), 0);
        }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 467 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(2) - (2)].instruccion);
        }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 471 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"
    {
            (yyval.instruccion) = 0;
        }
    break;



/* Line 1806 of yacc.c  */
#line 2394 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.cpp"
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



/* Line 2067 of yacc.c  */
#line 474 "D:\\DropBox\\ProyectoCodigo\\Legus\\parser.y"


