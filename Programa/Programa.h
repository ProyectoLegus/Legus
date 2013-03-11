#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <dirent.h>
#include "TinyXML/tinyxml.h"

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
#include "Programa/Tipos/TipoBotonCentral.h"
#include "Programa/Tipos/TipoBotonDerecho.h"
#include "Programa/Tipos/TipoBotonEscape.h"
#include "Programa/Tipos/TipoBotonIzquierdo.h"
#include "Programa/FuncionUtilizada.h"
#include "Programa/Tipos/TipoFuncion.h"
#include "Expresion/Variables/VariableArreglo.h"

#include "Programa/VariableADeclarar.h"
#include "Programa/FuncionesIncorporadas.h"
#include "Funcion.h"
#include "string.h"

class Funcion;
class DeclaracionUtilizar;
class InstruccionLlamadaAFuncion;
class DeclaracionDeFuncion;

using namespace std;

class Programa
{
public:
    /*Agregar tabla de funciones que se estan utilizando!!!!*/
    static Programa* obtenerInstancia();
    Instruccion                         *instrucciones;
    vector<DeclaracionDeFuncion*>       *tablaDeFunciones;
    vector<DeclaracionUtilizar*>        *tablaDePuertosYSensores;
    vector<VariableDeclarada*>          *tablaDeVariables;
    vector<VariableADeclarar*>          *tablaDeVariablesADeclarar;
    map<string, string>                 *tablaDeUsoFuncionesXml;

    void actualizarVariableArreglo(VariableArreglo* var);

    // Tablita para variables de parametro
    vector<VariableDeclarada*>          *tablaVariableFuncsLocales;
    void eliminarTablaVariablesFuncsLocales();
    void establecerTablaVariablesFuncsLocales(Lista *parametros, Lista *p2);
    VariableDeclarada* obtenerVDeclaradaVariablesFuncsLocales(string*);

    // Tabla de variables de parametro
    // Ira de la siguienteManera NombreFuncion|CantidadParams
    // Ej. suma|2  o suma|3 y tendra
    //map<string, vector<>>       *tablaDeFuncionesLocales;
    map<string, string>                 *FuncionesLocales;
    //vector<string>                      *FuncionesLocales;

    string                  obtenerCodigoSensoresDeclarados();
    string                  obtenerCodigoVariablesADeclarar();
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
    TipoBotonCentral*       obtenerTipoBotonCentral();
    TipoBotonDerecho*       obtenerTipoBotonDerecho();
    TipoBotonEscape*        obtenerTipoBotonEscape();
    TipoBotonIzquierdo*     obtenerTipoBotonIzquierdo();
    TipoFuncion*            obtenerTipoFuncion();

    VariableDeclarada*    existeVariable(string *identificador, int idDeExpresion);
    DeclaracionUtilizar*  existeEnTablaDePuertosYSensores(string *identificador);
    DeclaracionDeFuncion* existeEnTablaDeFunciones(string *identificador, int idDeExpresion);
    DeclaracionDeFuncion* existeEnTablaDeFunciones(string *identificador, Lista *lista_parametros);

    bool existeEnTablaDeFuncionesIdentica(string *identificador, Lista *lista_parametros);

    bool existePuerto(string *puerto);
    void limpiarInstancia();
    void establecerIdDeExpresionAVariable(int idExpresion, int idExpresionACambiar);
    void cargarFuncionesIncorporadas();
    void cargarCodigoFunciones();
    void agregarUsoDeFuncionATabla(string id, Lista* param, Funcion* funcion);

    Funcion* existeFuncionIncorporada(string nombreFuncion, Lista *parametros);
    string obtenerCodigoFuente( string nombreArchivo,
                                string inclusiones,
                                string funcsIncorporadas,
                                string declaracionFunciones,
                                string bloqueCodigo);

    void ingresarATablaDeFuncionesLocales(string nombreFunc, string codigo);
    void agregarVariableADeclarar(string*, Tipo*, int);
    /*
        Esta funcion ocasiona que el codigo generado
        pueda ser ejecutado en una pc
    */
    void establecerCompilacionParaPc();
    void establecerCompilacionParaNxt();
    bool obtenerTipoDeCompilacion();
    string obtenerCodigoFunciones();
    string obtenerInclusiones();

    void actualizarVariableADeclarar(string *id, int idExp, Tipo* tipo);

    void validarSemantica();
    string obtenerCodigoInstrucciones();
    void generarArchivo(string nombreArchivo);
    string obtenerTipoJavaEnBaseATipo(Tipo* tipo);
    string obtenerTipoEnBaseATipo(Tipo*);

    bool* existeFuncionEnXmls(string nombrefuncion, Lista *listaParametros);
    Funcion* funcionEnXml(string archivo, string nombrefuncion, Lista *listaParametros);
private:
    Programa();
    static Programa* instancia;
    /*
        true  -> compilar Nxt
        false -> compilar PC
    */
    bool compilarParaNxt;

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
    TipoBotonCentral        *tipoBotonCentral;
    TipoBotonDerecho        *tipoBotonDerecho;
    TipoBotonEscape         *tipoBotonEscape;
    TipoBotonIzquierdo      *tipoBotonIzquierdo;
    TipoFuncion             *tipoFuncion;

    /*Solo aqui la puedo usar*/
    Tipo* obtenerTipoEnBaseATipoParametro(TipoParametro tipoParam);

    //Funciones incorporadas que legus soporta, ver FuncionIncorporadas.cpp
    map<string, Funcion*>               *funcionesIncorporadas;

    //Funciones que estan siendo utilizadas en el programa.
    map<string, Funcion*>               *tablaDeUsoDeFunciones;

    //Codigo de las funcion en Legus
    map<string, string>                 *codigoDefunciones;

    string convertirAEntradaEnTabla(string nombreFuncion, Lista *parametros);
    string obtenerFuncionesLocales();

    string obtenerSensorEnJava(string sensor);
};

#endif // PROGRAMA_H
