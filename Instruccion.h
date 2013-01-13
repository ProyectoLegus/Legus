#ifndef INSTRUCCION_H
#define INSTRUCCION_H

enum Instrucciones
{
    SI, ASIGNACION, CASO, LLAMADAAFUNCION,
    MIENTRAS, PARA, PARACADA, REPETIR,
    REPITA, REPITADESDE, RETORNAR
};

#include "ExcepcionLegus.h"

class Instruccion
{
public:
    Instruccion( Instruccion *siguiente, Instrucciones tipo);
    void establecerSiguiente(Instruccion *siguiente);
    Instruccion* obtenerSiguiente();

    Instrucciones obtenerTipo();
    virtual void validarSemantica()=0;

private:
    Instruccion *siguiente;
    Instrucciones tipo;
};

#endif // INSTRUCCION_H
