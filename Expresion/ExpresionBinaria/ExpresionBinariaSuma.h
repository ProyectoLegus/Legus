#ifndef EXPRESIONBINARIASUMA_H
#define EXPRESIONBINARIASUMA_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"
#include "Expresion/Variables/VariableArreglo.h"

class ExpresionBinariaSuma : public ExpresionBinaria
{
public:
    ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    string codigoExpresion(Expresion *expresion);
    VariableArreglo *obtenerVarArreglo(string id);
    string obtenerTipoEnLenguajeNatural(Tipo* tipo);
};

#endif // EXPRESIONBINARIASUMA_H
