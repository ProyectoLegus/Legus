#ifndef EXPRESIONBINARIARESTA_H
#define EXPRESIONBINARIARESTA_H

#include "ExpresionBinaria.h"

class ExpresionBinariaResta : public ExpresionBinaria
{
public:
    ExpresionBinariaResta(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIARESTA_H
