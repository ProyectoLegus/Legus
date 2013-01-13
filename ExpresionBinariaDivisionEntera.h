#ifndef EXPRESIONBINARIADIVISIONENTERA_H
#define EXPRESIONBINARIADIVISIONENTERA_H

#include "ExpresionBinaria.h"

class ExpresionBinariaDivisionEntera : public ExpresionBinaria
{
public:
    ExpresionBinariaDivisionEntera(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIADIVISIONENTERA_H
