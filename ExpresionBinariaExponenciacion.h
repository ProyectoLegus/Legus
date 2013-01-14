#ifndef EXPRESIONBINARIAEXPONENCIACION_H
#define EXPRESIONBINARIAEXPONENCIACION_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaExponenciacion : public ExpresionBinaria
{
public:
    ExpresionBinariaExponenciacion(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAEXPONENCIACION_H
