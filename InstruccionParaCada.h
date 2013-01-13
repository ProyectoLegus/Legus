#ifndef INSTRUCCIONPARACADA_H
#define INSTRUCCIONPARACADA_H

#include "Instruccion.h"
#include "Expresion.h"

class InstruccionParaCada : public Instruccion
{
public:
    InstruccionParaCada(Expresion *variable, Expresion *coleccion_arreglo, Instruccion *instrucciones, Instruccion *siguiente);
    virtual void validarSemantica();

private:
    Expresion *variable;
    Expresion *coleccion_arreglo;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONPARACADA_H
