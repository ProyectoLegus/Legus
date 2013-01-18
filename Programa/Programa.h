#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <iostream>
#include <vector>
#include "Instruccion/Instruccion.h"
#include "Programa/DeclaracionDeFuncion.h"
#include "Programa/DeclaracionUtilizar.h"
#include "Expresion/Variables/VariableDeclarada.h"
#include "Programa/Tipos/TipoBooleano.h"
#include "Programa/Tipos/TipoCadena.h"
#include "Programa/Tipos/TipoCaracter.h"
#include "Programa/Tipos/TipoEntero.h"
#include "Programa/Tipos/TipoFlotante.h"
#include "Programa/Tipos/TipoArreglo.h"

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
