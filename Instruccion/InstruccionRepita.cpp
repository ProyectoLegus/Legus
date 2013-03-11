#include "Instruccion/InstruccionRepita.h"

InstruccionRepita::InstruccionRepita(Expresion *condicion, Instruccion *siguiente,
                                     int idDeExpresion, int numeroDeLinea)
    :Instruccion(siguiente, REPITA, idDeExpresion, numeroDeLinea)
{
    this->condicion = condicion;
}

void InstruccionRepita::validarSemantica()
{
    Tipo *tipoCondicion = condicion->validarSemantica();

    if( tipoCondicion->tipo != Booleano )
    {
        throw(ExcepcionLegus("Expresion en instruccion 'repita' debe evaluar a booleano",numeroDeLinea));
    }

}

Expresion* InstruccionRepita::obtenerCondicion()
{
    return this->condicion;
}

string InstruccionRepita::generarCodigoJava()
{
    return "";
}
