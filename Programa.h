#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <iostream>
#include <vector>
#include "Instruccion.h"
#include "DeclaracionDeFuncion.h"
#include "DeclaracionUtilizar.h"
#include "VariableDeclarada.h"
#include "TipoBooleano.h"
#include "TipoCadena.h"
#include "TipoCaracter.h"
#include "TipoEntero.h"
#include "TipoFlotante.h"

using namespace std;

class Programa
{
public:
    static Programa* obtenerInstancia();
    Instruccion                   *instrucciones;
    vector<DeclaracionDeFuncion*> *tablaDeFunciones;
    vector<DeclaracionUtilizar*>  *tablaDePuertosYSensores;
    vector<VariableDeclarada*>    *tablaDeVariables;

    TipoBooleano* obtenerTipoBooleano();
    TipoCadena*   obtenerTipoCadena();
    TipoCaracter* obtenerTipoCaracter();
    TipoEntero*   obtenerTipoEntero();
    TipoFlotante* obtenerTipoFlotante();

    VariableDeclarada*         existeVariable(string *identificador, int idDeExpresion);

private:
    Programa();
    static Programa* instancia;

    /*Una sola instancia para los Tipos*/
    TipoBooleano *tipoBooleano;
    TipoCadena   *tipoCadena;
    TipoCaracter *tipoCaracter;
    TipoEntero   *tipoEntero;
    TipoFlotante *tipoFlotante;
};

#endif // PROGRAMA_H
