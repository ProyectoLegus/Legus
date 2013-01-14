#ifndef EXPRESIONBINARIADISTINTO_H
#define EXPRESIONBINARIADISTINTO_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaDistinto : public ExpresionBinaria
{
public:
    ExpresionBinariaDistinto(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIADISTINTO_H
