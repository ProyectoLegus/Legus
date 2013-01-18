#ifndef EXPRESIONBINARIAMAYOR_H
#define EXPRESIONBINARIAMAYOR_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMayor : public ExpresionBinaria
{
public:
    ExpresionBinariaMayor(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMAYOR_H
