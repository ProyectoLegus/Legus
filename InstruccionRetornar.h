#ifndef INSTRUCCIONRETORNAR_H
#define INSTRUCCIONRETORNAR_H

#include "Instruccion.h"
#include "Expresion.h"
#include <sstream>

class InstruccionRetornar : public Instruccion
{
public:
    InstruccionRetornar(Expresion *expresion_de_retorno, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *expresion_de_retorno;
};

#endif // INSTRUCCIONRETORNAR_H
