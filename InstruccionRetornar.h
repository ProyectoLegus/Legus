#ifndef INSTRUCCIONRETORNAR_H
#define INSTRUCCIONRETORNAR_H

#include "Instruccion.h"
#include "Expresion.h"

class InstruccionRetornar : public Instruccion
{
public:
    InstruccionRetornar(Expresion *expresion_de_retorno, Instruccion *siguiente);
    virtual void validarSemantica();

private:
    Expresion *expresion_de_retorno;
};

#endif // INSTRUCCIONRETORNAR_H
