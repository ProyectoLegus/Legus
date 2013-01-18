#include "Instruccion/InstruccionParaCada.h"

InstruccionParaCada::InstruccionParaCada(Expresion *variable, Expresion *coleccion_arreglo, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, PARACADA, idDeExpresion)
{
    this->variable = variable;
    this->coleccion_arreglo = coleccion_arreglo;
    this->instrucciones = instrucciones;
}

void InstruccionParaCada::validarSemantica()
{
    /*Desarrollo de arreglos*/
}

string InstruccionParaCada::generarCodigoJava()
{
    return "";
}
