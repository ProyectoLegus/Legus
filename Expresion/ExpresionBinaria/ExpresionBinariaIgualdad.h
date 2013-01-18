#ifndef EXPRESIONBINARIAIGUALDAD_H
#define EXPRESIONBINARIAIGUALDAD_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaIgualdad : public ExpresionBinaria
{
public:
    ExpresionBinariaIgualdad(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAIGUALDAD_H
