#ifndef PARSERIMPORTS_H
#define PARSERIMPORTS_H

enum TOKENS
{

};

/*Necesarios*/
#include <QMessageBox>
#include <QString>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "tokens.h"

/* Expresiones */

/*Expresion Binaria*/
#include "ExpresionBinariaDistinto.h"
#include "ExpresionBinariaDivision.h"
#include "ExpresionBinariaDivisionEntera.h"
#include "ExpresionBinariaExponenciacion.h"
#include "ExpresionBinariaIgualdad.h"
#include "ExpresionBinariaMayor.h"
#include "ExpresionBinariaMayorIgual.h"
#include "ExpresionBinariaMenor.h"
#include "ExpresionBinariaMenorIgual.h"
#include "ExpresionBinariaModulo.h"
#include "ExpresionBinariaMultiplicacion.h"
#include "ExpresionBinariaO.h"
#include "ExpresionBinariaResta.h"
#include "ExpresionBinariaSuma.h"
#include "ExpresionBinariaY.h"

/*Expresion Literal*/
#include "ExpresionLiteralBooleana.h"
#include "ExpresionLiteralCadena.h"
#include "ExpresionLiteralCaracter.h"
#include "ExpresionLiteralEntera.h"
#include "ExpresionLiteralFlotante.h"

/*Expresion Unaria*/
#include "ExpresionUnariaNegacion.h"
#include "ExpresionUnariaNegativo.h"

/*Variables*/
#include "Variable.h"
#include "VariableArreglo.h"
#include "VariableFuncion.h"
#include "VariableDeclarada.h"
#include "VariableDeclarada.h"

/* Fin Expresiones */

/* Instrucciones */
#include "InstruccionSi.h"
#include "InstruccionRepitaDesde.h"
#include "InstruccionRepita.h"
#include "InstruccionRepetir.h"
#include "InstruccionParaCada.h"
#include "InstruccionPara.h"
#include "InstruccionMientras.h"
#include "InstruccionCaso.h"
#include "InstruccionAsignacion.h"
#include "InstruccionRetornar.h"
#include "InstruccionLlamadaAFuncion.h"

/* Fin Instrucciones */

/*Otros*/
#include "ListaDeCaso.h"
#include "Programa.h"

using namespace std;


#endif // PARSERIMPORTS_H
