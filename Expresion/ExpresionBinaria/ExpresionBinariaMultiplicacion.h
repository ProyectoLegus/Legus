#ifndef EXPRESIONBINARIAMULTIPLICACION_H
#define EXPRESIONBINARIAMULTIPLICACION_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMultiplicacion : public ExpresionBinaria
{
public:
    ExpresionBinariaMultiplicacion(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMULTIPLICACION_H
