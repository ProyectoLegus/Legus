#include "InstruccionRepita.h"

InstruccionRepita::InstruccionRepita(Instruccion *siguiente)
    :Instruccion(siguiente, REPITA)
{
}

void InstruccionRepita::validarSemantica()
{
    Tipo *tipoCondicion = condicion->validarSemantica();

    if( tipoCondicion != Booleano)
    {
        // ERROR
    }
}

Expresion* InstruccionRepita::obtenerCondicion()
{
    return this->condicion;
}
