#ifndef EXPRESIONBINARIASUMA_H
#define EXPRESIONBINARIASUMA_H

#include "ExpresionBinaria.h"

class ExpresionBinariaSuma : public ExpresionBinaria
{
public:
    ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIASUMA_H
