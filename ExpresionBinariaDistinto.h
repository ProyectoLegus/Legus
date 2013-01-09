#ifndef EXPRESIONBINARIADISTINTO_H
#define EXPRESIONBINARIADISTINTO_H

#include "ExpresionBinaria.h"

class ExpresionBinariaDistinto : public ExpresionBinaria
{
public:
    ExpresionBinariaDistinto(Expresion *izquierda, Expresion *derecha);
};

#endif // EXPRESIONBINARIADISTINTO_H
