#ifndef DECLARACIONDEFUNCION_H
#define DECLARACIONDEFUNCION_H

#include "Instruccion/Instruccion.h"
#include "Expresion/Variables/Variable.h"
#include "Bison_Flex/Lista.h"
#include "Programa/Programa.h"

class DeclaracionDeFuncion
{
public:
    DeclaracionDeFuncion(Variable *variable, Lista *lista_parametros,
                         Instruccion *instrucciones, int numeroDeLinea);
    Variable    *obtenerVariable();
    Lista       *obtenerListaParametros();
    Instruccion *obtenerInstruccion();

    string      obtenerCodigoDeFuncion(Lista *lista_de_parametros);

    Tipo* validarSemantica(string *id, Lista *lista_params);
    string generarCodigoJava(Lista *listaParams);

private:
    Variable    *variable;
    Lista       *lista_parametros;
    Instruccion *instrucciones;
    Tipo* tipoDevolucionFuncion;

    int numeroDeLinea;
    Tipo* obtenerTipoRetornar(Instruccion* instr);
    string convertirAEntraFuncLocl(Lista*);
};

#endif // DECLARACIONDEFUNCION_H
