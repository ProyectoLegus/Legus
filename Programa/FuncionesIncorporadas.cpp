#include "Programa/FuncionesIncorporadas.h"

FuncionesIncorporadas::FuncionesIncorporadas()
{
}

map<string, vector<Funcion*>*>* FuncionesIncorporadas::obtenerFuncionesIncorporadas()
{
    /*¿Como manejar el tipo de retorno? ... Like a Boss!*/

    map<string, vector<Funcion*>*> *funcionesIncorporadas = new map<string, vector<Funcion*>*>();

    /*No retornan nada!*/
    /*Escriba!*/
    vector<Funcion*>* escriba = new vector<Funcion*>();
    escriba->push_back( new Funcion( 0, obtenerVectorParametros(1, TEntero)));
    escriba->push_back( new Funcion( 0, obtenerVectorParametros(1, TFlotante)));
    escriba->push_back( new Funcion( 0, obtenerVectorParametros(1, TCaracter)));
    escriba->push_back( new Funcion( 0, obtenerVectorParametros(1, TCadena)));
    escriba->push_back( new Funcion( 0, obtenerVectorParametros(1, TBooleano)));
    (*funcionesIncorporadas)["escriba"] = escriba;
    //funcionesIncorporadas->operator []("escriba") = escriba;
    /*Con Retorno*/
    /*Leer*/

    /*********************************************************************************/

    /*Lego NXT*/
    /*Funciones incorporadas para LCD*/
    vector<Funcion*> *limpiarPantalla = new vector<Funcion*>();
    limpiarPantalla->push_back( new Funcion(0 , obtenerVectorParametros(0) ) );
    (*funcionesIncorporadas)["limpiar_pantalla"] = limpiarPantalla;

    /*Funciones Incorporadas para MOTORES*/
    /*Adelante*/
    vector<Funcion*> *adelante = new vector<Funcion*>();
    adelante->push_back( new Funcion(0 , obtenerVectorParametros(1, TMotor)) );
    (*funcionesIncorporadas)["adelante"] = adelante;

    /*Atras*/
    vector<Funcion*> *atras = new vector<Funcion*>();
    atras->push_back( new Funcion(0 , obtenerVectorParametros(1, TMotor)) );
    (*funcionesIncorporadas)["atras"] = atras;

    /*Detener*/
    vector<Funcion*> *detener = new vector<Funcion*>();
    detener->push_back( new Funcion(0 , obtenerVectorParametros(1, TMotor)) );
    (*funcionesIncorporadas)["detener"] = detener;

    /*RotarMotor*/
    vector<Funcion*> *rotarMotor = new vector<Funcion*>();
    rotarMotor->push_back( new Funcion(0 , obtenerVectorParametros(2, TMotor, TEntero)) );
    (*funcionesIncorporadas)["rotar_motor"] = rotarMotor;

    /*RotarMotorHacia*/
    vector<Funcion*> *rotarMotorHacia = new vector<Funcion*>();
    rotarMotorHacia->push_back( new Funcion(0 , obtenerVectorParametros(2, TMotor, TEntero)) );
    (*funcionesIncorporadas)["rotar_motor_hacia"] = rotarMotorHacia;

    /*Establecer Velocidad*/
    vector<Funcion*> *establecerVelocidad = new vector<Funcion*>();
    establecerVelocidad->push_back( new Funcion(0 , obtenerVectorParametros(2, TMotor, TEntero)) );
    (*funcionesIncorporadas)["establecer_velocidad"] = establecerVelocidad;

    /*Obtener Angulo*/
    vector<Funcion*> *obtenerAngulo = new vector<Funcion*>();
    obtenerAngulo->push_back( new Funcion( obtenerTipo(TEntero) , obtenerVectorParametros(1, TMotor)) );
    (*funcionesIncorporadas)["obtener_angulo"] = obtenerAngulo;

    /*Obtener Velocidad*/
    vector<Funcion*> *obtenerVelocidad = new vector<Funcion*>();
    obtenerVelocidad->push_back( new Funcion( obtenerTipo(TEntero) , obtenerVectorParametros(1, TMotor)) );
    (*funcionesIncorporadas)["obtener_velocidad"] = obtenerVelocidad;

    /*EstaEnMovimiento*/
    vector<Funcion*> *estaEnMovimiento = new vector<Funcion*>();
    estaEnMovimiento->push_back( new Funcion( obtenerTipo(TBooleano), obtenerVectorParametros(1, TMotor)) );
    (*funcionesIncorporadas)["esta_en_movimiento"] =    estaEnMovimiento;

//    /*EstaRotando*/
//    vector<Funcion*> *estaRotando = new vector<Funcion*>();
//    estaRotando->push_back( new Funcion( obtenerTipo(TBooleano) , obtenerVectorParametros(1, TMotor)) );
//    (*funcionesIncorporadas)["esta_rotando"] = estaRotando;

    /*Bloquear*/
    vector<Funcion*> *bloquear = new vector<Funcion*>();
    bloquear->push_back( new Funcion(0 , obtenerVectorParametros(2, TMotor, TEntero)) );
    (*funcionesIncorporadas)["bloquear"] = bloquear;

//    /*InvertirDireccion*/
//    vector<Funcion*> *invertirDireccion = new vector<Funcion*>();
//    invertirDireccion->push_back( new Funcion(0 , obtenerVectorParametros(1, TMotor)) );
//    (*funcionesIncorporadas)["invertir_direccion"] = invertirDireccion;

    /*EsperarCompletacion???*/

    /*Funciones Incorporadas para SENSORES*/


    return funcionesIncorporadas;
}

vector<TipoParametro>* FuncionesIncorporadas::obtenerVectorParametros(int cantidadArgumentos, ...)
{
    vector<TipoParametro>* vect = new vector<TipoParametro>();

    if( cantidadArgumentos == 0)
    {
        return vect;
    }

    va_list argumentos;
    va_start(argumentos, cantidadArgumentos);

    for(int i=0; i<cantidadArgumentos; i++)
    {
        /*Esta onda esta bien QtCreator es el loco*/
        int tParametro= va_arg(argumentos, int );
        vect->push_back((TipoParametro)tParametro);
    }
    va_end(argumentos);
    return vect;
}

Tipo* FuncionesIncorporadas::obtenerTipo(TipoParametro tipoParam)
{
    if(tipoParam == TEntero)
    {
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }
    else if( tipoParam == TFlotante)
    {
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }
    else if( tipoParam == TCadena)
    {
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }
    else if(tipoParam == TCaracter)
    {
        return Programa::obtenerInstancia()->obtenerTipoCaracter();
    }
    else if(tipoParam == TBooleano)
    {
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }
    return 0;
}

/*
CODIGO MOTORES
        public static void adelante(NXTRegulatedMotor m){m.forward();}
        public static void atras(NXTRegulatedMotor m){m.backward();}
        public static void detener(NXTRegulatedMotor m){m.stop();}
        public static void rotar_motor(NXTRegulatedMotor m,int r){m.rotate(r);}
        public static void rotar_motor_hacia(NXTRegulatedMotor m,int r){m.rotateTo(r);}
        public static void establecer_velocidad(NXTRegulatedMotor m,int v){m.setSpeed(v)}
        public static int obtener_angulo(NXTRegulatedMotor m){return m.getLimitAngle();}
        public static int obtener_velocidad(NXTRegulatedMotor m){return m.getSpeed();}
        public static boolean esta_en_movimiento(NXTRegulatedMotor m){return m.isMoving();}
        public static void bloquear(NXTRegulatedMotor m,int p){m.lock(p);}
*/
