#ifndef EXPRESIONBINARIAO_H
#define EXPRESIONBINARIAO_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaO : public ExpresionBinaria
{
public:
    ExpresionBinariaO(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAO_H
