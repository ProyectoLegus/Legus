#ifndef PARSERIMPORTS_H
#define PARSERIMPORTS_H

enum TOKENS
{

};

/*Necesarios*/
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "Bison_Flex/tokens.h"

/* Expresiones */

#include "ExpresionArreglo.h"
#include "InstruccionAsignacionArreglo.h"

/*Expresion Binaria*/
#include "Expresion/ExpresionBinaria/ExpresionBinariaDistinto.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaDivision.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaDivisionEntera.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaExponenciacion.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaIgualdad.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaMayor.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaMayorIgual.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaMenor.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaMenorIgual.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaModulo.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaMultiplicacion.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaO.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaResta.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaSuma.h"
#include "Expresion/ExpresionBinaria/ExpresionBinariaY.h"

/*Expresion Literal*/
#include "Expresion/ExpresionLiteral/ExpresionLiteralBooleana.h"
#include "Expresion/ExpresionLiteral/ExpresionLiteralCadena.h"
#include "Expresion/ExpresionLiteral/ExpresionLiteralCaracter.h"
#include "Expresion/ExpresionLiteral/ExpresionLiteralEntera.h"
#include "Expresion/ExpresionLiteral/ExpresionLiteralFlotante.h"

/*Expresion Unaria*/
#include "Expresion/ExpresionUnaria/ExpresionUnariaNegacion.h"
#include "Expresion/ExpresionUnaria/ExpresionUnariaNegativo.h"


/*Variables*/
#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariableArreglo.h"
#include "Expresion/Variables/VariableFuncion.h"
#include "Expresion/Variables/VariableDeclarada.h"
#include "Expresion/Variables/VariableDeclarada.h"

/* Fin Expresiones */

/* Instrucciones */
#include "Instruccion/InstruccionSi.h"
#include "Instruccion/InstruccionRepitaDesde.h"
#include "Instruccion/InstruccionRepita.h"
#include "Instruccion/InstruccionRepetir.h"
#include "Instruccion/InstruccionParaCada.h"
#include "Instruccion/InstruccionPara.h"
#include "Instruccion/InstruccionMientras.h"
#include "Instruccion/InstruccionCaso.h"
#include "Instruccion/InstruccionAsignacion.h"
#include "Instruccion/InstruccionRetornar.h"
#include "Instruccion/InstruccionLlamadaAFuncion.h"

/* Fin Instrucciones */

/*Otros*/
#include "Instruccion/ListaDeCaso.h"
#include "Programa/Programa.h"

using namespace std;


#endif // PARSERIMPORTS_H
