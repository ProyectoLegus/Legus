#ifndef EXPRESIONBINARIARESTA_H
#define EXPRESIONBINARIARESTA_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaResta : public ExpresionBinaria
{
public:
    ExpresionBinariaResta(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIARESTA_H
