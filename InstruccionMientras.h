#ifndef INSTRUCCIONMIENTRAS_H
#define INSTRUCCIONMIENTRAS_H

#include "Instruccion.h"
#include "Expresion.h"
#include "Programa.h"

class InstruccionMientras : public Instruccion
{
public:
    InstruccionMientras(Expresion *condicion, Instruccion *instrucciones, Instruccion *siguiente);
    virtual void validarSemantica();

private:
    Expresion *condicion;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONMIENTRAS_H
