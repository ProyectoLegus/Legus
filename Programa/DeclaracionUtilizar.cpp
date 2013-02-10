#include "Programa/DeclaracionUtilizar.h"

DeclaracionUtilizar::DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor, Variable *variable)
{
    if( esPuertoYSensorValido(puerto->obtenerIdentificador(), sensor->obtenerIdentificador()))
    {
        this->variable = variable;
        this->puerto = puerto;
        this->sensor = sensor;
    }
}

Variable* DeclaracionUtilizar::obtenerVariable()
{
    return this->variable;
}

VariablePuerto* DeclaracionUtilizar::obtenerPuerto()
{
    return this->puerto;
}

VariableSensor* DeclaracionUtilizar::obtenerSensor()
{
    return this->sensor;
}

bool DeclaracionUtilizar::esPuertoYSensorValido(string *puerto, string *sensor)
{
    /*Validaciones*/
    /*Puerto Validos
        Puertos de Salida( A, B, C):
        Puertos de Entrada(1, 2, 3, 4):
    */

    if( strcmpi(puerto->c_str(), "PuertoA")==0 ||
        strcmpi(puerto->c_str(), "PuertoB")==0 ||
        strcmpi(puerto->c_str(), "PuertoC")==0)
    {
        /*Solo Como motor se pueden usar*/
        if( strcmpi(sensor->c_str(), "Motor")==0 )
        {
            /*Ingresarlo a la tabla de simbolos como Variable TipoMotor*/
            return true;
        }
    }

    if(strcmpi(puerto->c_str(), "Puerto1")==0 ||
       strcmpi(puerto->c_str(), "Puerto2")==0 ||
       strcmpi(puerto->c_str(), "Puerto3")==0 ||
       strcmpi(puerto->c_str(), "Puerto4")==0)
    {
        if( strcmpi(sensor->c_str(), "SensorUltrasonico")==0)
        {
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeLuz")==0)
        {
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeColor")==0)
        {
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeInclinacion")==0)
        {
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeSonido")==0)
        {
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorGiroscopico")==0)
        {
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeBrujula")==0)
        {
            return true;
        }

        if( strcmpi(sensor->c_str(), "SensorDeTacto")==0 )
        {
            return true;
        }
    }

    stringstream ss;
    ss << "No se puede utilizar '";
    ss << (*sensor);
    ss << "' ";
    ss << "en el puerto '";
    ss << (*puerto);
    ss << "'";
    throw(ExcepcionLegus(ss.str()));
}
