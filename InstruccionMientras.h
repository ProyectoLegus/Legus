#ifndef INSTRUCCIONMIENTRAS_H
#define INSTRUCCIONMIENTRAS_H

#include "Instruccion.h"
#include "Expresion.h"

class InstruccionMientras : public Instruccion
{
public:
    InstruccionMientras(Expresion *condicion, Instruccion *instrucciones, Instruccion *siguiente);

private:
    Expresion *condicion;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONMIENTRAS_H
