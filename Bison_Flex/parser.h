/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* "%code requires" blocks.  */

/* Line 2068 of yacc.c  */
#line 3 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"

    #include <string>
    #include "Expresion/Expresion.h"
    #include "Instruccion/Instruccion.h"
    #include "Bison_Flex/Lista.h"
    #include "Instruccion/ListaDeCaso.h"



/* Line 2068 of yacc.c  */
#line 48 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.h"

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

/* Line 2068 of yacc.c  */
#line 41 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.y"

    std::string              *string;
    Expresion                *expresion;
    Instruccion              *instruccion;
    Expresion                *vectorExpresiones;
    Lista                    *lista;
    ListaDeCaso              *lista_de_caso;



/* Line 2068 of yacc.c  */
#line 147 "D:\\DropBox\\ProyectoCodigo\\Legus\\Bison_Flex\\parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;

