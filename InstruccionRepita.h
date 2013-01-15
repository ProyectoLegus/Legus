#ifndef INSTRUCCIONREPITA_H
#define INSTRUCCIONREPITA_H

#include "Instruccion.h"
#include "Expresion.h"
#include "Programa.h"

class InstruccionRepita : public Instruccion
{
public:
    InstruccionRepita(Expresion *condicion, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    Expresion* obtenerCondicion();
    virtual string generarCodigoJava();

private:
    Expresion *condicion;

};

#endif // INSTRUCCIONREPITA_H
