#ifndef INSTRUCCIONREPETIR_H
#define INSTRUCCIONREPETIR_H

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include <sstream>

class InstruccionRepetir : public Instruccion
{
public:
    InstruccionRepetir(Expresion *cantidad, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *cantidad;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONREPETIR_H
