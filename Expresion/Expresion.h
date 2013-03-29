#ifndef EXPRESION_H
#define EXPRESION_H

/*!
    \public
    \enum Expresiones
    \brief Utilizado para describir que tipo de expresion es el objeto.
*/
enum Expresiones
{
    IGUALDAD, MAYOR, MAYORIGUAL, MENOR, MENORIGUAL,
    DISTINTO, DIVISION, DIVISIONENTERA, EXPONENCIACION,
    MODULO, MULTIPLICACION, OPERADORO, RESTA, SUMA,
    OPERADORY, LITERALBOOLEANA, LITERALCADENA, LITERALCARACTER,
    LITERALENTERA, LITERALFLOTANTE, NEGACION, NEGATIVO,
    VARIABLENORMAL, ARREGLO, FUNCION,
    PUERTO, SENSOR, INSTANCIADE
};

/*!
    \enum TipoDato
    \brief Utilizado para describir el tipo de dato que actualmente
           tiene la variable.
*/
enum TipoDato
{
    ENTERO, FLOTANTE, CADENA,
    CARACTER, BOOLEANO
};

#include "Programa/Tipos/Tipo.h"
#include "Programa/ExcepcionLegus.h"

using namespace std;

class Expresion
{
public:
    Expresion( Expresiones tipo , int numeroDeLinea);
    Expresiones tipo;
    Tipo *tipoInferido;
    int numeroDeLinea;
    virtual Tipo* validarSemantica()=0;
    virtual string generarCodigoJava()=0;
};

#endif // EXPRESION_H
