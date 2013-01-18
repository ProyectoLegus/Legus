#ifndef EXPRESIONUNARIANEGACION_H
#define EXPRESIONUNARIANEGACION_H

#include "Expresion/Expresion.h"
#include "Expresion/ExpresionUnaria/ExpresionUnaria.h"
#include "Programa/Programa.h"

class ExpresionUnariaNegacion : public ExpresionUnaria
{
public:
    ExpresionUnariaNegacion(Expresion *expresion, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONUNARIANEGACION_H
