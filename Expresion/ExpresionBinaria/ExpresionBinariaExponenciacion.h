#ifndef EXPRESIONBINARIAEXPONENCIACION_H
#define EXPRESIONBINARIAEXPONENCIACION_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaExponenciacion : public ExpresionBinaria
{
public:
    ExpresionBinariaExponenciacion(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAEXPONENCIACION_H
