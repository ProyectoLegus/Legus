#ifndef EXPRESIONBINARIA_H
#define EXPRESIONBINARIA_H

#include "Expresion/Expresion.h"

class ExpresionBinaria : public Expresion
{
public:
    ExpresionBinaria(Expresion *izquierda, Expresion *derecha,
                     Expresiones tipo, int numeroDeLinea);
    Expresion *obtenerExpresionIzquierda();
    Expresion *obtenerExpresionDerecha();

private:
    Expresion *izquierda;
    Expresion *derecha;
};

#endif // EXPRESIONBINARIA_H
