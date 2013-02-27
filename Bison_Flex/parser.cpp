/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


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
    /*Over 9000!*/
    int correlativo = 9001;
    int correlativoExtra =0;

    void yyerror(const char *s)
    {
        cout << "Error Sintactico:" << endl;
        cout << "Linea: " << yylineno << endl;
        cout << GeneradorDeErrores::obtenerTokenEsperado(token_esperado).c_str() << endl;
    }



# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_D_DROPBOX_PROYECTOCODIGO_LEGUS_BISON_FLEX_PARSER_H_INCLUDED
# define YY_YY_D_DROPBOX_PROYECTOCODIGO_LEGUS_BISON_FLEX_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */


    #include <string>
    #include "Expresion/Expresion.h"
    #include "Instruccion/Instruccion.h"
    #include "Bison_Flex/Lista.h"
    #include "Instruccion/ListaDeCaso.h"




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
     T_ENTERO = 286,
     T_FLOTANTE = 287,
     T_BOOLEANO = 288,
     T_CARACTER = 289,
     T_CADENA = 290,
     T_ES = 291,
     T_MODULO = 292,
     T_DIVISION_ENTERA = 293,
     T_IGUAL = 294,
     T_A = 295,
     T_DISTINTO = 296,
     T_DE = 297,
     T_OPERADOR_Y = 298,
     T_OPERADOR_O = 299,
     T_NO = 300,
     T_SI = 301,
     T_ENTONCES = 302,
     T_FIN = 303,
     T_SINO = 304,
     T_CASO = 305,
     T_MIENTRAS = 306,
     T_HAGA = 307,
     T_EJECUTE = 308,
     T_REPETIR = 309,
     T_INFINITAS = 310,
     T_VECES = 311,
     T_PARA = 312,
     T_DESDE = 313,
     T_REPITA = 314,
     T_CADA = 315,
     T_EN = 316,
     T_FUNCION = 317,
     T_HASTA = 318,
     T_RETORNA = 319,
     T_RETORNAR = 320,
     T_UTILIZAR = 321,
     T_COMO = 322,
     T_LITERAL_NUMERICA = 323,
     T_DEFINIR = 324,
     T_VERDADERO = 325,
     T_FALSO = 326
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


    std::string              *string;
    Expresion                *expresion;
    Instruccion              *instruccion;
    Expresion                *vectorExpresiones;
    Lista                    *lista;
    ListaDeCaso              *lista_de_caso;



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

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
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

