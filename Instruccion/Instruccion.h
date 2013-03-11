#ifndef INSTRUCCION_H
#define INSTRUCCION_H

enum Instrucciones
{
    SI, ASIGNACION, CASO, LLAMADAAFUNCION,
    MIENTRAS, PARA, PARACADA, REPETIR,
    REPITA, REPITADESDE, RETORNAR
};

#include "Programa/ExcepcionLegus.h"

class Instruccion
{
public:
    Instruccion( Instruccion *siguiente, Instrucciones tipo, int idDeExpresion, int numeroDeLinea);
    void establecerSiguiente(Instruccion *siguiente);
    Instruccion* obtenerSiguiente();

    Instrucciones obtenerTipo();
    virtual void validarSemantica()=0;
    virtual string generarCodigoJava()=0;
    int numeroDeLinea;

private:
    Instruccion *siguiente;
    Instrucciones tipo;
    int idDeExpresion;
};

#endif // INSTRUCCION_H
