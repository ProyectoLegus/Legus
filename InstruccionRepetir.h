#ifndef INSTRUCCIONREPETIR_H
#define INSTRUCCIONREPETIR_H

#include "Instruccion.h"
#include "Expresion.h"

class InstruccionRepetir : public Instruccion
{
public:
    InstruccionRepetir(Expresion *cantidad, Instruccion *instrucciones, Instruccion *siguiente);
    virtual void validarSemantica();

private:
    Expresion *cantidad;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONREPETIR_H
