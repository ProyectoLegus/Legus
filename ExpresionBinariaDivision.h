#ifndef EXPRESIONBINARIADIVISION_H
#define EXPRESIONBINARIADIVISION_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaDivision : public ExpresionBinaria
{
public:
    ExpresionBinariaDivision(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIADIVISION_H
