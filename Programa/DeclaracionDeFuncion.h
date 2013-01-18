#ifndef DECLARACIONDEFUNCION_H
#define DECLARACIONDEFUNCION_H

#include "Instruccion/Instruccion.h"
#include "Expresion/Variables/Variable.h"
#include "Bison_Flex/Lista.h"

class DeclaracionDeFuncion
{
public:
    DeclaracionDeFuncion(Variable *variable, Lista *lista_parametros, Instruccion *instrucciones);
    Variable    *obtenerVariable();
    Lista       *obtenerListaParametros();
    Instruccion *obtenerInstruccion();

private:
    Variable    *variable;
    Lista       *lista_parametros;
    Instruccion *instrucciones;
};

#endif // DECLARACIONDEFUNCION_H
