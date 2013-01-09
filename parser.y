%locations
%error-verbose
%code requires{
    #include <string>
    #include "Expresion.h"
    #include "Instruccion.h"
    #include "Lista.h"
    #include "ListaDeCaso.h"
}
%{
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
%}

%union{
    std::string              *string;
    Expresion                *expresion;
    Instruccion              *instruccion;
    Expresion                *vectorExpresiones;
    Lista                    *lista;
    ListaDeCaso              *lista_de_caso;
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
%token <string> T_DESIGUALDAD T_LITERAL_CARACTER T_LITERAL_FLOTANTE T_LITERAL_CADENA T_COMA

/* PALABRAS RESERVADAS */
%token <string> T_MODULO T_DIVISION_ENTERA T_IGUAL T_A T_DISTINTO T_DE T_OPERADOR_Y T_OPERADOR_O
%token <string> T_NO T_SI T_ENTONCES T_FIN T_SINO T_CASO T_MIENTRAS T_HAGA T_EJECUTE T_REPETIR
%token <string> T_INFINITAS T_VECES T_PARA T_DESDE T_REPITA T_CADA T_EN T_FUNCION T_HASTA
%token <string> T_RETORNA T_RETORNAR T_UTILIZAR T_COMO T_LITERAL_NUMERICA T_DEFINIR T_VERDADERO T_FALSO

/* NO TERMINALES */
%type <string>          declaracion_sensores_motores declaracion_funciones
%type <instruccion>     instrucciones instruccion instruccion_si instruccion_caso instruccion_mientras
                        instruccion_para instruccion_repetir instruccion_asignacion
                        instruccion_repita_desde instruccion_para_cada instruccion_llamada_a_funcion
                        instruccion_retornar sino_caso programa

%type <expresion>       id_variable id_funcion id_arreglo
%type <lista>           lista_indices lista_parametros acumulador_parametros
%type <lista_de_caso>   lista_casos
%type <expresion>       literales literal_booleana relacionales expresiones factores terminales

/* PUNTO DE ENTRADA */
%start programa

%%
    /* DEFINICIONES GRAMATICALES */

    programa :
        declaracion_sensores_motores declaracion_funciones instrucciones
        {
            $$ = $3;
            Programa::obtenerInstancia()->instrucciones = $3;
        }
        ;

    /******************** Declaraciones *******************/

    declaracion_funciones :
        T_FUNCION T_IDENTIFICADOR T_PARENTESIS_IZQUIERDO lista_parametros T_PARENTESIS_DERECHO instrucciones T_FIN T_FUNCION declaracion_funciones
        {
            DeclaracionDeFuncion *declrFuncion = new DeclaracionDeFuncion(new Variable($2), $4, $6);
            Programa::obtenerInstancia()->tablaDeFunciones->push_back(declrFuncion);
        }
        |/*Epsilon*/
        {
            $$=0;
        }
        ;

    declaracion_sensores_motores :
        T_UTILIZAR T_IDENTIFICADOR T_COMO T_IDENTIFICADOR T_EN T_IDENTIFICADOR declaracion_sensores_motores
        {
            DeclaracionUtilizar *declrUtilizar = new DeclaracionUtilizar(new VariablePuerto($2), new VariableSensor($4), new Variable($6));
            Programa::obtenerInstancia()->tablaDePuertosYSensores->push_back(declrUtilizar);
        }
        |/*Epsilon*/
        {
            $$=0;
        }
        ;

    /******************** Instrucciones *******************/

    instrucciones :
        instruccion instrucciones
        {
            $1->establecerSiguiente($2);
            $$ = $1;
        }
        |/*Epsilon*/
        {
            $$ = 0;
        }
        ;

    instruccion :
        instruccion_si
        {
            $$ = $1;
        }
        |instruccion_caso
        {
            $$ = $1;
        }
        |instruccion_mientras
        {
            $$ = $1;
        }
        |instruccion_para
        {
            $$ = $1;
        }
        |instruccion_repetir
        {
            $$ = $1;
        }
        |instruccion_asignacion
        {
            $$ = $1;
        }
        |instruccion_repita_desde
        {
            $$ = $1;
        }
        |instruccion_para_cada
        {
            $$ = $1;
        }
        |instruccion_llamada_a_funcion
        {
            $$ = $1;
        }
        |instruccion_retornar
        {
            $$ = $1;
        }
        |T_REPITA instruccion/*Deberia ir instrucciones ( TO-DO )*/ T_MIENTRAS relacionales T_FIN T_REPITA
        {
        }/*Aqui solia ir instruccion_repita: fue eliminada porque generaba 2 shift/reduce */;

    instruccion_si :
        T_SI relacionales T_ENTONCES instrucciones T_FIN T_SI
        {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            $$ = new InstruccionSi($2, $4, 0, 0, 0);
        }
        |T_SI relacionales T_ENTONCES instrucciones T_SINO instrucciones T_FIN T_SI
        {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            $$ = new InstruccionSi($2, $4, $6, 0, 0);
        }
/*      |T_SI relacionales T_ENTONCES instrucciones T_SINO instruccion_si
        {
            $$ = new InstruccionSi($2, $4, 0, $6, 0);
        }
*/
        ;

    instruccion_caso:
        T_CASO T_IDENTIFICADOR lista_casos sino_caso T_FIN T_CASO
        {
            $$ = new InstruccionCaso( new Variable($2), $3, $4, 0);
        }
        |T_CASO lista_casos sino_caso T_FIN T_CASO
        {
            $$ = new InstruccionCaso(0, $2, $3, 0);
        };

    instruccion_mientras:
        T_MIENTRAS relacionales T_EJECUTE instrucciones T_FIN T_MIENTRAS
        {
            /* Parametros:   condicion, instrucciones, siguiente */
            $$ = new InstruccionMientras($2, $4, 0);
        };

    instruccion_para :
        T_PARA T_IDENTIFICADOR T_SIMBOLO_IGUAL relacionales T_HASTA relacionales T_EJECUTE instrucciones T_FIN T_PARA
        {
            /*identificador, inicio, final, instrucciones, siguiente*/
            $$ = new InstruccionPara($2, $4, $6, $8, 0);
        };

    instruccion_repetir :
        T_REPETIR relacionales T_VECES instrucciones T_FIN T_REPETIR
        {
            /*Cantidad, instrucciones, siguiente*/
            $$ = new InstruccionRepetir($2, $4, 0);
        };

    instruccion_asignacion :
        T_IDENTIFICADOR T_SIMBOLO_IGUAL relacionales
        {
            /*Variable, Expresion, siguiente*/
            $$ = new InstruccionAsignacion( new Variable($1), $3, 0 );
        }
        |id_arreglo T_SIMBOLO_IGUAL relacionales
        {
            /*Variable, Expresion, siguiente*/
            $$ = new InstruccionAsignacion($1, $3, 0);
        };

    instruccion_repita_desde :
        T_REPITA T_DESDE relacionales T_HASTA relacionales T_EJECUTE instrucciones T_FIN T_REPITA
        {
            /* inicio , final , instrucciones , siguiente*/
            $$ = new InstruccionRepitaDesde($3, $5, $7, 0);
        };

    instruccion_para_cada :
        T_PARA T_CADA relacionales T_EN relacionales T_EJECUTE instrucciones T_FIN T_PARA T_CADA
        {
            /* variable, coleccion, instrucciones, siguientes */
            $$ = new InstruccionParaCada($3, $5, $7, 0);
        };

    instruccion_llamada_a_funcion :
        T_IDENTIFICADOR T_PARENTESIS_IZQUIERDO lista_parametros T_PARENTESIS_DERECHO
        {
            $$ = new InstruccionLlamadaAFuncion($1, $3, 0);
        };

    instruccion_retornar :
        T_RETORNAR relacionales
        {
            $$ = new InstruccionRetornar($2, 0);
        }
        ;
    /******************** Expresiones  ********************/

    relacionales :
        relacionales T_MENOR         expresiones
        {
            $$ = new ExpresionBinariaMenor($1, $3);
        }
        |relacionales T_MAYOR         expresiones
        {
            $$ = new ExpresionBinariaMayor($1, $3);
        }
        |relacionales T_MAYOR_IGUAL   expresiones
        {
            $$ = new ExpresionBinariaMayorIgual($1, $3);
        }
        |relacionales T_MENOR_IGUAL   expresiones
        {
            $$ = new ExpresionBinariaMenorIgual($1, $3);
        }
        |relacionales T_IGUALDAD      expresiones
        {
            $$ = new ExpresionBinariaIgualdad($1, $3);
        }
        |relacionales T_DESIGUALDAD   expresiones
        {
            $$ = new ExpresionBinariaDistinto($1, $3);
        }
        |expresiones
        {
            $$ = $1;
        };

    expresiones :
        expresiones T_SUMA                factores
        {
            $$ = new ExpresionBinariaSuma($1, $3);
        }
        |expresiones T_RESTA               factores
        {
            $$ = new ExpresionBinariaResta($1, $3);
        }
        |expresiones T_OPERADOR_O          factores
        {
            $$ = new ExpresionBinariaO($1, $3);
        }
        |expresiones T_SIMBOLO_OPERADOR_O  factores
        {
            $$ = new ExpresionBinariaO($1, $3);
        }
        |factores
        {
            $$ = $1;
        };

    factores :
        factores T_MULTIPLICACION         terminales
        {
            $$ = new ExpresionBinariaMultiplicacion($1, $3);
        }
        |factores T_DIVISION               terminales
        {
            $$ = new ExpresionBinariaDivision($1, $3);
        }
        |factores T_OPERADOR_Y             terminales
        {
            $$ = new ExpresionBinariaY($1, $3);
        }
        |factores T_SIMBOLO_OPERADOR_Y     terminales
        {
            $$ = new ExpresionBinariaY($1, $3);
        }
        |factores T_SIMBOLO_MODULO         terminales
        {
            $$ = new ExpresionBinariaModulo($1, $3);
        }
        |terminales
        {
            $$ = $1;
        };

    terminales :
        T_PARENTESIS_IZQUIERDO relacionales  T_PARENTESIS_DERECHO
        {
            $$ = $2;
        }
        |literales
        {
            $$ = $1;
        }
        |id_variable
        {
            $$ = $1;
        }
        |T_IDENTIFICADOR
        {
            $$ = new Variable($1);
        };

    id_variable :
        id_funcion
        {
            $$ = $1;
        }
        |id_arreglo
        {
            $$ = $1;
        };

    id_funcion:
        T_IDENTIFICADOR T_PARENTESIS_IZQUIERDO lista_parametros T_PARENTESIS_DERECHO
        {
            $$ = new VariableFuncion($1, $3);
        };

    id_arreglo :
        T_IDENTIFICADOR lista_indices
        {
            $$ = new VariableArreglo($1, $2);
        };

    /*Literales*/

    literal_booleana :
        T_VERDADERO
        {
            $$ = new ExpresionLiteralBooleana(true);
        }
        |T_FALSO
        {
            $$ = new ExpresionLiteralBooleana(false);
        };

    literales:
        literal_booleana
        {
            $$ = $1;
        }
       |T_LITERAL_NUMERICA
       {
            $$ = new ExpresionLiteralEntera( atoi( $1->c_str() ));
       }
       |T_LITERAL_CARACTER
       {
            $$ = new ExpresionLiteralCaracter( (char)$1->c_str()[0]);
       }
       |T_LITERAL_FLOTANTE
       {
            $$ = new ExpresionLiteralFlotante( atof( $1->c_str() ));
       }
       |T_LITERAL_CADENA
       {
            $$ = new ExpresionLiteralCadena($1);
       };

    lista_indices:
        T_CORCHETE_IZQUIERDO relacionales T_CORCHETE_DERECHO lista_indices
        {
            $4->lista->push_back($2);
            $$ = $4;
        }
        |T_CORCHETE_IZQUIERDO relacionales T_CORCHETE_DERECHO
        {
            Lista *lista = new Lista();
            lista->lista->push_back($2);
            $$ = lista;
        };

    lista_parametros :
        relacionales acumulador_parametros
        {
            $2->lista->push_back($1);
            $$ = $2;
        }
        |/*Epsilon*/
        {
            $$ = new Lista();
        };

    acumulador_parametros :
        T_COMA  relacionales    acumulador_parametros
        {
            $3->lista->push_back($2);
            $$ = $3;
        }
        |/*Epsilon*/
        {
            $$ = new Lista();
        };

    lista_casos :
         T_DOS_PUNTOS relacionales T_DOS_PUNTOS instrucciones lista_casos
         {
            $5->establecerSiguiente(new ListaDeCaso($2, $4, 0) );
            $$ = $5;
         }
        |T_DOS_PUNTOS relacionales T_DOS_PUNTOS instrucciones
        {
            /*Parametros, Expresion, Instruccion, Siguiente*/
            $$ = new ListaDeCaso($2, $4, 0);
        };

    sino_caso :
        T_SINO instrucciones
        {
            $$ = $2;
        }
        | /*Epsilon*/
        {
            $$ = 0;
        };
%%
