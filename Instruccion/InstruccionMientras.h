#ifndef INSTRUCCIONMIENTRAS_H
#define INSTRUCCIONMIENTRAS_H

#include <sstream>

#include "Instruccion.h"
#include "Expresion.h"
#include "Programa.h"

class InstruccionMientras : public Instruccion
{
public:
    InstruccionMientras(Expresion *condicion, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *condicion;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONMIENTRAS_H
