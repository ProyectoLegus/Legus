#ifndef EXPRESIONUNARIANEGATIVO_H
#define EXPRESIONUNARIANEGATIVO_H

#include "Expresion/Expresion.h"
#include "Expresion/ExpresionUnaria/ExpresionUnaria.h"
#include "Programa/Programa.h"

class ExpresionUnariaNegativo : public ExpresionUnaria
{
public:
    ExpresionUnariaNegativo(Expresion *expresion, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONUNARIANEGATIVO_H
