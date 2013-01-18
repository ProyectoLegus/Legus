#ifndef EXPRESIONBINARIARESTA_H
#define EXPRESIONBINARIARESTA_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaResta : public ExpresionBinaria
{
public:
    ExpresionBinariaResta(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIARESTA_H
