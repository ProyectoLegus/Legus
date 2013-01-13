#ifndef EXPRESIONBINARIAMULTIPLICACION_H
#define EXPRESIONBINARIAMULTIPLICACION_H

#include "ExpresionBinaria.h"

class ExpresionBinariaMultiplicacion : public ExpresionBinaria
{
public:
    ExpresionBinariaMultiplicacion(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMULTIPLICACION_H
