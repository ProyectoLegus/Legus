#ifndef EXPRESIONUNARIANEGATIVO_H
#define EXPRESIONUNARIANEGATIVO_H

#include "Expresion.h"
#include "ExpresionUnaria.h"
#include "Programa.h"

class ExpresionUnariaNegativo : public ExpresionUnaria
{
public:
    ExpresionUnariaNegativo(Expresion *expresion, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONUNARIANEGATIVO_H
