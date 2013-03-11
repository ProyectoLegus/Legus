#ifndef FUNCIONESINCORPORADAS_H
#define FUNCIONESINCORPORADAS_H

enum TipoParametro
{
    TEntero,TCadena,TCaracter,
    TBooleano,TFlotante, TArreglo,
    TMotor, TSensorUltrasonico, TSensorDeTacto,
    TSensorDeLuz, TSensorDeColor,
    TSensorDeInclinacion, TSensorDeSonido,
    TSensorGiroscopico, TSensorDeBrujula,
    TBotonDerecho, TBotonIzquierdo, TBotonCentral,
    TBotonEscape,_TFuncion
};

#include <iostream>
#include <vector>
#include <map>
#include <stdio.h>
#include "stdarg.h"
#include "dirent.h"

#include "TinyXML/tinyxml.h"
#include "Bison_Flex/Lista.h"
#include "Programa/Programa.h"
#include "Programa/Tipos/Tipo.h"
#include "Funcion.h"

using namespace std;

class FuncionesIncorporadas
{
public:
    FuncionesIncorporadas();
    map<string, Funcion*>* obtenerFuncionesIncorporadas();
    map<string, string>            *obtenerCodigoFunciones();

private:
    vector<TipoParametro>* obtenerVectorParametros(int cantidadArgumentos, ...);
    Tipo* obtenerTipo(TipoParametro tipoParam);
};

#endif // FUNCIONESINCORPORADAS_H
