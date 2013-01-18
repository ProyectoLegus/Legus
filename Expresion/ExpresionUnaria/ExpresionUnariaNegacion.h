#ifndef EXPRESIONUNARIANEGACION_H
#define EXPRESIONUNARIANEGACION_H

#include "Expresion.h"
#include "ExpresionUnaria.h"
#include "Programa.h"

class ExpresionUnariaNegacion : public ExpresionUnaria
{
public:
    ExpresionUnariaNegacion(Expresion *expresion, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONUNARIANEGACION_H
