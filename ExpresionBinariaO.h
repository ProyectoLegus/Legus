#ifndef EXPRESIONBINARIAO_H
#define EXPRESIONBINARIAO_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaO : public ExpresionBinaria
{
public:
    ExpresionBinariaO(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAO_H
