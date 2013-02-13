#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

#include "Instruccion/Instruccion.h"
#include "Instruccion/InstruccionLlamadaAFuncion.h"
#include "Programa/DeclaracionDeFuncion.h"
#include "Programa/DeclaracionUtilizar.h"
#include "Expresion/Variables/VariableDeclarada.h"
#include "Programa/Tipos/TipoBooleano.h"
#include "Programa/Tipos/TipoCadena.h"
#include "Programa/Tipos/TipoCaracter.h"
#include "Programa/Tipos/TipoEntero.h"
#include "Programa/Tipos/TipoFlotante.h"
#include "Programa/Tipos/TipoArreglo.h"
#include "Programa/Tipos/TipoMotor.h"
#include "Programa/Tipos/TipoSensorDeBrujula.h"
#include "Programa/Tipos/TipoSensorDeColor.h"
#include "Programa/Tipos/TipoSensorDeInclinacion.h"
#include "Programa/Tipos/TipoSensorDeLuz.h"
#include "Programa/Tipos/TipoSensorDeSonido.h"
#include "Programa/Tipos/TipoSensorDeTacto.h"
#include "Programa/Tipos/TipoSensorGiroscopico.h"
#include "Programa/Tipos/TipoSensorUltrasonico.h"

#include "Programa/VariableADeclarar.h"
#include "Programa/FuncionesIncorporadas.h"
#include "Funcion.h"
#include "string.h"

class Funcion;
class DeclaracionUtilizar;
class InstruccionLlamadaAFuncion;

using namespace std;

class Programa
{
public:
    /*Agregar tabla de funciones que se estan utilizando!!!!*/
    static Programa* obtenerInstancia();
    Instruccion                       *instrucciones;
    vector<DeclaracionDeFuncion*>     *tablaDeFunciones;
    vector<DeclaracionUtilizar*>      *tablaDePuertosYSensores;
    vector<VariableDeclarada*>        *tablaDeVariables;
    vector<VariableADeclarar*>        *tablaDeVariablesADeclarar;
    vector<InstruccionLlamadaAFuncion*> *tablaDeUsoDeFunciones;

    string        obtenerCodigoVariablesADeclarar();
    TipoBooleano*           obtenerTipoBooleano();
    TipoCadena*             obtenerTipoCadena();
    TipoCaracter*           obtenerTipoCaracter();
    TipoEntero*             obtenerTipoEntero();
    TipoFlotante*           obtenerTipoFlotante();
    TipoArreglo*            obtenerTipoArreglo();
    TipoMotor*              obtenerTipoMotor();
    TipoSensorDeBrujula*    obtenerTipoSensorDeBrujula();
    TipoSensorDeColor*      obtenerTipoSensorDeColor();
    TipoSensorDeInclinacion*obtenerTipoSensorDeInclinacion();
    TipoSensorDeLuz*        obtenerTipoSensorDeLuz();
    TipoSensorDeSonido*     obtenerTipoSensorDeSonido();
    TipoSensorDeTacto*      obtenerTipoSensorDeTacto();
    TipoSensorGiroscopico*  obtenerTipoSensorGiroscopico();
    TipoSensorUltrasonico*  obtenerTipoSensorUltrasonico();

    VariableDeclarada*    existeVariable(string *identificador, int idDeExpresion);
    DeclaracionUtilizar*  existeEnTablaDePuertosYSensores(string *identificador);
    DeclaracionDeFuncion* existeEnTablaDeFunciones(string *identificador, int idDeExpresion);

    bool existePuerto(string *puerto);
    void limpiarInstancia();
    void establecerIdDeExpresionAVariable(int idExpresion, int idExpresionACambiar);
    void cargarFuncionesIncorporadas();

    Funcion* existeFuncionIncorporada(string nombreFuncion, Lista *parametros);
    string obtenerCodigoFuente( string nombreArchivo,
                                string inclusiones,
                                string declaracionFunciones,
                                string bloqueCodigo);

private:
    Programa();
    static Programa* instancia;

    /*Una sola instancia para los Tipos*/
    TipoBooleano            *tipoBooleano;
    TipoCadena              *tipoCadena;
    TipoCaracter            *tipoCaracter;
    TipoEntero              *tipoEntero;
    TipoFlotante            *tipoFlotante;
    TipoArreglo             *tipoArreglo;
    TipoMotor               *tipoMotor;
    TipoSensorDeBrujula     *tipoSensorDeBrujula;
    TipoSensorDeColor       *tipoSensorDeColor;
    TipoSensorDeInclinacion *tipoSensorDeInclinacion;
    TipoSensorDeLuz         *tipoSensorDeLuz;
    TipoSensorDeSonido      *tipoSensorDeSonido;
    TipoSensorDeTacto       *tipoSensorDeTacto;
    TipoSensorGiroscopico   *tipoSensorGiroscopico;
    TipoSensorUltrasonico   *tipoSensorUltrasonico;

    /*Solo aqui la puedo*/
    Tipo* obtenerTipoEnBaseATipoParametro(TipoParametro tipoParam);
    map<string, vector<Funcion*>*>* funcionesIncorporadas;
};

#endif // PROGRAMA_H
