#ifndef EXPRESIONBINARIAIGUALDAD_H
#define EXPRESIONBINARIAIGUALDAD_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaIgualdad : public ExpresionBinaria
{
public:
    ExpresionBinariaIgualdad(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAIGUALDAD_H