#endif /* !YY_YY_D_DROPBOX_PROYECTOCODIGO_LEGUS_BISON_FLEX_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNRULES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

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
      65,    66,    67,    68,    69,    70,    71
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
     178,   179,   180,   181,   191,   195,   196,   201,   205,   206,
     207,   214,   215,   216,   223,   224,   225,   232,   233,   234,
     241,   242,   243,   250,   251,   252,   259,   260,   261,   262,
     263,   264,   279,   280,   281,   282,   283,   284,   285,   302,
     303,   304,   311,   314,   318,   322,   326,   330,   334,   338,
     340,   344,   348,   352,   356,   358,   362,   366,   370,   374,
     378,   380,   384,   386,   388,   390,   396,   398,   400,   402,
     404,   406,   408,   410,   411,   412,   419,   422,   424,   426,
     428,   430,   432,   434,   436,   441,   445,   448,   449,   450,
     457,   460,   461,   465,   466,   472,   477,   480
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    80,    74,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    75,     3,    76,    21,   166,    77,    22,
      86,    78,    48,    79,    62,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    81,     3,    82,    67,    83,     3,
      84,    61,    85,     3,    80,    -1,    -1,    87,    86,    -1,
      -1,    88,    -1,    94,    -1,   100,    -1,   104,    -1,   111,
      -1,   118,    -1,   120,    -1,   133,    -1,   139,    -1,   146,
      -1,   149,    -1,    59,    87,    51,   150,    48,    59,    -1,
      -1,    -1,    46,   150,    47,    86,    89,    48,    90,    46,
      -1,    -1,    -1,    -1,    46,   150,    47,    86,    91,    49,
      86,    92,    48,    93,    46,    -1,    -1,    -1,    -1,    50,
      95,     3,   168,   169,    96,    48,    97,    50,    -1,    -1,
      -1,    50,   168,   169,    98,    48,    99,    50,    -1,    -1,
      -1,    -1,    51,   150,   101,    53,    86,   102,    48,   103,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,   105,
       3,   106,     4,   150,   107,    63,   150,   108,    53,    86,
     109,    48,   110,    57,    -1,    -1,    -1,    -1,    54,   150,
     112,    56,    86,   113,    48,   114,    54,    -1,    -1,    -1,
      -1,    54,    55,   115,    56,    86,   116,    48,   117,    54,
      -1,     3,     4,   150,    -1,    -1,   159,   119,     4,   150,
      -1,     3,     4,   163,    -1,    -1,    -1,     3,   121,     5,
     122,     4,   150,    -1,    -1,    -1,     3,   123,     8,   124,
       4,   150,    -1,    -1,    -1,     3,   125,     9,   126,     4,
     150,    -1,    -1,    -1,     3,   127,     7,   128,     4,   150,
      -1,    -1,    -1,     3,   129,     6,   130,     4,   150,    -1,
      -1,    -1,     3,   131,    10,   132,     4,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    59,   134,    58,   150,   135,    63,
     150,   136,    53,    86,   137,    48,   138,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,   140,    60,   150,   141,
      61,   150,   142,    53,    86,   143,    48,   144,    57,   145,
      60,    -1,    -1,    -1,     3,   147,    21,   166,   148,    22,
      -1,    65,   150,    -1,   150,    13,   151,    -1,   150,    14,
     151,    -1,   150,    11,   151,    -1,   150,    12,   151,    -1,
     150,    15,   151,    -1,   150,    24,   151,    -1,   151,    -1,
     151,     5,   152,    -1,   151,     6,   152,    -1,   151,    44,
     152,    -1,   151,    18,   152,    -1,   152,    -1,   152,     7,
     153,    -1,   152,     8,   153,    -1,   152,    43,   153,    -1,
     152,    17,   153,    -1,   152,     9,   153,    -1,   153,    -1,
      21,   150,    22,    -1,   161,    -1,   155,    -1,     3,    -1,
      21,   150,    22,    36,   154,    -1,    31,    -1,    32,    -1,
      35,    -1,    33,    -1,    34,    -1,   156,    -1,   159,    -1,
      -1,    -1,     3,   157,    21,   166,   158,    22,    -1,     3,
     162,    -1,    70,    -1,    71,    -1,   160,    -1,    68,    -1,
      25,    -1,    26,    -1,    27,    -1,    19,   150,    20,   162,
      -1,    19,   150,    20,    -1,    19,    20,    -1,    -1,    -1,
      19,    20,   164,    19,   165,    20,    -1,   150,   167,    -1,
      -1,    28,   150,   167,    -1,    -1,    23,   150,    23,    86,
     168,    -1,    23,   150,    23,    86,    -1,    49,    86,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,   104,   105,   107,   109,   110,   104,   118,
     124,   125,   126,   127,   128,   124,   138,   146,   152,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   177,   178,   174,   187,   189,   190,   184,   199,   202,
     203,   199,   210,   211,   208,   219,   221,   222,   218,   230,
     231,   233,   235,   237,   238,   230,   259,   261,   262,   258,
     270,   272,   273,   269,   281,   292,   292,   299,   310,   311,
     310,   323,   324,   323,   335,   336,   335,   347,   348,   347,
     359,   360,   359,   371,   372,   371,   387,   389,   391,   393,
     394,   387,   402,   404,   406,   408,   409,   410,   402,   418,
     420,   418,   427,   436,   442,   448,   454,   460,   466,   472,
     478,   484,   490,   496,   502,   508,   514,   520,   526,   532,
     538,   544,   550,   554,   558,   562,   568,   569,   570,   571,
     572,   576,   580,   586,   588,   586,   595,   604,   608,   614,
     618,   622,   626,   630,   636,   644,   654,   659,   660,   658,
     668,   674,   679,   687,   692,   701,   711,   717
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "T_LITERAL_CADENA", "T_COMA", "T_ENTER", "T_EOF", "T_ENTERO",
  "T_FLOTANTE", "T_BOOLEANO", "T_CARACTER", "T_CADENA", "T_ES", "T_MODULO",
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
  "instruccion_repetir", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "instruccion_asignacion", "$@36", "instruccion_auto_asignacion", "$@37",
  "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46",
  "$@47", "$@48", "instruccion_repita_desde", "$@49", "$@50", "$@51",
  "$@52", "$@53", "instruccion_para_cada", "$@54", "$@55", "$@56", "$@57",
  "$@58", "$@59", "instruccion_llamada_a_funcion", "$@60", "$@61",
  "instruccion_retornar", "relacionales", "expresiones", "factores",
  "terminales", "tipo_de_dato", "id_variable", "id_funcion", "$@62",
  "$@63", "id_arreglo", "literal_booleana", "literales", "lista_indices",
  "lista_indices_declaracion", "$@64", "$@65", "lista_parametros",
  "acumulador_parametros", "lista_casos", "sino_caso", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    75,    76,    77,    78,    79,    74,    74,
      81,    82,    83,    84,    85,    80,    80,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    89,    90,    88,    91,    92,    93,    88,    95,    96,
      97,    94,    98,    99,    94,   101,   102,   103,   100,   105,
     106,   107,   108,   109,   110,   104,   112,   113,   114,   111,
     115,   116,   117,   111,   118,   119,   118,   118,   121,   122,
     120,   123,   124,   120,   125,   126,   120,   127,   128,   120,
     129,   130,   120,   131,   132,   120,   134,   135,   136,   137,
     138,   133,   140,   141,   142,   143,   144,   145,   139,   147,
     148,   146,   149,   150,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   157,   158,   156,   159,   160,   160,   161,
     161,   161,   161,   161,   162,   162,   163,   164,   165,   163,
     166,   166,   167,   167,   168,   168,   169,   169
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
       0,     0,     0,     9,     3,     0,     4,     3,     0,     0,
       6,     0,     0,     6,     0,     0,     6,     0,     0,     6,
       0,     0,     6,     0,     0,     6,     0,     0,     0,     0,
       0,    14,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     6,     2,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     5,     1,     1,     1,     1,
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
      68,     0,    38,     0,     0,    49,    86,     0,     2,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    65,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,   124,     0,   141,   142,   143,   140,
     137,   138,     0,   109,   114,   120,   123,   131,   132,   139,
     122,     0,     0,   157,    45,    60,    56,     0,     0,     0,
       0,   102,    17,     0,    12,     0,     0,    64,    67,     0,
      69,    72,    75,    78,    81,    84,   151,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    42,     0,
       0,     0,    50,     0,     0,     0,     0,     0,   151,   146,
     145,     0,     0,     0,     0,     0,     0,   153,   100,   151,
     121,   105,   106,   103,   104,   107,   108,    31,   110,   111,
     113,   112,   115,   116,   119,   118,   117,    18,   157,   156,
       0,    18,    18,    18,     0,    93,     0,    87,    66,    13,
       5,     0,   144,     0,     0,     0,     0,     0,     0,     0,
     150,     0,   134,     0,     0,     0,   155,    39,    43,    46,
      61,    57,     0,     0,     0,     0,     0,     0,   148,    70,
      73,    76,    79,    82,    85,   153,   101,     0,   126,   127,
     129,   130,   128,   125,    32,    18,   154,     0,     0,     0,
       0,     0,    51,     0,    30,     0,    14,    18,     0,   152,
     135,     0,    35,    40,    44,    47,    62,    58,     0,    94,
      88,     0,     6,   149,    33,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,    36,    41,    48,    63,    59,
      52,    18,    18,    15,     7,     0,     0,    95,    89,     0,
      37,    18,     0,     0,     9,    53,    96,    90,     8,     0,
       0,     0,    54,    97,    91,     0,     0,    55,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    75,   187,   244,   259,     3,     4,
      32,   117,   186,   231,    18,    19,    20,   174,   221,   175,
     235,   255,    21,    62,   207,   236,   150,   208,    22,   109,
     209,   237,    23,    67,   154,   228,   256,   269,   275,    24,
     111,   211,   239,   110,   210,   238,    25,    73,    26,    36,
     121,    37,   122,    38,   123,    39,   124,    40,   125,    41,
     126,    27,    70,   185,   242,   263,   271,    28,    68,   183,
     241,   262,   270,   276,    29,    42,   171,    30,   127,    53,
      54,    55,   203,    56,    57,    87,   197,    58,    59,    60,
      43,    78,   161,   218,   128,   170,    63,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -113
