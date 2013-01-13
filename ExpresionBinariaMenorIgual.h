#ifndef EXPRESIONBINARIAMENORIGUAL_H
#define EXPRESIONBINARIAMENORIGUAL_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMenorIgual : public ExpresionBinaria
{
public:
    ExpresionBinariaMenorIgual(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMENORIGUAL_H
