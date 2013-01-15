#ifndef EXPRESIONBINARIAMODULO_H
#define EXPRESIONBINARIAMODULO_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaModulo : public ExpresionBinaria
{
public:
    ExpresionBinariaModulo(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMODULO_H
