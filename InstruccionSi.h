#ifndef INSTRUCCIONSI_H
#define INSTRUCCIONSI_H

#include "Instruccion.h"
#include "Expresion.h"

class InstruccionSi : public Instruccion
{
public:
    InstruccionSi(Expresion *condicion, Instruccion *instruccionesSiVerdadero, Instruccion *instruccionesSiFalso, Instruccion *instruccionSiAnidado, Instruccion *siguiente);

private:
    Expresion *condicion;
    Instruccion *instruccionesSiVerdadero;
    Instruccion *instruccionesSiFalso;
    Instruccion *instruccionSiAnidado;
};

#endif // INSTRUCCIONSI_H
