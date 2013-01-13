#ifndef EXPRESIONBINARIAMAYORIGUAL_H
#define EXPRESIONBINARIAMAYORIGUAL_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMayorIgual : public ExpresionBinaria
{
public:
    ExpresionBinariaMayorIgual(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMAYORIGUAL_H
