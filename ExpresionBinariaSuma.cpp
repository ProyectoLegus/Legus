#include "ExpresionBinariaSuma.h"

ExpresionBinariaSuma::ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, SUMA)
{

}

Tipo* ExpresionBinariaSuma::validarSemantica()
{
    return 0;
}
