#ifndef EXPRESIONBINARIAY_H
#define EXPRESIONBINARIAY_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaY : public ExpresionBinaria
{
public:
    ExpresionBinariaY(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONBINARIAY_H
