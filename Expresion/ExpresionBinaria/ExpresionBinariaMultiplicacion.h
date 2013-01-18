#ifndef EXPRESIONBINARIAMULTIPLICACION_H
#define EXPRESIONBINARIAMULTIPLICACION_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaMultiplicacion : public ExpresionBinaria
{
public:
    ExpresionBinariaMultiplicacion(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMULTIPLICACION_H
