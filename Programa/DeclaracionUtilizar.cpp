#include "Programa/DeclaracionUtilizar.h"

DeclaracionUtilizar::DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor, VariableSensor *variable)
{
    /*
      Validar que uso correcto puerto y sensor correspondiente,
      que la variable no este siendo utilizada
    */
    this->codigo = new string();
    if( esPuertoYSensorValido(puerto->obtenerIdentificador(),
                              sensor->obtenerIdentificador(),
                              variable->obtenerIdentificador()))
    {
        this->variable = variable;
        this->puerto = puerto;
        this->sensor = sensor;
    }
}

VariableSensor* DeclaracionUtilizar::obtenerVariable()
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

bool DeclaracionUtilizar::esPuertoYSensorValido(string *puerto, string *sensor, string *variable)
{
    /*Ver si existe en la tabla de puertos y sensores*/
    DeclaracionUtilizar *du = Programa::obtenerInstancia()->existeEnTablaDePuertosYSensores(variable);
    if( du != 0 )
    {
        stringstream ss;
        ss << "Variable '";
        ss << (*variable);
        ss << "' ";
        ss << " ya esta siendo utilizada";
        throw(ExcepcionLegus(ss.str()));
    }
    else
    {
        /*verificar que no sea el mismo puerto*/
        if( Programa::obtenerInstancia()->existePuerto(puerto)  )
        {
            /*Error Mismo puerto no puede estar en uso*/
            stringstream ss;
            ss << "Puerto '";
            ss << (*puerto);
            ss << "' ";
            ss << " ya esta siendo utilizado";
            throw(ExcepcionLegus(ss.str()));
        }
    }

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
            *codigo+="Motor.";
            *codigo+=obtenerCaracterDePuerto(puerto);
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoMotor();
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
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorUltrasonico();
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeLuz")==0)
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorDeLuz();
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeColor")==0)
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorDeColor();
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeInclinacion")==0)
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorDeInclinacion();
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeSonido")==0)
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorDeSonido();
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorGiroscopico")==0)
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorGiroscopico();
            return true;
        }

        if(strcmpi(sensor->c_str(), "SensorDeBrujula")==0)
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorDeBrujula();
            return true;
        }

        if( strcmpi(sensor->c_str(), "SensorDeTacto")==0 )
        {
            this->tipoSensor = Programa::obtenerInstancia()->obtenerTipoSensorDeTacto();
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

Tipo* DeclaracionUtilizar::obtenerTipoSensor()
{
    return this->tipoSensor;
}

int DeclaracionUtilizar::obtenerNumeroPuerto(string *puerto)
{
    if(std::string::npos != puerto->find("1"))     {return 1;}
    else if(std::string::npos != puerto->find("2")){return 2;}
    else if(std::string::npos != puerto->find("3")){return 3;}
    else if(std::string::npos != puerto->find("4")){return 4;}
    return 0;
}

char DeclaracionUtilizar::obtenerCaracterDePuerto(string *puerto)
{
    if( std::string::npos != puerto->find("A") ||
        std::string::npos != puerto->find("a"))
    { return 'A'; }
    else if( std::string::npos != puerto->find("B") ||
             std::string::npos != puerto->find("b"))
    { return 'B'; }
    else if( std::string::npos != puerto->find("C") ||
             std::string::npos != puerto->find("c"))
    { return 'C'; }
    return 0;
}

string* DeclaracionUtilizar::obtenerCodigo()
{
    return this->codigo;
}
