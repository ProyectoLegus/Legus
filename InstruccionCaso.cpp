#include "InstruccionCaso.h"

InstruccionCaso::InstruccionCaso(Expresion *expresion, ListaDeCaso *listaDeCaso, Instruccion *instrucciones_sino, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, CASO, idDeExpresion)
{
    this->expresion = expresion;
    this->listaDeCaso = listaDeCaso;
    this->instrucciones_sino = instrucciones_sino;
}

void InstruccionCaso::validarSemantica()
{
    /*
        *Si no viene variable todo en el caso debe evaluar a booleano
        *Si viene variable todo debe evaluar al tipo de variable
    */

}

string InstruccionCaso::generarCodigoJava()
{
    return "";
}
