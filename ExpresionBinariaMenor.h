#ifndef EXPRESIONBINARIAMENOR_H
#define EXPRESIONBINARIAMENOR_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMenor : public ExpresionBinaria
{
public:
    ExpresionBinariaMenor(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMENOR_H
