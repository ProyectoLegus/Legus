#include "InstruccionSi.h"

InstruccionSi::InstruccionSi(Expresion *condicion, Instruccion *instruccionesSiVerdadero, Instruccion *instruccionesSiFalso, Instruccion *instruccionSiAnidado, Instruccion *siguiente)
    :Instruccion(siguiente,SI)
{
    this->condicion = condicion;
    this->instruccionesSiVerdadero = instruccionesSiVerdadero;
    this->instruccionesSiFalso = instruccionesSiFalso;
    this->instruccionSiAnidado = instruccionSiAnidado;
}
