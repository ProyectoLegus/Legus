#ifndef EXPRESIONBINARIASUMA_H
#define EXPRESIONBINARIASUMA_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaSuma : public ExpresionBinaria
{
public:
    ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIASUMA_H
