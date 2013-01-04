%locations
%error-verbose
%code requires{
    #include <string>
}
%{
    #include <QMessageBox>
    #include <QString>
    #include <iostream>
    #include <vector>
    #include <stdio.h>
    #include "tokens.h"

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
        QMessageBox::about(0,"","Error Sintactico: " + QString(s);
    }
%}

%union{
    std::string *string;
}

/* TERMINALES */

/* EXPRESIONES REGULARES */
%token <string> T_IDENTIFICADOR

/* SIMBOLOS */
/*IDE Agregar cadena */
%token <string> T_SIMBOLO_IGUAL T_SUMA T_RESTA T_MULTIPLICACION T_DIVISION T_SIMBOLO_MODULO
%token <string> T_EXPONENCIACION T_MAYOR_IGUAL T_MENOR_IGUAL T_MENOR T_MAYOR T_IGUALDAD
%token <string> T_NEGACION T_SIMBOLO_OPERADOR_Y T_SIMBOLO_OPERADOR_O T_CORCHETE_IZQUIERDO
%token <string> T_CORCHETE_DERECHO T_PARENTESIS_IZQUIERDO T_PARENTESIS_DERECHO T_DOS_PUNTOS
%token <string> T_DESIGUALDAD T_LITERAL_CARACTER T_LITERAL_FLOTANTE T_LITERAL_CADENA

/* PALABRAS RESERVADAS */
%token <string> T_MODULO T_DIVISION_ENTERA T_IGUAL T_A T_DISTINTO T_DE T_OPERADOR_Y T_OPERADOR_O
%token <string> T_NO T_SI T_ENTONCES T_FIN T_SINO T_CASO T_MIENTRAS T_HAGA T_EJECUTE T_REPETIR
%token <string> T_INFINITAS T_VECES T_PARA T_DESDE T_REPITA T_CADA T_EN T_FUNCION T_HASTA
%token <string> T_RETORNA T_RETORNAR T_UTILIZAR T_COMO T_LITERAL_NUMERICA T_DEFINIR T_VERDADERO T_FALSO

/* NO TERMINALES */
%type <string> programa declaracion_sensores_motores declaracion_funciones instrucciones
%type <string> instruccion instruccion_si instruccion_caso instruccion_mientras instruccion_para
               instruccion_repetir instruccion_asignacion instruccion_repita_desde instruccion_para_cada
              instruccion_repita

%type <string> literales literal_booleana id_variable
%type <string> relacionales expresiones factores terminales

/* PUNTO DE ENTRADA */
%start programa

%%
    /* DEFINICIONES GRAMATICALES */

    programa :
        declaracion_sensores_motores declaracion_funciones instrucciones
        {

        }
        ;

    /******************** Declaraciones *******************/

    declaracion_funciones :
        {$$=0;}
        |T_FUNCION id_variable T_PARENTESIS_IZQUIERDO /*Lista de Parametros*/ T_PARENTESIS_DERECHO T_FIN T_FUNCION
        {

        }
        ;

    declaracion_sensores_motores :
        {$$=0;}
        |T_UTILIZAR id_variable T_COMO id_variable T_EN id_variable
        {

        }
        ;

    /******************** Instrucciones *******************/

    instrucciones :
        {$$=0;}
        |instruccion instrucciones
        {

        };

    instruccion :
        instruccion_si
        |instruccion_caso
        |instruccion_mientras
        |instruccion_para
        |instruccion_repetir
        |instruccion_asignacion
        |instruccion_repita_desde
        |instruccion_para_cada
        |instruccion_repita
        {

        };

    instruccion_si :
        T_SI relacionales T_ENTONCES instrucciones T_FIN T_SI
        {
            QMessageBox::about(0,"",QString($1->c_str()));
        }
        ;

    instruccion_caso:
        T_CASO T_FIN T_CASO
        {

        };

    instruccion_mientras:
        T_MIENTRAS relacionales T_EJECUTE instrucciones T_FIN T_MIENTRAS
        {

        };

    instruccion_para :
        T_PARA instruccion_asignacion T_HASTA relacionales T_EJECUTE instrucciones T_FIN T_PARA
        {
        };

    instruccion_repetir :
        T_REPETIR relacionales instrucciones T_FIN T_REPETIR
        {
        };

    instruccion_asignacion :
        id_variable T_SIMBOLO_IGUAL relacionales
        {
        };

    instruccion_repita_desde :
        T_REPITA T_DESDE relacionales T_HASTA relacionales T_EJECUTE instrucciones T_FIN T_REPITA
        {
        };

    instruccion_para_cada :
        T_PARA T_CADA relacionales T_EN relacionales T_EJECUTE instrucciones T_FIN T_PARA T_CADA
        {
        };


    instruccion_repita :
        T_REPITA instruccion/*Deberia ir instrucciones ( TO-DO )*/ T_MIENTRAS relacionales T_FIN T_REPITA
        {
        };

    /******************** Expresiones  ********************/

    relacionales :
        relacionales T_MENOR         expresiones
        |relacionales T_MAYOR         expresiones
        |relacionales T_MAYOR_IGUAL   expresiones
        |relacionales T_MENOR_IGUAL   expresiones
        |relacionales T_IGUALDAD      expresiones
        |relacionales T_DESIGUALDAD   expresiones
        |expresiones
        {

        };

    expresiones :
        expresiones T_SUMA                factores
        |expresiones T_RESTA               factores
        |expresiones T_OPERADOR_O          factores
        |expresiones T_SIMBOLO_OPERADOR_O  factores
        |factores
        {

        };

    factores :
        factores T_MULTIPLICACION         terminales
        |factores T_DIVISION               terminales
        |factores T_OPERADOR_Y             terminales
        |factores T_SIMBOLO_OPERADOR_Y     terminales
        |factores T_SIMBOLO_MODULO         terminales
        |terminales
        {

        };

    terminales :
        T_PARENTESIS_IZQUIERDO relacionales  T_PARENTESIS_DERECHO
        |literales { }
        |id_variable
        {

        };

    id_variable :
        T_IDENTIFICADOR
        {

        };

    /*Literales*/

    literal_booleana :
        T_VERDADERO
        |T_FALSO
        {

        };

    literales:
        literal_booleana
       |T_LITERAL_NUMERICA
       |T_LITERAL_CARACTER
       |T_LITERAL_FLOTANTE
       |T_LITERAL_CADENA
       {

       };
%%
