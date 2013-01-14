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
};

#endif // EXPRESIONUNARIANEGACION_H
