#ifndef EXPRESIONBINARIADIVISIONENTERA_H
#define EXPRESIONBINARIADIVISIONENTERA_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaDivisionEntera : public ExpresionBinaria
{
public:
    ExpresionBinariaDivisionEntera(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIADIVISIONENTERA_H
