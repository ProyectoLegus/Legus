#include "InstruccionRepita.h"

InstruccionRepita::InstruccionRepita(Expresion *condicion, Instruccion *siguiente)
    :Instruccion(siguiente, REPITA)
{
    this->condicion = condicion;
}

void InstruccionRepita::validarSemantica()
{
    Tipo *tipoCondicion = condicion->validarSemantica();

    if( tipoCondicion != Programa::obtenerInstancia()->obtenerTipoBooleano())
    {
        // ERROR
    }
}

Expresion* InstruccionRepita::obtenerCondicion()
{
    return this->condicion;
}