static const yytype_int16 yypact[] =
{
     -59,  -113,    13,   -52,    20,  -113,  -113,    67,  -113,    21,
     143,    41,    14,    41,     8,   -46,    67,    41,  -113,    67,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,   -26,  -113,    24,    41,    37,    38,    44,    40,
      55,    54,    50,  -113,    11,    41,  -113,  -113,  -113,  -113,
    -113,  -113,    69,    10,    31,  -113,  -113,  -113,  -113,  -113,
    -113,    41,    72,    23,   205,  -113,   205,    82,    26,    36,
      32,   205,  -113,    87,  -113,    80,    83,   205,  -113,    45,
    -113,  -113,  -113,  -113,  -113,  -113,    41,    81,   178,    41,
      41,    41,    41,    41,    41,    67,    41,    41,    41,    41,
      41,    41,    41,    41,    41,   200,    14,    67,  -113,    57,
      52,    58,  -113,    41,    41,    41,    41,   112,    41,   100,
     101,   118,   119,   121,   123,   124,   126,   154,  -113,    41,
      95,    10,    10,    10,    10,    10,    10,    88,    31,    31,
      31,    31,  -113,  -113,  -113,  -113,  -113,    67,    23,  -113,
      90,    67,    67,    67,   132,   205,     7,   205,   205,  -113,
    -113,   120,  -113,    41,    41,    41,    41,    41,    41,    41,
    -113,   139,  -113,   215,    93,    94,    14,  -113,  -113,  -113,
    -113,  -113,    41,   102,    89,    79,   109,   149,  -113,   205,
     205,   205,   205,   205,   205,   154,  -113,   150,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,    67,  -113,   127,   129,   128,
     133,   135,   205,    41,  -113,    41,  -113,    67,   157,  -113,
    -113,   134,  -113,  -113,  -113,  -113,  -113,  -113,   111,   205,
     205,   181,  -113,  -113,  -113,   137,   136,   144,   140,   142,
      41,   148,   152,   -59,   159,  -113,  -113,  -113,  -113,  -113,
     205,    67,    67,  -113,  -113,   151,   156,  -113,  -113,   141,
    -113,    67,   160,   173,   -52,  -113,  -113,  -113,  -113,   174,
     131,   166,  -113,  -113,  -113,   169,   167,  -113,  -113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,   -36,  -113,  -113,  -113,  -113,  -113,   -13,  -113,
    -113,  -113,  -113,  -113,   -18,   216,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,    -9,   146,
       0,   155,  -113,  -113,  -113,  -113,  -113,    -7,  -113,  -113,
     122,  -113,  -113,  -113,  -112,    46,  -103,   103
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -148
static const yytype_int16 yytable[] =
{
      31,    72,    52,   148,    64,    66,   160,     1,    71,    31,
       6,    44,    31,     5,   -92,    96,    97,   172,    89,    90,
      91,    92,    93,     8,    33,    77,    79,    44,    98,    45,
      35,    94,  -133,    46,    47,    48,    88,    61,   100,   101,
     102,    74,    80,    76,    44,    45,    81,    83,   103,    46,
      47,    48,   105,    82,    99,   184,    89,    90,    91,    92,
      93,    84,    45,    65,    85,   120,    46,    47,    48,    94,
      10,    86,   107,   206,   104,   106,    49,   137,    50,    51,
      89,    90,    91,    92,    93,   112,   113,   114,    31,   149,
     115,   116,    49,    94,    50,    51,   138,   139,   140,   141,
      31,   118,   129,   119,   155,   156,   157,   158,   152,    49,
     151,    50,    51,    11,   153,   159,    95,    12,    13,  -147,
      35,    14,   163,   164,    15,   165,    16,   166,   167,   176,
     168,   173,    17,   179,   180,   181,   182,   -34,   178,   188,
      31,   204,   215,   205,    31,    31,    31,    34,   214,   -80,
     -77,   -71,   -74,   -83,   189,   190,   191,   192,   193,   194,
     195,   196,    35,   213,   -99,    89,    90,    91,    92,    93,
     216,   217,   220,   212,   240,   223,   225,   233,    94,   224,
     234,   226,   169,   227,   243,   245,   246,   222,   273,    89,
      90,    91,    92,    93,   248,   247,   249,   260,    31,   232,
     130,   251,    94,   264,   229,   252,   230,   254,   266,   261,
      31,    89,    90,    91,    92,    93,    89,    90,    91,    92,
      93,   267,   272,   147,    94,   274,   277,   278,   268,    94,
     253,   250,    69,   257,   258,   131,   132,   133,   134,   135,
     136,   219,   162,   265,    31,    31,   198,   199,   200,   201,
     202,   177,     0,     0,    31,   142,   143,   144,   145,   146
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    19,    11,   106,    13,    14,   118,    66,    17,    16,
      62,     3,    19,     0,    60,     5,     6,   129,    11,    12,
      13,    14,    15,     3,     3,    34,    35,     3,    18,    21,
      19,    24,    21,    25,    26,    27,    45,    23,     7,     8,
       9,    67,     5,    19,     3,    21,     8,     7,    17,    25,
      26,    27,    61,     9,    44,    48,    11,    12,    13,    14,
      15,     6,    21,    55,    10,    20,    25,    26,    27,    24,
       3,    21,    49,   176,    43,     3,    68,    95,    70,    71,
      11,    12,    13,    14,    15,     3,    60,    51,    95,   107,
      58,     4,    68,    24,    70,    71,    96,    97,    98,    99,
     107,    21,    21,    20,   113,   114,   115,   116,    56,    68,
      53,    70,    71,    46,    56,     3,    47,    50,    51,    19,
      19,    54,     4,     4,    57,     4,    59,     4,     4,   147,
       4,    36,    65,   151,   152,   153,     4,    49,    48,    19,
     147,    48,    63,    49,   151,   152,   153,     4,    59,     6,
       7,     8,     9,    10,   163,   164,   165,   166,   167,   168,
     169,    22,    19,    61,    21,    11,    12,    13,    14,    15,
      61,    22,    22,   182,    63,    48,    48,    20,    24,    50,
      46,    48,    28,    48,     3,    48,    50,   205,    57,    11,
      12,    13,    14,    15,    54,    51,    54,    46,   205,   217,
      22,    53,    24,    62,   213,    53,   215,    48,    48,    53,
     217,    11,    12,    13,    14,    15,    11,    12,    13,    14,
      15,    48,    48,    23,    24,    59,    57,    60,   264,    24,
     243,   240,    16,   251,   252,    89,    90,    91,    92,    93,
      94,   195,   120,   261,   251,   252,    31,    32,    33,    34,
      35,   148,    -1,    -1,   261,   100,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,    73,    80,    81,     0,    62,    74,     3,    75,
       3,    46,    50,    51,    54,    57,    59,    65,    86,    87,
      88,    94,   100,   104,   111,   118,   120,   133,   139,   146,
     149,   159,    82,     3,     4,    19,   121,   123,   125,   127,
     129,   131,   147,   162,     3,    21,    25,    26,    27,    68,
      70,    71,   150,   151,   152,   153,   155,   156,   159,   160,
     161,    23,    95,   168,   150,    55,   150,   105,   140,    87,
     134,   150,    86,   119,    67,    76,    19,   150,   163,   150,
       5,     8,     9,     7,     6,    10,    21,   157,   150,    11,
      12,    13,    14,    15,    24,    47,     5,     6,    18,    44,
       7,     8,     9,    17,    43,   150,     3,    49,   169,   101,
     115,   112,     3,    60,    51,    58,     4,    83,    21,    20,
      20,   122,   124,   126,   128,   130,   132,   150,   166,    21,
      22,   151,   151,   151,   151,   151,   151,    86,   152,   152,
     152,   152,   153,   153,   153,   153,   153,    23,   168,    86,
      98,    53,    56,    56,   106,   150,   150,   150,   150,     3,
     166,   164,   162,     4,     4,     4,     4,     4,     4,    28,
     167,   148,   166,    36,    89,    91,    86,   169,    48,    86,
      86,    86,     4,   141,    48,   135,    84,    77,    19,   150,
     150,   150,   150,   150,   150,   150,    22,   158,    31,    32,
      33,    34,    35,   154,    48,    49,   168,    96,    99,   102,
     116,   113,   150,    61,    59,    63,    61,    22,   165,   167,
      22,    90,    86,    48,    50,    48,    48,    48,   107,   150,
     150,    85,    86,    20,    46,    92,    97,   103,   117,   114,
      63,   142,   136,     3,    78,    48,    50,    51,    54,    54,
     150,    53,    53,    80,    48,    93,   108,    86,    86,    79,
      46,    53,   143,   137,    62,    86,    48,    48,    74,   109,
     144,   138,    48,    57,    59,   110,   145,    57,    60
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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

    {
            (yyval.instruccion) = (yyvsp[(3) - (3)].instruccion);
            Programa::obtenerInstancia()->instrucciones = (yyvsp[(3) - (3)].instruccion);
        }
    break;

  case 3:

    {token_esperado=57;}
    break;

  case 4:

    {token_esperado=16;}
    break;

  case 5:

    {token_esperado=17;}
    break;

  case 6:

    {token_esperado=33;}
    break;

  case 7:

    {token_esperado=47;}
    break;

  case 8:

    {
            DeclaracionDeFuncion *declrFuncion = new DeclaracionDeFuncion(new Variable((yyvsp[(3) - (14)].string), yylineno, correlativo++), (yyvsp[(6) - (14)].lista), (yyvsp[(9) - (14)].instruccion));
            Programa::obtenerInstancia()->tablaDeFunciones->push_back(declrFuncion);
        }
    break;

  case 9:

    {
            (yyval.string)=0;
        }
    break;

  case 10:

    {token_esperado=57;}
    break;

  case 11:

    {token_esperado=51;}
    break;

  case 12:

    {token_esperado=57;}
    break;

  case 13:

    {token_esperado=46;}
    break;

  case 14:

    {token_esperado=57;}
    break;

  case 15:

    {
            DeclaracionUtilizar *declrUtilizar = new DeclaracionUtilizar(new VariablePuerto((yyvsp[(3) - (12)].string), yylineno, correlativo++),
                                                                         new VariableSensor((yyvsp[(7) - (12)].string), yylineno, correlativo++),
                                                                         new VariableSensor((yyvsp[(11) - (12)].string), yylineno, correlativo++));
            Programa::obtenerInstancia()->tablaDePuertosYSensores->push_back(declrUtilizar);
        }
    break;

  case 16:

    {
            (yyval.string)=0;
        }
    break;

  case 17:

    {
            (yyvsp[(1) - (2)].instruccion)->establecerSiguiente((yyvsp[(2) - (2)].instruccion));
            (yyval.instruccion) = (yyvsp[(1) - (2)].instruccion);
        }
    break;

  case 18:

    {
            (yyval.instruccion) = 0;
        }
    break;

  case 19:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 20:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 21:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 22:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 23:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 24:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 25:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 26:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 27:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 28:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 29:

    {(yyval.instruccion) = (yyvsp[(1) - (1)].instruccion);}
    break;

  case 30:

    {
        }
    break;

  case 31:

    {token_esperado=33;}
    break;

  case 32:

    {token_esperado=31;}
    break;

  case 33:

    {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            (yyval.instruccion) = new InstruccionSi((yyvsp[(2) - (8)].expresion), (yyvsp[(4) - (8)].instruccion), 0, 0, 0, correlativo++);
        }
    break;

  case 34:

    {token_esperado=34;}
    break;

  case 35:

    {token_esperado=33;}
    break;

  case 36:

    {token_esperado=31;}
    break;

  case 37:

    {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            (yyval.instruccion) = new InstruccionSi((yyvsp[(2) - (11)].expresion), (yyvsp[(4) - (11)].instruccion), (yyvsp[(7) - (11)].instruccion), 0, 0, correlativo++);
        }
    break;

  case 38:

    {token_esperado=57;}
    break;

  case 39:

    {token_esperado=33;}
    break;

  case 40:

    {token_esperado=35;}
    break;

  case 41:

    {
            (yyval.instruccion) = new InstruccionCaso( new Variable((yyvsp[(3) - (9)].string), yylineno, correlativo++), (yyvsp[(4) - (9)].lista_de_caso), (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 42:

    {token_esperado=33;}
    break;

  case 43:

    {token_esperado=35;}
    break;

  case 44:

    {
            (yyval.instruccion) = new InstruccionCaso(0, (yyvsp[(2) - (7)].lista_de_caso), (yyvsp[(3) - (7)].instruccion), 0, correlativo++);
        }
    break;

  case 45:

    {token_esperado=57;}
    break;

  case 46:

    {token_esperado=33;}
    break;

  case 47:

    {token_esperado=36;}
    break;

  case 48:

    {
            /* Parametros:   condicion, instrucciones, siguiente */
            (yyval.instruccion) = new InstruccionMientras((yyvsp[(2) - (9)].expresion), (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 49:

    {token_esperado=57;}
    break;

  case 50:

    {token_esperado=19;}
    break;

  case 51:

    {token_esperado=55;}
    break;

  case 52:

    {token_esperado=38;}
    break;

  case 53:

    {token_esperado=33;}
    break;

  case 54:

    {token_esperado=42;}
    break;

  case 55:

    {
            /*identificador, inicio, final, instrucciones, siguiente*/
            /*
                Para arreglar el problema del idDeExpresion del para
                establecer el id de la variable en 0 para que todas las
                instrucciones dentro del para puedan usar la variable.
                Esto pasa porque las instrucciones dentro del para
                van a tener un id mas pequeño debido al metodo de
                parsing ( Bottom-up ) de Bison.
            */
            int cori = correlativoExtra++;
            Variable *var = new Variable((yyvsp[(3) - (16)].string), (yyvsp[(6) - (16)].expresion), yylineno, cori);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var,(yyvsp[(6) - (16)].expresion)->validarSemantica(), cori));
            (yyval.instruccion) = new InstruccionPara(new InstruccionAsignacion(var,(yyvsp[(6) - (16)].expresion),0, correlativo++),
                                                               (yyvsp[(9) - (16)].expresion), (yyvsp[(12) - (16)].instruccion), 0, correlativo++);
        }
    break;

  case 56:

    {token_esperado=41;}
    break;

  case 57:

    {token_esperado=33;}
    break;

  case 58:

    {token_esperado=39;}
    break;

  case 59:

    {
            /*Cantidad, instrucciones, siguiente*/
            (yyval.instruccion) = new InstruccionRepetir((yyvsp[(2) - (9)].expresion), (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 60:

    {token_esperado=41;}
    break;

  case 61:

    {token_esperado=33;}
    break;

  case 62:

    {token_esperado=39;}
    break;

  case 63:

    {
            /*Cantidad, instrucciones, siguiente*/
            (yyval.instruccion) = new InstruccionRepetir(0, (yyvsp[(5) - (9)].instruccion), 0, correlativo++);
        }
    break;

  case 64:

    {
            /*Variable, Expresion, siguiente*/
            /* SI relacionales devuelve una variable arreglo?*/

            Variable *var = new Variable((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].expresion), yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var,(yyvsp[(3) - (3)].expresion)->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, (yyvsp[(3) - (3)].expresion), 0, correlativo++);
        }
    break;

  case 65:

    {token_esperado=19;}
    break;

  case 66:

    {
            /*Variable, Expresion, siguiente*/
            (yyval.instruccion) = new InstruccionAsignacion((yyvsp[(1) - (4)].expresion), (yyvsp[(4) - (4)].expresion), 0, correlativo++);
        }
    break;

  case 67:

    {
            VariableArreglo* variableArreglo = new VariableArreglo((yyvsp[(1) - (3)].string), 0, yylineno, correlativo, 0);
            TipoArreglo *tipoArreglo = Programa::obtenerInstancia()->obtenerTipoArreglo();
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(variableArreglo, tipoArreglo, correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(variableArreglo, 0, 0, correlativo++);
        }
    break;

  case 68:

    {token_esperado=0;}
    break;

  case 69:

    {token_esperado=19;}
    break;

  case 70:

    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaSuma *suma = new ExpresionBinariaSuma(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), suma, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, suma->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, suma, 0, correlativo++);
        }
    break;

  case 71:

    {token_esperado=3;}
    break;

  case 72:

    {token_esperado=19;}
    break;

  case 73:

    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaDivision *division = new ExpresionBinariaDivision(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), division, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, division->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, division, 0, correlativo++);
        }
    break;

  case 74:

    {token_esperado=4;}
    break;

  case 75:

    {token_esperado=19;}
    break;

  case 76:

    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaModulo *modulo = new ExpresionBinariaModulo(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), modulo, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, modulo->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, modulo, 0, correlativo++);
        }
    break;

  case 77:

    {token_esperado=2;}
    break;

  case 78:

    {token_esperado=19;}
    break;

  case 79:

    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaMultiplicacion *multiplicacion= new ExpresionBinariaMultiplicacion(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), multiplicacion, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, multiplicacion->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, multiplicacion, 0, correlativo++);
        }
    break;

  case 80:

    {token_esperado=1;}
    break;

  case 81:

    {token_esperado=19;}
    break;

  case 82:

    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaResta *resta= new ExpresionBinariaResta(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), resta, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, resta->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, resta, 0, correlativo++);
        }
    break;

  case 83:

    {token_esperado=5;}
    break;

  case 84:

    {token_esperado=19;}
    break;

  case 85:

    {
            Variable *vari = new Variable((yyvsp[(1) - (6)].string), yylineno, correlativo++);
            ExpresionBinariaExponenciacion *exponenciacion= new ExpresionBinariaExponenciacion(vari, (yyvsp[(6) - (6)].expresion), yylineno);

            Variable *var = new Variable((yyvsp[(1) - (6)].string), exponenciacion, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, exponenciacion->validarSemantica(), correlativo));
            (yyval.instruccion) = new InstruccionAsignacion(var, exponenciacion, 0, correlativo++);
        }
    break;

  case 86:

    {token_esperado=43;}
    break;

  case 87:

    {token_esperado=55;}
    break;

  case 88:

    {token_esperado=38;}
    break;

  case 89:

    {token_esperado=33;}
    break;

  case 90:

    {token_esperado=44;}
    break;

  case 91:

    {
            /* inicio , final , instrucciones , siguiente*/
            (yyval.instruccion) = new InstruccionRepitaDesde((yyvsp[(4) - (14)].expresion), (yyvsp[(7) - (14)].expresion), (yyvsp[(10) - (14)].instruccion), 0, correlativo++);
        }
    break;

  case 92:

    {token_esperado=45;}
    break;

  case 93:

    {token_esperado=46;}
    break;

  case 94:

    {token_esperado=38;}
    break;

  case 95:

    {token_esperado=33;}
    break;

  case 96:

    {token_esperado=42;}
    break;

  case 97:

    {token_esperado=45;}
    break;

  case 98:

    {
            /* variable, coleccion, instrucciones, siguientes */
            (yyval.instruccion) = new InstruccionParaCada((yyvsp[(4) - (16)].expresion), (yyvsp[(7) - (16)].expresion), (yyvsp[(10) - (16)].instruccion), 0, correlativo++);
        }
    break;

  case 99:

    {token_esperado=16;}
    break;

  case 100:

    {token_esperado=17;}
    break;

  case 101:

    {
            (yyval.instruccion) = new InstruccionLlamadaAFuncion((yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].lista), 0, correlativo++);
        }
    break;

  case 102:

    {
            (yyval.instruccion) = new InstruccionRetornar((yyvsp[(2) - (2)].expresion), 0, correlativo++);
        }
    break;

  case 103:

    {
            (yyval.expresion) = new ExpresionBinariaMenor((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 104:

    {
            (yyval.expresion) = new ExpresionBinariaMayor((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 105:

    {
            (yyval.expresion) = new ExpresionBinariaMayorIgual((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 106:

    {
            (yyval.expresion) = new ExpresionBinariaMenorIgual((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 107:

    {
            (yyval.expresion) = new ExpresionBinariaIgualdad((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 108:

    {
            (yyval.expresion) = new ExpresionBinariaDistinto((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 109:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 110:

    {
            (yyval.expresion) = new ExpresionBinariaSuma((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 111:

    {
            (yyval.expresion) = new ExpresionBinariaResta((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 112:

    {
            (yyval.expresion) = new ExpresionBinariaO((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 113:

    {
            (yyval.expresion) = new ExpresionBinariaO((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 114:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 115:

    {
            (yyval.expresion) = new ExpresionBinariaMultiplicacion((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 116:

    {
            (yyval.expresion) = new ExpresionBinariaDivision((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 117:

    {
            (yyval.expresion) = new ExpresionBinariaY((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 118:

    {
            (yyval.expresion) = new ExpresionBinariaY((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 119:

    {
            (yyval.expresion) = new ExpresionBinariaModulo((yyvsp[(1) - (3)].expresion), (yyvsp[(3) - (3)].expresion), yylineno);
        }
    break;

  case 120:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 121:

    {
            (yyval.expresion) = (yyvsp[(2) - (3)].expresion);
        }
    break;

  case 122:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 123:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 124:

    {
            (yyval.expresion) = new Variable((yyvsp[(1) - (1)].string), yylineno, correlativo++);
        }
    break;

  case 125:

    {

        }
    break;

  case 126:

    { (yyval.string)=(yyvsp[(1) - (1)].string); }
    break;

  case 127:

    { (yyval.string)=(yyvsp[(1) - (1)].string); }
    break;

  case 128:

    { (yyval.string)=(yyvsp[(1) - (1)].string); }
    break;

  case 129:

    { (yyval.string)=(yyvsp[(1) - (1)].string); }
    break;

  case 130:

    { (yyval.string)=(yyvsp[(1) - (1)].string); }
    break;

  case 131:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 132:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 133:

    {token_esperado=16;}
    break;

  case 134:

    {token_esperado=17;}
    break;

  case 135:

    {
            (yyval.expresion) = new VariableFuncion((yyvsp[(1) - (6)].string), (yyvsp[(4) - (6)].lista), yylineno, correlativo++);
        }
    break;

  case 136:

    {
            (yyval.expresion) = new VariableArreglo((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].lista), yylineno, correlativo++,0);
        }
    break;

  case 137:

    {
            (yyval.expresion) = new ExpresionLiteralBooleana(true, yylineno);
        }
    break;

  case 138:

    {
            (yyval.expresion) = new ExpresionLiteralBooleana(false, yylineno);
        }
    break;

  case 139:

    {
            (yyval.expresion) = (yyvsp[(1) - (1)].expresion);
        }
    break;

  case 140:

    {
            (yyval.expresion) = new ExpresionLiteralEntera( atoi( (yyvsp[(1) - (1)].string)->c_str() ), yylineno);
       }
    break;

  case 141:

    {
            (yyval.expresion) = new ExpresionLiteralCaracter( (yyvsp[(1) - (1)].string)->at(1), yylineno);
       }
    break;

  case 142:

    {
            (yyval.expresion) = new ExpresionLiteralFlotante( atof( (yyvsp[(1) - (1)].string)->c_str() ), yylineno);
       }
    break;

  case 143:

    {
            (yyval.expresion) = new ExpresionLiteralCadena((yyvsp[(1) - (1)].string), yylineno);
       }
    break;

  case 144:

    {
            (yyvsp[(4) - (4)].lista)->lista->push_back((yyvsp[(2) - (4)].expresion));
            (yyval.lista) = (yyvsp[(4) - (4)].lista);
        }
    break;

  case 145:

    {
            Lista *_lista = new Lista();
            _lista->lista->push_back((yyvsp[(2) - (3)].expresion));
            (yyval.lista) = _lista;
        }
    break;

  case 146:

    {
        }
    break;

  case 147:

    {token_esperado=14;}
    break;

  case 148:

    {token_esperado=15;}
    break;

  case 149:

    {

        }
    break;

  case 150:

    {
            (yyvsp[(2) - (2)].lista)->lista->push_back((yyvsp[(1) - (2)].expresion));
            (yyval.lista) = (yyvsp[(2) - (2)].lista);
        }
    break;

  case 151:

    {
            (yyval.lista) = new Lista();
        }
    break;

  case 152:

    {
            (yyvsp[(3) - (3)].lista)->lista->push_back((yyvsp[(2) - (3)].expresion));
            (yyval.lista) = (yyvsp[(3) - (3)].lista);
        }
    break;

  case 153:

    {
            (yyval.lista) = new Lista();
        }
    break;

  case 154:

    {
            (yyvsp[(5) - (5)].lista_de_caso)->establecerSiguiente(new ListaDeCaso((yyvsp[(2) - (5)].expresion), (yyvsp[(4) - (5)].instruccion), 0) );
            (yyval.lista_de_caso) = (yyvsp[(5) - (5)].lista_de_caso);
         }
    break;

  case 155:

    {
            /*Parametros, Expresion, Instruccion, Siguiente*/
            (yyval.lista_de_caso) = new ListaDeCaso((yyvsp[(2) - (4)].expresion), (yyvsp[(4) - (4)].instruccion), 0);
        }
    break;

  case 156:

    {
            (yyval.instruccion) = (yyvsp[(2) - (2)].instruccion);
        }
    break;

  case 157:

    {
            (yyval.instruccion) = 0;
        }
    break;



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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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




