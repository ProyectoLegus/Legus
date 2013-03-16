%locations
%error-verbose
%code requires{
    #include <string>
    #include "Expresion/Expresion.h"
    #include "Instruccion/Instruccion.h"
    #include "Bison_Flex/Lista.h"
    #include "Instruccion/ListaDeCaso.h"
}
%{
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
%token <string> T_ENTER T_EOF T_ES


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
                        instruccion_retornar sino_caso programa instruccion_auto_asignacion

%type <expresion>       id_variable id_funcion id_arreglo
%type <lista>           lista_indices lista_indices_declaracion
%type <lista>           lista_parametros acumulador_parametros
%type <lista_de_caso>   lista_casos
%type <expresion>       literales literal_booleana relacionales expresiones factores terminales
                        unarios


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
        T_FUNCION                   {token_esperado=57;}
        T_IDENTIFICADOR             {token_esperado=16;}
        T_PARENTESIS_IZQUIERDO
        lista_parametros            {token_esperado=17;}
        T_PARENTESIS_DERECHO
        instrucciones               {token_esperado=33;}
        T_FIN                       {token_esperado=47;}
        T_FUNCION
        declaracion_funciones
        {
            DeclaracionDeFuncion *declrFuncion = new DeclaracionDeFuncion(new Variable($3, yylineno, correlativo++),
                                                                          $6, $9, yylineno);
            Programa::obtenerInstancia()->tablaDeFunciones->push_back(declrFuncion);
        }
        |/*Epsilon*/
        {
            $$=0;
        }
        ;

    declaracion_sensores_motores :
        T_UTILIZAR              {token_esperado=57;}
        T_IDENTIFICADOR         {token_esperado=51;}
        T_COMO                  {token_esperado=57;}
        T_IDENTIFICADOR         {token_esperado=46;}
        T_EN                    {token_esperado=57;}
        T_IDENTIFICADOR
        declaracion_sensores_motores
        {
            DeclaracionUtilizar *declrUtilizar = new DeclaracionUtilizar(new VariablePuerto($3, yylineno, correlativo++),
                                                                         new VariableSensor($7, yylineno, correlativo++),
                                                                         new VariableSensor($11, yylineno, correlativo++),
                                                                         yylineno);
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
        instruccion_si                      {$$ = $1;}
        |instruccion_caso                   {$$ = $1;}
        |instruccion_mientras               {$$ = $1;}
        |instruccion_para                   {$$ = $1;}
        |instruccion_repetir                {$$ = $1;}
        |instruccion_asignacion             {$$ = $1;}
        |instruccion_auto_asignacion        {$$ = $1;}
        |instruccion_repita_desde           {$$ = $1;}
        |instruccion_para_cada              {$$ = $1;}
        |instruccion_llamada_a_funcion      {$$ = $1;}
        |instruccion_retornar               {$$ = $1;}
        |T_REPITA instruccion/*Deberia ir instrucciones ( TO-DO )*/ T_MIENTRAS relacionales T_FIN T_REPITA
        {
        }/*Aqui solia ir instruccion_repita: fue eliminada porque generaba 2 shift/reduce */;

    instruccion_si :
        T_SI
        relacionales
        T_ENTONCES
        instrucciones       {token_esperado=33;}
        T_FIN               {token_esperado=31;}
        T_SI
        {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            $$ = new InstruccionSi($2, $4, 0, 0, 0, correlativo++, yylineno);
        }
        |T_SI
         relacionales
         T_ENTONCES
         instrucciones      {token_esperado=34;}
         T_SINO
         instrucciones      {token_esperado=33;}
         T_FIN              {token_esperado=31;}
         T_SI
        {
            /* Parametros: condicion, instruccionSiVerdadero, instruccionSiFalso,instruccionSiAnidado, Siguiente*/
            $$ = new InstruccionSi($2, $4, $7, 0, 0, correlativo++, yylineno);
        }
        ;

    instruccion_caso:
        T_CASO              {token_esperado=57;}
        T_IDENTIFICADOR
        lista_casos
        sino_caso           {token_esperado=33;}
        T_FIN               {token_esperado=35;}
        T_CASO
        {
            $$ = new InstruccionCaso( new Variable($3, yylineno, correlativo++), $4, $5, 0, correlativo++, yylineno);
        }
        |T_CASO
        lista_casos
        sino_caso           {token_esperado=33;}
        T_FIN               {token_esperado=35;}
        T_CASO
        {
            $$ = new InstruccionCaso(0, $2, $3, 0, correlativo++, yylineno);
        };

    instruccion_mientras:
        T_MIENTRAS
        relacionales        {token_esperado=57;}
        T_EJECUTE
        instrucciones       {token_esperado=33;}
        T_FIN               {token_esperado=36;}
        T_MIENTRAS
        {
            /* Parametros:   condicion, instrucciones, siguiente */
            $$ = new InstruccionMientras($2, $5, 0, correlativo++, yylineno);
        };

    instruccion_para :
        T_PARA                  {token_esperado=57;}
        T_IDENTIFICADOR         {token_esperado=19;}
        T_SIMBOLO_IGUAL
        relacionales            {token_esperado=55;}
        T_HASTA
        relacionales            {token_esperado=38;}
        T_EJECUTE
        instrucciones           {token_esperado=33;}
        T_FIN                   {token_esperado=42;}
        T_PARA
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
            Variable *var = new Variable($3, $6, yylineno, cori);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var,$6->validarSemantica(), cori));
            $$ = new InstruccionPara(new InstruccionAsignacion(var,$6,0, correlativo++, yylineno),
                                                               $9, $12, 0, correlativo++, yylineno);
        };

    instruccion_repetir :
        T_REPETIR
        relacionales            {token_esperado=41;}
        T_VECES
        instrucciones           {token_esperado=33;}
        T_FIN                   {token_esperado=39;}
        T_REPETIR
        {
            /*Cantidad, instrucciones, siguiente*/
            $$ = new InstruccionRepetir($2, $5, 0, correlativo++, yylineno);
        }
        |
        T_REPETIR
        T_INFINITAS             {token_esperado=41;}
        T_VECES
        instrucciones           {token_esperado=33;}
        T_FIN                   {token_esperado=39;}
        T_REPETIR
        {
            /*Cantidad, instrucciones, siguiente*/
            $$ = new InstruccionRepetir(0, $5, 0, correlativo++, yylineno);
        };

    instruccion_asignacion :
        T_IDENTIFICADOR
        T_SIMBOLO_IGUAL
        relacionales
        {
            /*Variable, Expresion, siguiente*/
            /* SI relacionales devuelve una variable arreglo?*/

            Variable *var = new Variable($1, $3, yylineno, correlativo);
            //Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var,$3->validarSemantica(), correlativo));
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var,Programa::obtenerInstancia()->obtenerTipoEntero(), correlativo));
            $$ = new InstruccionAsignacion(var, $3, 0, correlativo++, yylineno);
        }
        |id_arreglo         {token_esperado=19;}
         T_SIMBOLO_IGUAL
         relacionales
        {
            /*Variable, Expresion, siguiente*/
            $$ = new InstruccionAsignacion($1, $4, 0, correlativo++, yylineno);
        }
        |T_IDENTIFICADOR
         T_SIMBOLO_IGUAL
         lista_indices_declaracion
        {
            VariableArreglo* variableArreglo = new VariableArreglo($1, 0, yylineno, correlativo, 0);
            TipoArreglo *tipoArreglo = Programa::obtenerInstancia()->obtenerTipoArreglo();
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(variableArreglo, tipoArreglo, correlativo));
            $$ = new InstruccionAsignacion(variableArreglo, 0, 0, correlativo++, yylineno);
        };

    instruccion_auto_asignacion:
        T_IDENTIFICADOR     {token_esperado=0;}
        T_SUMA              {token_esperado=19;}
        T_SIMBOLO_IGUAL
        relacionales
        {
            Variable *vari = new Variable($1, yylineno, correlativo++);
            ExpresionBinariaSuma *suma = new ExpresionBinariaSuma(vari, $6, yylineno);

            Variable *var = new Variable($1, suma, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, suma->validarSemantica(), correlativo));
            $$ = new InstruccionAsignacion(var, suma, 0, correlativo++, yylineno);
        }
        |
        T_IDENTIFICADOR     {token_esperado=3;}
        T_DIVISION          {token_esperado=19;}
        T_SIMBOLO_IGUAL
        relacionales
        {
            Variable *vari = new Variable($1, yylineno, correlativo++);
            ExpresionBinariaDivision *division = new ExpresionBinariaDivision(vari, $6, yylineno);

            Variable *var = new Variable($1, division, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, division->validarSemantica(), correlativo));
            $$ = new InstruccionAsignacion(var, division, 0, correlativo++, yylineno);
        }
        |T_IDENTIFICADOR    {token_esperado=4;}
         T_SIMBOLO_MODULO   {token_esperado=19;}
         T_SIMBOLO_IGUAL
         relacionales
        {
            Variable *vari = new Variable($1, yylineno, correlativo++);
            ExpresionBinariaModulo *modulo = new ExpresionBinariaModulo(vari, $6, yylineno);

            Variable *var = new Variable($1, modulo, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, modulo->validarSemantica(), correlativo));
            $$ = new InstruccionAsignacion(var, modulo, 0, correlativo++, yylineno);
        }
        |T_IDENTIFICADOR    {token_esperado=2;}
         T_MULTIPLICACION   {token_esperado=19;}
         T_SIMBOLO_IGUAL
         relacionales
        {
            Variable *vari = new Variable($1, yylineno, correlativo++);
            ExpresionBinariaMultiplicacion *multiplicacion= new ExpresionBinariaMultiplicacion(vari, $6, yylineno);

            Variable *var = new Variable($1, multiplicacion, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, multiplicacion->validarSemantica(), correlativo));
            $$ = new InstruccionAsignacion(var, multiplicacion, 0, correlativo++, yylineno);
        }
        |T_IDENTIFICADOR    {token_esperado=1;}
         T_RESTA            {token_esperado=19;}
         T_SIMBOLO_IGUAL
         relacionales
        {
            Variable *vari = new Variable($1, yylineno, correlativo++);
            ExpresionBinariaResta *resta= new ExpresionBinariaResta(vari, $6, yylineno);

            Variable *var = new Variable($1, resta, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, resta->validarSemantica(), correlativo));
            $$ = new InstruccionAsignacion(var, resta, 0, correlativo++, yylineno);
        }
        |T_IDENTIFICADOR    {token_esperado=5;}
         T_EXPONENCIACION   {token_esperado=19;}
         T_SIMBOLO_IGUAL
         relacionales
        {
            Variable *vari = new Variable($1, yylineno, correlativo++);
            ExpresionBinariaExponenciacion *exponenciacion= new ExpresionBinariaExponenciacion(vari, $6, yylineno);

            Variable *var = new Variable($1, exponenciacion, yylineno, correlativo);
            Programa::obtenerInstancia()->tablaDeVariables->push_back(new VariableDeclarada(var, exponenciacion->validarSemantica(), correlativo));
            $$ = new InstruccionAsignacion(var, exponenciacion, 0, correlativo++, yylineno);
        }
        ;


    instruccion_repita_desde :
        T_REPITA            {token_esperado=43;}
        T_DESDE
        relacionales        {token_esperado=55;}
        T_HASTA
        relacionales        {token_esperado=38;}
        T_EJECUTE
        instrucciones       {token_esperado=33;}
        T_FIN               {token_esperado=44;}
        T_REPITA
        {
            /* inicio , final , instrucciones , siguiente*/
            $$ = new InstruccionRepitaDesde($4, $7, $10, 0, correlativo++, yylineno);
        };

    instruccion_para_cada :
        T_PARA              {token_esperado=45;}
        T_CADA
        relacionales        {token_esperado=46;}
        T_EN
        relacionales        {token_esperado=38;}
        T_EJECUTE
        instrucciones       {token_esperado=33;}
        T_FIN               {token_esperado=42;}
        T_PARA              {token_esperado=45;}
        T_CADA
        {
            /* variable, coleccion, instrucciones, siguientes */
            $$ = new InstruccionParaCada($4, $7, $10, 0, correlativo++, yylineno);
        };

    instruccion_llamada_a_funcion :
        T_IDENTIFICADOR             {token_esperado=16;}
        T_PARENTESIS_IZQUIERDO
        lista_parametros            {token_esperado=17;}
        T_PARENTESIS_DERECHO
        {
            $$ = new InstruccionLlamadaAFuncion($1, $4, 0, correlativo++, yylineno);
        };

    instruccion_retornar :
        T_RETORNAR
        relacionales
        {
            $$ = new InstruccionRetornar($2, 0, correlativo++, yylineno);
        }
        ;
    /******************** Expresiones  ********************/

    relacionales:
        T_RESTA expresiones
        {
            $$ = new ExpresionUnariaNegativo($2, yylineno);
        }
        |T_NO T_PARENTESIS_IZQUIERDO unarios T_PARENTESIS_DERECHO
        {
            $$ = new ExpresionUnariaNegacion($3, yylineno);
        }
        |unarios
        {
            $$ = $1;
        }
        ;

    unarios :
        relacionales
        T_MENOR
        expresiones
        {
            $$ = new ExpresionBinariaMenor($1, $3, yylineno);
        }
        |relacionales
         T_MAYOR
         expresiones
        {
            $$ = new ExpresionBinariaMayor($1, $3, yylineno);
        }
        |relacionales
         T_MAYOR_IGUAL
         expresiones
        {
            $$ = new ExpresionBinariaMayorIgual($1, $3, yylineno);
        }
        |relacionales
         T_MENOR_IGUAL
         expresiones
        {
            $$ = new ExpresionBinariaMenorIgual($1, $3, yylineno);
        }
        |relacionales
         T_IGUALDAD
         expresiones
        {
            $$ = new ExpresionBinariaIgualdad($1, $3, yylineno);
        }
        |relacionales
         T_DESIGUALDAD
         expresiones
        {
            $$ = new ExpresionBinariaDistinto($1, $3, yylineno);
        }
        |expresiones
        {
            $$ = $1;
        };

    expresiones :
        expresiones
        T_SUMA
        factores
        {
            $$ = new ExpresionBinariaSuma($1, $3, yylineno);
        }
        |expresiones
         T_RESTA
         factores
        {
            $$ = new ExpresionBinariaResta($1, $3, yylineno);
        }
        |expresiones
         T_OPERADOR_O
         factores
        {
            $$ = new ExpresionBinariaO($1, $3, yylineno);
        }
        |expresiones
         T_SIMBOLO_OPERADOR_O
         factores
        {
            $$ = new ExpresionBinariaO($1, $3, yylineno);
        }
        |factores
        {
            $$ = $1;
        };

    factores :
        factores
        T_MULTIPLICACION
        terminales
        {
            $$ = new ExpresionBinariaMultiplicacion($1, $3, yylineno);
        }
        |factores
         T_DIVISION
         terminales
        {
            $$ = new ExpresionBinariaDivision($1, $3, yylineno);
        }
        |factores
         T_OPERADOR_Y
         terminales
        {
            $$ = new ExpresionBinariaY($1, $3, yylineno);
        }
        |factores
         T_SIMBOLO_OPERADOR_Y
         terminales
        {
            $$ = new ExpresionBinariaY($1, $3, yylineno);
        }
        |factores
         T_SIMBOLO_MODULO
         terminales
        {
            $$ = new ExpresionBinariaModulo($1, $3, yylineno);
        }
        |terminales
        {
            $$ = $1;
        };

    terminales :
        T_PARENTESIS_IZQUIERDO
        relacionales
        T_PARENTESIS_DERECHO
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
            $$ = new Variable($1, yylineno, correlativo++);
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
        T_IDENTIFICADOR             {token_esperado=16;}
        T_PARENTESIS_IZQUIERDO
        lista_parametros            {token_esperado=17;}
        T_PARENTESIS_DERECHO
        {
            $$ = new VariableFuncion($1, $4, yylineno, correlativo++);
        };

    id_arreglo :
        T_IDENTIFICADOR
        lista_indices
        {
            $$ = new VariableArreglo($1, $2, yylineno, correlativo++,0);
        };

    /*Literales*/

    literal_booleana :
        T_VERDADERO
        {
            $$ = new ExpresionLiteralBooleana(true, yylineno);
        }
        |T_FALSO
        {
            $$ = new ExpresionLiteralBooleana(false, yylineno);
        };

    literales:
        literal_booleana
        {
            $$ = $1;
        }
       |T_LITERAL_NUMERICA
       {
            $$ = new ExpresionLiteralEntera( atoi( $1->c_str() ), yylineno);
       }
       |T_LITERAL_CARACTER
       {
            $$ = new ExpresionLiteralCaracter( $1->at(1), yylineno);
       }
       |T_LITERAL_FLOTANTE
       {
            $$ = new ExpresionLiteralFlotante( atof( $1->c_str() ), yylineno);
       }
       |T_LITERAL_CADENA
       {
            $$ = new ExpresionLiteralCadena($1, yylineno);
       };

    lista_indices:
        T_CORCHETE_IZQUIERDO
        relacionales
        T_CORCHETE_DERECHO
        lista_indices
        {
            $4->lista->push_back($2);
            $$ = $4;
        }
        |T_CORCHETE_IZQUIERDO
         relacionales
         T_CORCHETE_DERECHO
        {
            Lista *_lista = new Lista();
            _lista->lista->push_back($2);
            $$ = _lista;
        };

    lista_indices_declaracion :
        T_CORCHETE_IZQUIERDO
        T_CORCHETE_DERECHO
        {
        }
        |T_CORCHETE_IZQUIERDO
         T_CORCHETE_DERECHO         {token_esperado=14;}
         T_CORCHETE_IZQUIERDO       {token_esperado=15;}
         T_CORCHETE_DERECHO
        {

        }
        ;

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
        T_COMA
        relacionales
        acumulador_parametros
        {
            $3->lista->push_back($2);
            $$ = $3;
        }
        |/*Epsilon*/
        {
            $$ = new Lista();
        };

    lista_casos :
         T_DOS_PUNTOS
         relacionales
         T_DOS_PUNTOS
         instrucciones
         lista_casos
         {
            $5->establecerSiguiente(new ListaDeCaso($2, $4, 0) );
            $$ = $5;
         }
        |T_DOS_PUNTOS
         relacionales
         T_DOS_PUNTOS
         instrucciones
        {
            /*Parametros, Expresion, Instruccion, Siguiente*/
            $$ = new ListaDeCaso($2, $4, 0);
        };

    sino_caso :
        T_SINO
        instrucciones
        {
            $$ = $2;
        }
        | /*Epsilon*/
        {
            $$ = 0;
        };
%%
