#ifndef EXPRESIONBINARIADIVISION_H
#define EXPRESIONBINARIADIVISION_H

#include "ExpresionBinaria.h"

class ExpresionBinariaDivision : public ExpresionBinaria
{
public:
    ExpresionBinariaDivision(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIADIVISION_H
