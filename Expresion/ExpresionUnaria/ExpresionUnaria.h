#ifndef EXPRESIONUNARIA_H
#define EXPRESIONUNARIA_H

#include "Expresion.h"

class ExpresionUnaria : public Expresion
{
public:
    ExpresionUnaria(Expresion *expresion, Expresiones tipo, int numeroDeLinea);
    Expresion* obtenerExpresion();

private:
    Expresion *expresion;
};

#endif // EXPRESIONUNARIA_H
