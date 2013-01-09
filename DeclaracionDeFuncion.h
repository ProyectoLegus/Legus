#ifndef DECLARACIONDEFUNCION_H
#define DECLARACIONDEFUNCION_H

#include "Instruccion.h"
#include "Variable.h"
#include "Lista.h"

class DeclaracionDeFuncion
{
public:
    DeclaracionDeFuncion(Variable *variable, Lista *lista_parametros, Instruccion *instrucciones);

private:
    Variable    *variable;
    Lista       *lista_parametros;
    Instruccion *instrucciones;
};

#endif // DECLARACIONDEFUNCION_H
