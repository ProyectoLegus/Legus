#ifndef DECLARACIONUTILIZAR_H
#define DECLARACIONUTILIZAR_H

#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariablePuerto.h"
#include "Expresion/Variables/VariableSensor.h"
#include "Programa/Tipos/Tipo.h"
#include "Programa/Programa.h"
#include <string.h>

class DeclaracionUtilizar
{
public:
    DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor,
                        VariableSensor *variable, int numeroDeLinea);
    VariableSensor*     obtenerVariable();
    VariablePuerto*     obtenerPuerto();
    VariableSensor*     obtenerSensor();
    Tipo*               obtenerTipoSensor();
    string              obtenerCodigo();
    string              obtenerCodigoDeclarar();

private:
    VariableSensor *variable;
    VariablePuerto *puerto;
    VariableSensor *sensor;
    Tipo           *tipoSensor;
    string         codigo;
    string         codigoDeclarar;
    int             numeroDeLinea;
    bool  esPuertoYSensorValido(string* puerto, string* sensor, string *variable);
    int   obtenerNumeroPuerto(string *puerto);
    char  obtenerCaracterDePuerto(string *puerto);
    string obtenerPuertoJava(string *puerto);
    void establecerCodigo(string tipo, string puerto, string sensor);
};

#endif // DECLARACIONUTILIZAR_H
