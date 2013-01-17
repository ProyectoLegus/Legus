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
#include "TipoArreglo.h"

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
    TipoArreglo*  obtenerTipoArreglo();

    VariableDeclarada*    existeVariable(string *identificador, int idDeExpresion);
    DeclaracionUtilizar*  existeEnTablaDePuertosYSensores(string *identificador, int idDeExpresion);
    DeclaracionDeFuncion* existeEnTablaDeFunciones(string *identificador, int idDeExpresion);

    void limpiarInstancia();

        /*El primero es el id de expresion de la variable que quiero cambiar
            el segundo es el valor que le pondre
        */
    void establecerIdDeExpresionAVariable(int idExpresion, int idExpresionACambiar);

private:
    Programa();
    static Programa* instancia;

    /*Una sola instancia para los Tipos*/
    TipoBooleano *tipoBooleano;
    TipoCadena   *tipoCadena;
    TipoCaracter *tipoCaracter;
    TipoEntero   *tipoEntero;
    TipoFlotante *tipoFlotante;
    TipoArreglo  *tipoArreglo;
};

#endif // PROGRAMA_H
