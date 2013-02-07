#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <iostream>
#include <vector>
#include <map>

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
#include "Programa/VariableADeclarar.h"
#include "Programa/FuncionesIncorporadas.h"

using namespace std;

class Programa
{
public:
    static Programa* obtenerInstancia();
    Instruccion                   *instrucciones;
    vector<DeclaracionDeFuncion*> *tablaDeFunciones;
    vector<DeclaracionUtilizar*>  *tablaDePuertosYSensores;
    vector<VariableDeclarada*>    *tablaDeVariables;

    vector<VariableADeclarar*>    *tablaDeVariablesADeclarar;
    string        obtenerCodigoVariablesADeclarar();

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
    void establecerIdDeExpresionAVariable(int idExpresion, int idExpresionACambiar);
    void cargarFuncionesIncorporadas();

    bool existeFuncionIncorporada(string nombreFuncion, Lista *parametros);

    string obtenerCodigoFuente( string nombreArchivo,
                                string inclusiones,
                                string declaracionFunciones,
                                string bloqueCodigo);

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

    /*Solo aqui la puedo*/
    Tipo* obtenerTipoEnBaseATipoParametro(TipoParametro tipoParam);

    map<string, vector<vector<TipoParametro>*>* > funcionesIncorporadas;
};

#endif // PROGRAMA_H
