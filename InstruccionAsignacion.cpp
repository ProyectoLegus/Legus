#include "InstruccionAsignacion.h"

InstruccionAsignacion::InstruccionAsignacion(Expresion *variable, Expresion *expresion, Instruccion *siguiente)
    :Instruccion(siguiente, ASIGNACION)
{
    this->variable = variable;
    this->expresion = expresion;
}
