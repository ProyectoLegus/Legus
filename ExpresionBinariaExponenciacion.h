#ifndef EXPRESIONBINARIAEXPONENCIACION_H
#define EXPRESIONBINARIAEXPONENCIACION_H

#include "ExpresionBinaria.h"

class ExpresionBinariaExponenciacion : public ExpresionBinaria
{
public:
    ExpresionBinariaExponenciacion(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAEXPONENCIACION_H
