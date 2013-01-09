#ifndef INSTRUCCIONLLAMADAAFUNCION_H
#define INSTRUCCIONLLAMADAAFUNCION_H

#include <iostream>
#include <string>

#include "Expresion.h"
#include "Instruccion.h"
#include "Lista.h"

using namespace std;

class InstruccionLlamadaAFuncion : public Instruccion
{
public:
    InstruccionLlamadaAFuncion(string *identificador, Lista *lista_parametros, Instruccion *siguiente);

private:
    string *identificador;
    Lista  *lista_parametros;
};

#endif // INSTRUCCIONLLAMADAAFUNCION_H
