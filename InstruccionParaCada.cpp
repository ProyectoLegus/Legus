#include "InstruccionParaCada.h"

InstruccionParaCada::InstruccionParaCada(Expresion *variable, Expresion *coleccion_arreglo, Instruccion *instrucciones, Instruccion *siguiente)
    :Instruccion(siguiente, PARACADA)
{
    this->variable = variable;
    this->coleccion_arreglo = coleccion_arreglo;
    this->instrucciones = instrucciones;
}
