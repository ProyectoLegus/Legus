#ifndef EXPRESION_H
#define EXPRESION_H


enum Expresiones
{
    IGUALDAD, MAYOR, MAYORIGUAL, MENOR, MENORIGUAL,
    DISTINTO, DIVISION, DIVISIONENTERA, EXPONENCIACION,
    MODULO, MULTIPLICACION, OPERADORO, RESTA, SUMA,
    OPERADORY, LITERALBOOLEANA, LITERALCADENA, LITERALCARACTER,
    LITERALENTERA, LITERALFLOTANTE, NEGACION, NEGATIVO,
    VARIABLENORMAL, ARREGLO, FUNCION,
    PUERTO, SENSOR
};
#include "Tipo.h"
#include "ExcepcionLegus.h"


/*Para no incluirlo en los demas*/
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
