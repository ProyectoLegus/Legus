#ifndef EXPRESIONBINARIAIGUALDAD_H
#define EXPRESIONBINARIAIGUALDAD_H

#include "ExpresionBinaria.h"

class ExpresionBinariaIgualdad : public ExpresionBinaria
{
public:
    ExpresionBinariaIgualdad(Expresion *izquierda, Expresion *derecha);
};

#endif // EXPRESIONBINARIAIGUALDAD_H
