#ifndef EXPRESIONBINARIAMULTIPLICACION_H
#define EXPRESIONBINARIAMULTIPLICACION_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMultiplicacion : public ExpresionBinaria
{
public:
    ExpresionBinariaMultiplicacion(Expresion *izquierda, Expresion *derecha, int numeroDeLineaw);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMULTIPLICACION_H
