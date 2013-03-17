%option yylineno
%x MULTI_COMMENT
%{
    #include "parser.h"
    #include <string>
    #include <iostream>

    #define GUARDAR_TOKEN( T ) yylval.string = new std::string(yytext,yyleng); \
                               return T

    extern "C" int yywrap(){}
%}

/*FALTA: Comentario de 1 linea*/
TDL [ |\n|\r\n|\r|\t|\f]

ID                  [A-Za-z_][A-Za-z_0-9]*
NUMERO              [0-9][0-9]*
NUMERO_FLOTANTE     [0-9]+(\.[0-9]+)?
CADENA              \"(\\.|[^\\"])*\"
CARACTER            "'"."'"

%%
<INITIAL>
{
    "/*"                {BEGIN(MULTI_COMMENT);}

    "="                 { GUARDAR_TOKEN(T_SIMBOLO_IGUAL); }
    "+"                 { GUARDAR_TOKEN(T_SUMA);}
    "-"                 { GUARDAR_TOKEN(T_RESTA);}
    "*"                 { GUARDAR_TOKEN(T_MULTIPLICACION);}
    "/"                 { GUARDAR_TOKEN(T_DIVISION);}
    "%"                 { GUARDAR_TOKEN(T_SIMBOLO_MODULO);}
    "^"                 { GUARDAR_TOKEN(T_EXPONENCIACION);}
    ">="                { GUARDAR_TOKEN(T_MAYOR_IGUAL);}
    "<="                { GUARDAR_TOKEN(T_MENOR_IGUAL);}
    "<"                 { GUARDAR_TOKEN(T_MENOR);}
    ">"                 { GUARDAR_TOKEN(T_MAYOR);}
    "=="                { GUARDAR_TOKEN(T_IGUALDAD);}
    "!"                 { GUARDAR_TOKEN(T_NEGACION);}
    "!="                { GUARDAR_TOKEN(T_DESIGUALDAD);}
    "&&"                { GUARDAR_TOKEN(T_SIMBOLO_OPERADOR_Y);}
    "||"                { GUARDAR_TOKEN(T_SIMBOLO_OPERADOR_O);}
    "["                 { GUARDAR_TOKEN(T_CORCHETE_IZQUIERDO);}
    "]"                 { GUARDAR_TOKEN(T_CORCHETE_DERECHO);}
    "("                 { GUARDAR_TOKEN(T_PARENTESIS_IZQUIERDO);}
    ")"                 { GUARDAR_TOKEN(T_PARENTESIS_DERECHO);}
    ":"                 { GUARDAR_TOKEN(T_DOS_PUNTOS);}
    ","                 { GUARDAR_TOKEN(T_COMA);}

    "mod"               { GUARDAR_TOKEN(T_MODULO);}
    "div"               { GUARDAR_TOKEN(T_DIVISION_ENTERA);}
    "igual"             { GUARDAR_TOKEN(T_IGUAL);}
    "a"                 { GUARDAR_TOKEN(T_A);}
    "distinto"          { GUARDAR_TOKEN(T_DISTINTO);}
    "de"                { GUARDAR_TOKEN(T_DE);}
    "y"                 { GUARDAR_TOKEN(T_OPERADOR_Y);}
    "o"                 { GUARDAR_TOKEN(T_OPERADOR_O);}
    "no"                { GUARDAR_TOKEN(T_NO);}
    "si"                { GUARDAR_TOKEN(T_SI);}
    "entonces"          { GUARDAR_TOKEN(T_ENTONCES);}
    "fin"               { GUARDAR_TOKEN(T_FIN);}
    "sino"              { GUARDAR_TOKEN(T_SINO);}
    "caso"              { GUARDAR_TOKEN(T_CASO);}
    "mientras"          { GUARDAR_TOKEN(T_MIENTRAS);}
    "haga"              { GUARDAR_TOKEN(T_HAGA);}
    "ejecute"           { GUARDAR_TOKEN(T_EJECUTE);}
    "repetir"           { GUARDAR_TOKEN(T_REPETIR);}
    "infinitamente"         { GUARDAR_TOKEN(T_INFINITAS);}
    "veces"             { GUARDAR_TOKEN(T_VECES);}
    "para"              { GUARDAR_TOKEN(T_PARA);}
    "desde"             { GUARDAR_TOKEN(T_DESDE);}
    "repita"            { GUARDAR_TOKEN(T_REPITA);}
    "cada"              { GUARDAR_TOKEN(T_CADA);}
    "en"                { GUARDAR_TOKEN(T_EN);}
    "funcion"           { GUARDAR_TOKEN(T_FUNCION);}
    "retorna"           { GUARDAR_TOKEN(T_RETORNA);}
    "retornar"          { GUARDAR_TOKEN(T_RETORNAR);}
    "utilizar"          { GUARDAR_TOKEN(T_UTILIZAR);}
    "como"              { GUARDAR_TOKEN(T_COMO);}
    "definir"           { GUARDAR_TOKEN(T_DEFINIR);}
    "verdadero"         { GUARDAR_TOKEN(T_VERDADERO);}
    "falso"             { GUARDAR_TOKEN(T_FALSO);}
    "hasta"             { GUARDAR_TOKEN(T_HASTA);}
    "es"                { GUARDAR_TOKEN(T_ES);}

    {ID}                { GUARDAR_TOKEN(T_IDENTIFICADOR);}
    {NUMERO}            { GUARDAR_TOKEN(T_LITERAL_NUMERICA);}
    {NUMERO_FLOTANTE}   { GUARDAR_TOKEN(T_LITERAL_FLOTANTE);}
    {CARACTER}          { GUARDAR_TOKEN(T_LITERAL_CARACTER);}
    {CADENA}            {GUARDAR_TOKEN(T_LITERAL_CADENA);}
    {TDL}               {;}
    .                   {
                            yyterminate();
                        }
}

<MULTI_COMMENT>{
    "*/"      {BEGIN(INITIAL);}
    [^*\n]+   {}
    "*"       {}
    \n        {};
}
%%
