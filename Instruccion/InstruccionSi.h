#ifndef INSTRUCCIONSI_H
#define INSTRUCCIONSI_H

#include "Instruccion.h"
#include "Expresion.h"
#include "Programa.h"
#include <sstream>

class InstruccionSi : public Instruccion
{
public:
    InstruccionSi(Expresion *condicion, Instruccion *instruccionesSiVerdadero, Instruccion *instruccionesSiFalso, Instruccion *instruccionSiAnidado, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion   *condicion;
    Instruccion *instruccionesSiVerdadero;
    Instruccion *instruccionesSiFalso;
    Instruccion *instruccionSiAnidado;
};

#endif // INSTRUCCIONSI_H
