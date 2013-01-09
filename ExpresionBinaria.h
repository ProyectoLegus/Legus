#ifndef EXPRESIONBINARIA_H
#define EXPRESIONBINARIA_H

#include "Expresion.h"

class ExpresionBinaria : public Expresion
{
public:
    ExpresionBinaria(Expresion *izquierda, Expresion *derecha, Expresiones tipo);

private:
    Expresion *izquierda;
    Expresion *derecha;
};

#endif // EXPRESIONBINARIA_H
