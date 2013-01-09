#ifndef INSTRUCCION_H
#define INSTRUCCION_H

enum Instrucciones
{
    SI, ASIGNACION, CASO, LLAMADAAFUNCION,
    MIENTRAS, PARA, PARACADA, REPETIR,
    REPITA, REPITADESDE, RETORNAR
};

class Instruccion
{
public:
    Instruccion( Instruccion *siguiente, Instrucciones tipo);
    void establecerSiguiente(Instruccion *siguiente);
    Instruccion* obtenerSiguiente();

private:
    Instruccion *siguiente;
    Instrucciones tipo;
};

#endif // INSTRUCCION_H
