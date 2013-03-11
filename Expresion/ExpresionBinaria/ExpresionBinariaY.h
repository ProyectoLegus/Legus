#ifndef EXPRESIONBINARIAY_H
#define EXPRESIONBINARIAY_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaY : public ExpresionBinaria
{
public:
    ExpresionBinariaY(Expresion *izquierda, Expresion *derecha,
                      int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONBINARIAY_H
