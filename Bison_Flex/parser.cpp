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
#line 10 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"

    /* Imports Tree */
    #include "Bison_Flex/ParserImports.h"
    #include "Programa/ExcepcionLegus.h"
    #include "Programa/GeneradorDeErrores.h"

    extern int yylex();
    extern char *yytext;
    extern int linea, yytoken, yylineno;
    extern FILE *yyin;

    /*
        Bison no provee una manera de devolver cual es el token
        esperado en caso que haya error. La implementacion utiliza
        una variable entera para marcar por toda la gramatica que
        token estoy esperando. Y en el mensaje de error utilizo esta
        variable para mostrar un mensaje acorde.
    */
    int token_esperado = -1;
    int correlativo = 0;

    void yyerror(const char *s)
    {
        //QMessageBox::about(0,"","Error Sintactico: " + QString(s) + "linea: " + QString::number(yylineno));
        QMessageBox::critical(0,"Error",QString(GeneradorDeErrores::obtenerTokenEsperado(token_esperado).c_str()));
    }


/* Line 268 of yacc.c  */
#line 100 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.cpp"

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
#line 3 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"

    #include <string>
    #include "Expresion/Expresion.h"
    #include "Instruccion/Instruccion.h"
    #include "Bison_Flex/Lista.h"
    #include "Instruccion/ListaDeCaso.h"



/* Line 288 of yacc.c  */
#line 134 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.cpp"

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
     T_ENTER = 284,
     T_EOF = 285,
     T_MODULO = 286,
     T_DIVISION_ENTERA = 287,
     T_IGUAL = 288,
     T_A = 289,
     T_DISTINTO = 290,
     T_DE = 291,
     T_OPERADOR_Y = 292,
     T_OPERADOR_O = 293,
     T_NO = 294,
     T_SI = 295,
     T_ENTONCES = 296,
     T_FIN = 297,
     T_SINO = 298,
     T_CASO = 299,
     T_MIENTRAS = 300,
     T_HAGA = 301,
     T_EJECUTE = 302,
     T_REPETIR = 303,
     T_INFINITAS = 304,
     T_VECES = 305,
     T_PARA = 306,
     T_DESDE = 307,
     T_REPITA = 308,
     T_CADA = 309,
     T_EN = 310,
     T_FUNCION = 311,
     T_HASTA = 312,
     T_RETORNA = 313,
     T_RETORNAR = 314,
     T_UTILIZAR = 315,
     T_COMO = 316,
     T_LITERAL_NUMERICA = 317,
     T_DEFINIR = 318,
     T_VERDADERO = 319,
     T_FALSO = 320
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 38 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"

    std::string              *string;
    Expresion                *expresion;
    Instruccion              *instruccion;
    Expresion                *vectorExpresiones;
    Lista                    *lista;
    ListaDeCaso              *lista_de_caso;



