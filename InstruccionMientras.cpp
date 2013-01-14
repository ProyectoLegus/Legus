#include "InstruccionMientras.h"

InstruccionMientras::InstruccionMientras(Expresion *condicion, Instruccion *instrucciones, Instruccion *siguiente)
    :Instruccion(siguiente, MIENTRAS)
{
    this->condicion = condicion;
    this->instrucciones = instrucciones;
}

void InstruccionMientras::validarSemantica()
{
    Tipo *tipoExpresion = condicion->validarSemantica();

    if( tipoExpresion != Programa::obtenerInstancia()->obtenerTipoBooleano() )
    {
        // ERROR
    }

    instrucciones->validarSemantica();
}
