#include "ExpresionBinariaExponenciacion.h"

ExpresionBinariaExponenciacion::ExpresionBinariaExponenciacion(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, EXPONENCIACION)
{
}

Tipo* ExpresionBinariaExponenciacion::validarSemantica()
{
    return 0;
}