/* Line 293 of yacc.c  */
#line 227 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.cpp"
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
#line 252 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.cpp"

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
#define YYLAST   242

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  264

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,     9,    10,    11,    12,    27,
      28,    29,    30,    31,    32,    33,    46,    47,    50,    51,
      53,    55,    57,    59,    61,    63,    65,    67,    69,    71,
      73,    80,    81,    82,    91,    92,    93,    94,   106,   107,
     108,   109,   119,   120,   121,   129,   130,   131,   132,   142,
     143,   144,   145,   146,   147,   148,   165,   166,   167,   168,
     178,   182,   183,   188,   192,   193,   194,   201,   202,   203,
     210,   211,   212,   219,   220,   221,   228,   229,   230,   237,
     238,   239,   246,   247,   248,   249,   250,   251,   266,   267,
     268,   269,   270,   271,   272,   289,   290,   291,   298,   301,
     305,   309,   313,   317,   321,   325,   327,   331,   335,   339,
     343,   345,   349,   353,   357,   361,   365,   367,   371,   373,
     375,   377,   379,   381,   382,   383,   390,   393,   395,   397,
     399,   401,   403,   405,   407,   412,   416,   419,   420,   421,
     428,   431,   432,   436,   437,   443,   448,   451
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    74,    68,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    69,     3,    70,    21,   156,    71,    22,
      80,    72,    42,    73,    56,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    75,     3,    76,    61,    77,     3,
      78,    55,    79,     3,    74,    -1,    -1,    81,    80,    -1,
      -1,    82,    -1,    88,    -1,    94,    -1,    98,    -1,   105,
      -1,   109,    -1,   111,    -1,   124,    -1,   130,    -1,   137,
      -1,   140,    -1,    53,    81,    45,   141,    42,    53,    -1,
      -1,    -1,    40,   141,    41,    80,    83,    42,    84,    40,
      -1,    -1,    -1,    -1,    40,   141,    41,    80,    85,    43,
      80,    86,    42,    87,    40,    -1,    -1,    -1,    -1,    44,
      89,     3,   158,   159,    90,    42,    91,    44,    -1,    -1,
      -1,    44,   158,   159,    92,    42,    93,    44,    -1,    -1,
      -1,    -1,    45,   141,    95,    47,    80,    96,    42,    97,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    99,
       3,   100,     4,   141,   101,    57,   141,   102,    47,    80,
     103,    42,   104,    51,    -1,    -1,    -1,    -1,    48,   141,
     106,    50,    80,   107,    42,   108,    48,    -1,     3,     4,
     141,    -1,    -1,   149,   110,     4,   141,    -1,     3,     4,
     153,    -1,    -1,    -1,     3,   112,     5,   113,     4,   141,
      -1,    -1,    -1,     3,   114,     8,   115,     4,   141,    -1,
      -1,    -1,     3,   116,     9,   117,     4,   141,    -1,    -1,
      -1,     3,   118,     7,   119,     4,   141,    -1,    -1,    -1,
       3,   120,     6,   121,     4,   141,    -1,    -1,    -1,     3,
     122,    10,   123,     4,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    53,   125,    52,   141,   126,    57,   141,   127,    47,
      80,   128,    42,   129,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,   131,    54,   141,   132,    55,   141,   133,
      47,    80,   134,    42,   135,    51,   136,    54,    -1,    -1,
      -1,     3,   138,    21,   156,   139,    22,    -1,    59,   141,
      -1,   141,    13,   142,    -1,   141,    14,   142,    -1,   141,
      11,   142,    -1,   141,    12,   142,    -1,   141,    15,   142,
      -1,   141,    24,   142,    -1,   142,    -1,   142,     5,   143,
      -1,   142,     6,   143,    -1,   142,    38,   143,    -1,   142,
      18,   143,    -1,   143,    -1,   143,     7,   144,    -1,   143,
       8,   144,    -1,   143,    37,   144,    -1,   143,    17,   144,
      -1,   143,     9,   144,    -1,   144,    -1,    21,   141,    22,
      -1,   151,    -1,   145,    -1,     3,    -1,   146,    -1,   149,
      -1,    -1,    -1,     3,   147,    21,   156,   148,    22,    -1,
       3,   152,    -1,    64,    -1,    65,    -1,   150,    -1,    62,
      -1,    25,    -1,    26,    -1,    27,    -1,    19,   141,    20,
     152,    -1,    19,   141,    20,    -1,    19,    20,    -1,    -1,
      -1,    19,    20,   154,    19,   155,    20,    -1,   141,   157,
      -1,    -1,    28,   141,   157,    -1,    -1,    23,   141,    23,
      80,   158,    -1,    23,   141,    23,    80,    -1,    43,    80,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,   100,   101,   103,   105,   106,   100,   114,
     120,   121,   122,   123,   124,   120,   134,   142,   148,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   173,   174,   170,   183,   185,   186,   180,   195,   198,
     199,   195,   206,   207,   204,   215,   217,   218,   214,   226,
     227,   229,   231,   233,   234,   226,   244,   246,   247,   243,
     255,   266,   266,   273,   284,   285,   284,   297,   298,   297,
     309,   310,   309,   321,   322,   321,   333,   334,   333,   345,
     346,   345,   361,   363,   365,   367,   368,   361,   376,   378,
     380,   382,   383,   384,   376,   392,   394,   392,   401,   410,
     416,   422,   428,   434,   440,   446,   452,   458,   464,   470,
     476,   482,   488,   494,   500,   506,   512,   518,   524,   528,
     532,   538,   542,   548,   550,   548,   557,   566,   570,   576,
     580,   584,   588,   592,   598,   606,   616,   621,   622,   620,
     630,   636,   641,   649,   654,   663,   673,   679
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
  "T_LITERAL_CADENA", "T_COMA", "T_ENTER", "T_EOF", "T_MODULO",
  "T_DIVISION_ENTERA", "T_IGUAL", "T_A", "T_DISTINTO", "T_DE",
  "T_OPERADOR_Y", "T_OPERADOR_O", "T_NO", "T_SI", "T_ENTONCES", "T_FIN",
  "T_SINO", "T_CASO", "T_MIENTRAS", "T_HAGA", "T_EJECUTE", "T_REPETIR",
  "T_INFINITAS", "T_VECES", "T_PARA", "T_DESDE", "T_REPITA", "T_CADA",
  "T_EN", "T_FUNCION", "T_HASTA", "T_RETORNA", "T_RETORNAR", "T_UTILIZAR",
  "T_COMO", "T_LITERAL_NUMERICA", "T_DEFINIR", "T_VERDADERO", "T_FALSO",
  "$accept", "programa", "declaracion_funciones", "$@1", "$@2", "$@3",
  "$@4", "$@5", "declaracion_sensores_motores", "$@6", "$@7", "$@8", "$@9",
  "$@10", "instrucciones", "instruccion", "instruccion_si", "$@11", "$@12",
  "$@13", "$@14", "$@15", "instruccion_caso", "$@16", "$@17", "$@18",
  "$@19", "$@20", "instruccion_mientras", "$@21", "$@22", "$@23",
  "instruccion_para", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29",
  "instruccion_repetir", "$@30", "$@31", "$@32", "instruccion_asignacion",
  "$@33", "instruccion_auto_asignacion", "$@34", "$@35", "$@36", "$@37",
  "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45",
  "instruccion_repita_desde", "$@46", "$@47", "$@48", "$@49", "$@50",
  "instruccion_para_cada", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56",
  "instruccion_llamada_a_funcion", "$@57", "$@58", "instruccion_retornar",
  "relacionales", "expresiones", "factores", "terminales", "id_variable",
  "id_funcion", "$@59", "$@60", "id_arreglo", "literal_booleana",
  "literales", "lista_indices", "lista_indices_declaracion", "$@61",
  "$@62", "lista_parametros", "acumulador_parametros", "lista_casos",
  "sino_caso", 0
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
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    69,    70,    71,    72,    73,    68,    68,
      75,    76,    77,    78,    79,    74,    74,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    83,    84,    82,    85,    86,    87,    82,    89,    90,
      91,    88,    92,    93,    88,    95,    96,    97,    94,    99,
     100,   101,   102,   103,   104,    98,   106,   107,   108,   105,
     109,   110,   109,   109,   112,   113,   111,   114,   115,   111,
     116,   117,   111,   118,   119,   111,   120,   121,   111,   122,
     123,   111,   125,   126,   127,   128,   129,   124,   131,   132,
     133,   134,   135,   136,   130,   138,   139,   137,   140,   141,
     141,   141,   141,   141,   141,   141,   142,   142,   142,   142,
     142,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   145,   145,   147,   148,   146,   149,   150,   150,   151,
     151,   151,   151,   151,   152,   152,   153,   154,   155,   153,
     156,   156,   157,   157,   158,   158,   159,   159
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,    12,     0,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     0,     0,     8,     0,     0,     0,    11,     0,     0,
       0,     9,     0,     0,     7,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     9,
       3,     0,     4,     3,     0,     0,     6,     0,     0,     6,
       0,     0,     6,     0,     0,     6,     0,     0,     6,     0,
       0,     6,     0,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     6,     2,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     0,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     2,     0,     0,     6,
       2,     0,     3,     0,     5,     4,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,    10,     0,     9,     0,     1,     3,    18,    11,     0,
      64,     0,    38,     0,     0,    49,    82,     0,     2,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    61,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   120,     0,   131,   132,   133,   130,
     127,   128,     0,   105,   110,   116,   119,   121,   122,   129,
     118,     0,     0,   147,    45,    56,     0,     0,     0,     0,
      98,    17,     0,    12,     0,     0,    60,    63,     0,    65,
      68,    71,    74,    77,    80,   141,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    42,     0,     0,
      50,     0,     0,     0,     0,     0,   141,   136,   135,     0,
       0,     0,     0,     0,     0,   143,    96,   141,   117,   101,
     102,    99,   100,   103,   104,    31,   106,   107,   109,   108,
     111,   112,   115,   114,   113,    18,   147,   146,     0,    18,
      18,     0,    89,     0,    83,    62,    13,     5,     0,   134,
       0,     0,     0,     0,     0,     0,     0,   140,     0,   124,
       0,     0,   145,    39,    43,    46,    57,     0,     0,     0,
       0,     0,     0,   138,    66,    69,    72,    75,    78,    81,
     143,    97,     0,    32,    18,   144,     0,     0,     0,     0,
      51,     0,    30,     0,    14,    18,     0,   142,   125,     0,
      35,    40,    44,    47,    58,     0,    90,    84,     0,     6,
     139,    33,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    36,    41,    48,    59,    52,    18,    18,    15,     7,
       0,     0,    91,    85,     0,    37,    18,     0,     0,     9,
      53,    92,    86,     8,     0,     0,     0,    54,    93,    87,
       0,     0,    55,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    74,   182,   230,   244,     3,     4,
      32,   115,   181,   218,    18,    19,    20,   170,   209,   171,
     222,   240,    21,    62,   196,   223,   148,   197,    22,   108,
     198,   224,    23,    66,   151,   215,   241,   254,   260,    24,
     109,   199,   225,    25,    72,    26,    36,   119,    37,   120,
      38,   121,    39,   122,    40,   123,    41,   124,    27,    69,
     180,   228,   248,   256,    28,    67,   178,   227,   247,   255,
     261,    29,    42,   168,    30,   125,    53,    54,    55,    56,
      57,    86,   192,    58,    59,    60,    43,    77,   158,   206,
     126,   167,    63,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -111
