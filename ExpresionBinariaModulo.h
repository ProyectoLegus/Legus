#ifndef EXPRESIONBINARIAMODULO_H
#define EXPRESIONBINARIAMODULO_H

#include "ExpresionBinaria.h"

class ExpresionBinariaModulo : public ExpresionBinaria
{
public:
    ExpresionBinariaModulo(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMODULO_H
