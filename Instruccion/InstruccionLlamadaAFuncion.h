#ifndef INSTRUCCIONLLAMADAAFUNCION_H
#define INSTRUCCIONLLAMADAAFUNCION_H

#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>

#include "Expresion/Expresion.h"
#include "Instruccion/Instruccion.h"
#include "Bison_Flex/Lista.h"
#include "Programa/Programa.h"

using namespace std;

class InstruccionLlamadaAFuncion : public Instruccion
{
public:
    InstruccionLlamadaAFuncion(string *identificador, Lista *lista_parametros,
                               Instruccion *siguiente, int idDeExpresion,
                               int numeroDeLinea);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    string *identificador;
    Lista  *lista_parametros;
    string *AMinusculas(string *str);
    string parametrosATipos();
};

#endif // INSTRUCCIONLLAMADAAFUNCION_H
