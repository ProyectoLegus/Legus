#ifndef EXPRESIONUNARIANEGACION_H
#define EXPRESIONUNARIANEGACION_H

#include "Expresion.h"
#include "ExpresionUnaria.h"

class ExpresionUnariaNegacion : public ExpresionUnaria
{
public:
    ExpresionUnariaNegacion(Expresion *expresion);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONUNARIANEGACION_H