static const yytype_int16 yypact[] =
{
     -50,  -111,    16,   -37,    19,  -111,  -111,     0,  -111,    27,
     142,    10,    15,    10,    10,   -13,     0,    10,  -111,     0,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,   -18,  -111,    -1,    10,    41,    42,    40,    45,
      48,    46,    36,  -111,     2,    10,  -111,  -111,  -111,  -111,
    -111,  -111,   103,     9,    25,  -111,  -111,  -111,  -111,  -111,
    -111,    10,    55,    17,   188,   188,    62,    12,    22,    18,
     188,  -111,    65,  -111,    50,    53,   188,  -111,    89,  -111,
    -111,  -111,  -111,  -111,  -111,    10,    56,   153,    10,    10,
      10,    10,    10,    10,     0,    10,    10,    10,    10,    10,
      10,    10,    10,    10,   169,    15,     0,  -111,    29,    28,
    -111,    10,    10,    10,    10,    82,    10,    67,    70,    84,
      86,    88,   106,   120,   121,   108,  -111,    10,  -111,     9,
       9,     9,     9,     9,     9,    83,    25,    25,    25,    25,
    -111,  -111,  -111,  -111,  -111,     0,    17,  -111,    87,     0,
       0,   124,   188,    69,   188,   188,  -111,  -111,    93,  -111,
      10,    10,    10,    10,    10,    10,    10,  -111,   109,  -111,
      91,    94,    15,  -111,  -111,  -111,  -111,    10,    85,    92,
      90,    98,   117,  -111,   188,   188,   188,   188,   188,   188,
     108,  -111,   119,  -111,     0,  -111,   127,   126,   130,   131,
     188,    10,  -111,    10,  -111,     0,   154,  -111,  -111,   122,
    -111,  -111,  -111,  -111,  -111,   128,   188,   188,   173,  -111,
    -111,  -111,   136,   144,   141,   143,    10,   147,   149,   -50,
     168,  -111,  -111,  -111,  -111,   188,     0,     0,  -111,  -111,
     171,   170,  -111,  -111,   133,  -111,     0,   176,   177,   -37,
    -111,  -111,  -111,  -111,   181,   174,   175,  -111,  -111,  -111,
     182,   172,  -111,  -111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   -25,  -111,  -111,  -111,  -111,  -111,    -2,  -111,
    -111,  -111,  -111,  -111,   -15,   216,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,    -6,   116,   118,    -5,  -111,
    -111,  -111,  -111,    -7,  -111,  -111,   123,  -111,  -111,  -111,
    -110,    44,  -104,    96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -138
static const yytype_int16 yytable[] =
{
      31,   146,    44,    10,    71,    52,   157,    64,    65,    31,
       1,    70,    31,    44,    95,    96,     5,   169,    75,     6,
      45,    35,     8,  -123,    46,    47,    48,    97,    76,    78,
      33,    45,    99,   100,   101,    46,    47,    48,    61,    87,
      11,   -88,   102,    73,    12,    13,    79,    98,    14,    81,
      80,    15,    82,    16,    83,   104,    84,    85,   105,    17,
     106,    49,   103,    50,    51,   110,   111,   112,   195,   114,
     113,   116,    49,   117,    50,    51,   149,   127,   150,   135,
      88,    89,    90,    91,    92,   156,  -137,    31,   160,    35,
     161,   147,   162,    93,   140,   141,   142,   143,   144,    31,
      88,    89,    90,    91,    92,   152,   153,   154,   155,   118,
     163,   179,   183,    93,    88,    89,    90,    91,    92,    88,
      89,    90,    91,    92,   164,   165,   -34,    93,   177,   174,
     172,   191,    93,   193,   175,   176,   166,   194,    31,   205,
     201,   208,    31,    31,    94,   202,    34,   203,   -76,   -73,
     -67,   -70,   -79,   204,   184,   185,   186,   187,   188,   189,
     190,    35,   221,   -95,    88,    89,    90,    91,    92,   211,
     212,   200,   213,   214,   220,   128,   229,    93,   231,   210,
      88,    89,    90,    91,    92,   226,   233,    31,   232,   249,
     219,   234,   145,    93,   236,   216,   237,   217,    31,    88,
      89,    90,    91,    92,   129,   130,   131,   132,   133,   134,
     239,   245,    93,   136,   137,   138,   139,   246,   251,   252,
     235,   242,   243,   257,   253,   258,   263,   238,   259,    31,
      31,   250,    68,   262,   207,     0,     0,     0,     0,    31,
       0,   159,   173
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-111))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,   105,     3,     3,    19,    11,   116,    13,    14,    16,
      60,    17,    19,     3,     5,     6,     0,   127,    19,    56,
      21,    19,     3,    21,    25,    26,    27,    18,    34,    35,
       3,    21,     7,     8,     9,    25,    26,    27,    23,    45,
      40,    54,    17,    61,    44,    45,     5,    38,    48,     9,
       8,    51,     7,    53,     6,    61,    10,    21,     3,    59,
      43,    62,    37,    64,    65,     3,    54,    45,   172,     4,
      52,    21,    62,    20,    64,    65,    47,    21,    50,    94,
      11,    12,    13,    14,    15,     3,    19,    94,     4,    19,
       4,   106,     4,    24,    99,   100,   101,   102,   103,   106,
      11,    12,    13,    14,    15,   111,   112,   113,   114,    20,
       4,    42,    19,    24,    11,    12,    13,    14,    15,    11,
      12,    13,    14,    15,     4,     4,    43,    24,     4,    42,
     145,    22,    24,    42,   149,   150,    28,    43,   145,    22,
      55,    22,   149,   150,    41,    53,     4,    57,     6,     7,
       8,     9,    10,    55,   160,   161,   162,   163,   164,   165,
     166,    19,    40,    21,    11,    12,    13,    14,    15,    42,
      44,   177,    42,    42,    20,    22,     3,    24,    42,   194,
      11,    12,    13,    14,    15,    57,    45,   194,    44,    56,
     205,    48,    23,    24,    47,   201,    47,   203,   205,    11,
      12,    13,    14,    15,    88,    89,    90,    91,    92,    93,
      42,    40,    24,    95,    96,    97,    98,    47,    42,    42,
     226,   236,   237,    42,   249,    51,    54,   229,    53,   236,
     237,   246,    16,    51,   190,    -1,    -1,    -1,    -1,   246,
      -1,   118,   146
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    67,    74,    75,     0,    56,    68,     3,    69,
       3,    40,    44,    45,    48,    51,    53,    59,    80,    81,
      82,    88,    94,    98,   105,   109,   111,   124,   130,   137,
     140,   149,    76,     3,     4,    19,   112,   114,   116,   118,
     120,   122,   138,   152,     3,    21,    25,    26,    27,    62,
      64,    65,   141,   142,   143,   144,   145,   146,   149,   150,
     151,    23,    89,   158,   141,   141,    99,   131,    81,   125,
     141,    80,   110,    61,    70,    19,   141,   153,   141,     5,
       8,     9,     7,     6,    10,    21,   147,   141,    11,    12,
      13,    14,    15,    24,    41,     5,     6,    18,    38,     7,
       8,     9,    17,    37,   141,     3,    43,   159,    95,   106,
       3,    54,    45,    52,     4,    77,    21,    20,    20,   113,
     115,   117,   119,   121,   123,   141,   156,    21,    22,   142,
     142,   142,   142,   142,   142,    80,   143,   143,   143,   143,
     144,   144,   144,   144,   144,    23,   158,    80,    92,    47,
      50,   100,   141,   141,   141,   141,     3,   156,   154,   152,
       4,     4,     4,     4,     4,     4,    28,   157,   139,   156,
      83,    85,    80,   159,    42,    80,    80,     4,   132,    42,
     126,    78,    71,    19,   141,   141,   141,   141,   141,   141,
     141,    22,   148,    42,    43,   158,    90,    93,    96,   107,
     141,    55,    53,    57,    55,    22,   155,   157,    22,    84,
      80,    42,    44,    42,    42,   101,   141,   141,    79,    80,
      20,    40,    86,    91,    97,   108,    57,   133,   127,     3,
      72,    42,    44,    45,    48,   141,    47,    47,    74,    42,
      87,   102,    80,    80,    73,    40,    47,   134,   128,    56,
      80,    42,    42,    68,   103,   135,   129,    42,    51,    53,
     104,   136,    51,    54
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
#line 91 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(3) - (3)].instruccion);
            Programa::obtenerInstancia()->instrucciones = (yyvsp[(3) - (3)].instruccion);
        }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 100 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 101 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=16;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 103 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=17;}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 105 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 106 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=47;}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 109 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            DeclaracionDeFuncion *declrFuncion = new DeclaracionDeFuncion(new Variable((yyvsp[(3) - (14)].string), yylineno, correlativo++), (yyvsp[(6) - (14)].lista), (yyvsp[(9) - (14)].instruccion));
            Programa::obtenerInstancia()->tablaDeFunciones->push_back(declrFuncion);
        }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 114 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.string)=0;
        }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 120 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 121 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=51;}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 122 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 123 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=46;}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 124 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 127 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            DeclaracionUtilizar *declrUtilizar = new DeclaracionUtilizar(new VariablePuerto((yyvsp[(3) - (12)].string), yylineno, correlativo++),
                                                                         new VariableSensor((yyvsp[(7) - (12)].string), yylineno, correlativo++),
                                                                         new Variable((yyvsp[(11) - (12)].string), yylineno, correlativo++));
            Programa::obtenerInstancia()->tablaDePuertosYSensores->push_back(declrUtilizar);
        }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 134 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.string)=0;
        }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 143 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyvsp[(1) - (2)].instruccion)->establecerSiguiente((yyvsp[(2) - (2)].instruccion));
            (yyval.instruccion) = (yyvsp[(1) - (2)].instruccion);
        }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 148 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = 0;
        }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 154 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 155 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 156 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 157 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 158 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 159 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 160 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 161 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 162 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 163 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 164 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 166 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
        }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 173 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 174 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=31;}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 176 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            (yyval.instruccion) = new InstruccionSi((yyvsp[(2) - (8)].expresion), (yyvsp[(4) - (8)].instruccion), 0, 0, 0, correlativo++);
        }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 183 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=34;}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 185 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 186 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=31;}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 188 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            (yyval.instruccion) = new InstruccionSi((yyvsp[(2) - (11)].expresion), (yyvsp[(4) - (11)].instruccion), (yyvsp[(7) - (11)].instruccion), 0, 0, correlativo++);
        }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 195 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 198 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 199 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=35;}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 201 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = new InstruccionCaso( new Variable((yyvsp[(3) - (9)].string), yylineno, correlativo++), (yyvsp[(4) - (9)].lista_de_caso), (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 206 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 207 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=35;}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 209 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = new InstruccionCaso(0, (yyvsp[(2) - (7)].lista_de_caso), (yyvsp[(3) - (7)].instruccion), 0, correlativo++);
        }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 215 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 217 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 218 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=36;}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 220 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /* Parametros:   condicion, instrucciones, siguiente */
            (yyval.instruccion) = new InstruccionMientras((yyvsp[(2) - (9)].expresion), (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 226 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=57;}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 227 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 229 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=55;}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 231 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=38;}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 233 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 234 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=42;}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 236 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /*identificador, inicio, final, instrucciones, siguiente*/
            (yyval.instruccion) = new InstruccionPara(new InstruccionAsignacion(new Variable((yyvsp[(3) - (16)].string), yylineno, correlativo++),(yyvsp[(6) - (16)].expresion),0, correlativo++),
                                                               (yyvsp[(9) - (16)].expresion), (yyvsp[(12) - (16)].instruccion), 0, correlativo++);
        }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 244 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=41;}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 246 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 247 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=39;}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 249 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /*Cantidad, instrucciones, siguiente*/
            (yyval.instruccion) = new InstruccionRepetir((yyvsp[(2) - (9)].expresion), (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 258 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /*Variable, Expresion, siguiente*/
            /* SI relacionales devuelve una variable arreglo?*/

            Variable *var = new Variable((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].expresion), yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var,(yyvsp[(3) - (3)].expresion)->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, (yyvsp[(3) - (3)].expresion), 0, correlativo++);
        }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 266 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 269 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /*Variable, Expresion, siguiente*/
            (yyval.instruccion) = new InstruccionAsignacion((yyvsp[(1) - (4)].expresion), (yyvsp[(4) - (4)].expresion), 0, correlativo++);
        }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 276 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            VariableArreglo* variableArreglo = new VariableArreglo((yyvsp[(1) - (3)].string), 0, yylineno, correlativo);
            TipoArreglo *tipoArreglo = Programa::obtenerInstancia()->obtenerTipoArreglo();
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(variableArreglo, tipoArreglo, correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(variableArreglo, 0, 0, correlativo++);
        }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 284 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=0;}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 285 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 288 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaSuma *suma = new ExpresionBinariaSuma(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), suma, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, suma->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, suma, 0, correlativo++);
        }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 297 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=3;}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 298 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 301 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaDivision *division = new ExpresionBinariaDivision(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), division, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, division->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, division, 0, correlativo++);
        }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 309 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=4;}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 310 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 313 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaModulo *modulo = new ExpresionBinariaModulo(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), modulo, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, modulo->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, modulo, 0, correlativo++);
        }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 321 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=2;}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 322 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 325 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaMultiplicacion *multiplicacion= new ExpresionBinariaMultiplicacion(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), multiplicacion, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, multiplicacion->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, multiplicacion, 0, correlativo++);
        }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 333 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=1;}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 334 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 337 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaResta *resta= new ExpresionBinariaResta(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), resta, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, resta->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, resta, 0, correlativo++);
        }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 345 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=5;}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 346 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=19;}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 349 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaExponenciacion *exponenciacion= new ExpresionBinariaExponenciacion(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), exponenciacion, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, exponenciacion->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, exponenciacion, 0, correlativo++);
        }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 361 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=43;}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 363 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=55;}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 365 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=38;}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 367 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 368 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=44;}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 370 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /* inicio , final , instrucciones , siguiente*/
            (yyval.instruccion) = new InstruccionRepitaDesde((yyvsp[(4) - (14)].expresion), (yyvsp[(7) - (14)].expresion), (yyvsp[(10) - (14)].instruccion), 0, correlativo++);
        }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 376 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=45;}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 378 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=46;}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 380 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=38;}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 382 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=33;}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 383 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=42;}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 384 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=45;}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 386 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /* variable, coleccion, instrucciones, siguientes */
            (yyval.instruccion) = new InstruccionParaCada((yyvsp[(4) - (16)].expresion), (yyvsp[(7) - (16)].expresion), (yyvsp[(10) - (16)].instruccion), 0, correlativo++);
        }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 392 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=16;}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 394 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=17;}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 396 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = new InstruccionLlamadaAFuncion((yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].lista), 0, correlativo++);
        }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 403 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = new InstruccionRetornar((yyvsp[(2) - (2)].expresion), 0, correlativo++);
        }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 413 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMenor((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 419 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMayor((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 425 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMayorIgual((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 431 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMenorIgual((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 437 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaIgualdad((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 443 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaDistinto((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 447 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 455 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaSuma((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 461 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaResta((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 467 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaO((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 473 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaO((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 477 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 485 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaMultiplicacion((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 491 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaDivision((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 497 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaY((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 503 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaY((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 509 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionBinariaModulo((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 513 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 521 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(2) - (3)].expresion);
        }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 525 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 529 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 533 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new Variable((yyvsp[(1) - (1)].string), yylineno, correlativo++);
        }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 539 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 543 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 548 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=16;}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 550 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=17;}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 552 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new VariableFuncion((yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].lista), yylineno, correlativo++);
        }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 559 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new VariableArreglo((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].lista), yylineno, correlativo++);
        }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 567 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralBooleana(true, yylineno);
        }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 571 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralBooleana(false, yylineno);
        }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 577 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 581 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralEntera( atoi( (yyvsp[(1) - (1)].string)->c_str() ), yylineno);
       }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 585 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralCaracter( (yyvsp[(1) - (1)].string)->at(1), yylineno);
       }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 589 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralFlotante( atof( (yyvsp[(1) - (1)].string)->c_str() ), yylineno);
       }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 593 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.expresion) = new ExpresionLiteralCadena((yyvsp[(1) - (1)].string), yylineno);
       }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 602 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyvsp[(4) - (4)].lista)->lista->push_back((yyvsp[(2) - (4)].expresion));
            (yyval.lista) = (yyvsp[(4) - (4)].lista);
        }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 609 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            Lista *_lista = new Lista();
            _lista->lista->push_back((yyvsp[(2) - (3)].expresion));
            (yyval.lista) = _lista;
        }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 618 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
        }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 621 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=14;}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 622 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {token_esperado=15;}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 624 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {

        }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 631 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyvsp[(2) - (2)].lista)->lista->push_back((yyvsp[(1) - (2)].expresion));
            (yyval.lista) = (yyvsp[(2) - (2)].lista);
        }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 636 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.lista) = new Lista();
        }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 644 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyvsp[(3) - (3)].lista)->lista->push_back((yyvsp[(2) - (3)].expresion));
            (yyval.lista) = (yyvsp[(3) - (3)].lista);
        }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 649 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.lista) = new Lista();
        }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 659 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyvsp[(5) - (5)].lista_de_caso)->establecerSiguiente(new ListaDeCaso((yyvsp[(2) - (5)].expresion), (yyvsp[(4) - (5)].instruccion), 0) );
            (yyval.lista_de_caso) = (yyvsp[(5) - (5)].lista_de_caso);
         }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 667 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            /*Parametros, Expresion, Instruccion, Siguiente*/
            (yyval.lista_de_caso) = new ListaDeCaso((yyvsp[(2) - (4)].expresion), (yyvsp[(4) - (4)].instruccion), 0);
        }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 675 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = (yyvsp[(2) - (2)].instruccion);
        }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 679 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"
    {
            (yyval.instruccion) = 0;
        }
    break;



/* Line 1806 of yacc.c  */
#line 3020 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.cpp"
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
#line 682 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"


