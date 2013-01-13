#ifndef INSTRUCCIONREPITA_H
#define INSTRUCCIONREPITA_H

#include "Instruccion.h"
#include "Expresion.h"

class InstruccionRepita : public Instruccion
{
public:
    InstruccionRepita(Expresion *condicion, Instruccion *siguiente);
    virtual void validarSemantica();
    Expresion* obtenerCondicion();


private:
    Expresion *condicion;

};

#endif // INSTRUCCIONREPITA_H
