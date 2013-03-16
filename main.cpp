#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>

#include "Bison_Flex/tokens.h"
#include "Bison_Flex/parser.h"
#include "Programa/Programa.h"
#include "Instruccion/Instruccion.h"
#include "Programa/DeclaracionDeFuncion.h"
#include "Programa/ExcepcionLegus.h"
#include <QString>

#include "Programa/GeneradorDeErrores.h"

using namespace std;

extern int yyparse();
extern FILE *yyin;
extern int correlativo;

int main(int argc, char *argv[])
{
    /*
        Utilizacion : legus <opciones> <archivoAcompilar>

        Donde las posibles opciones son:
            -p, --pc      Genera Archivo de Java para pc's
            -n, --nxt     Genera archivo de java para Lejos Virtual Machine

        Codigos de Error:
            1 -> Cantidad incorrecta de argumentos
            2 -> opcion no valida
            3 -> Error de parser
    */
    try
    {
        string nombreArchivo;
        if( argc == 1 || argc > 3  )
        {
            cout <<
                    "Utilizacion: legus <opciones> <archivoACompilar>" << endl
                 <<
                    "Donde las posibles opciones son: " << endl
                 <<
                    "-p, --pc\tGenera archivo de java para pc's" << endl
                 <<
                    "-n, --nxt\tGenera archivo de java para Lejos Virtual Machine"
                 << endl;
            exit(1);
        }

        if( argc == 2)
        {
            // nombreArchivo
            yyin = fopen(argv[1],"rt");
        }
        else
        {
            if( strcmpi(argv[1], "-n")==0 || strcmpi(argv[1],"--nxt")==0)
            {
                Programa::obtenerInstancia()->establecerCompilacionParaNxt();
                nombreArchivo = "nxt.java";
            }
            else if( strcmpi(argv[1], "-p")==0 || strcmpi(argv[1],"--pc")==0)
            {
                Programa::obtenerInstancia()->establecerCompilacionParaPc();
                nombreArchivo = "pc.java";
            }
            else
            {
                cout << "opcion : \"" << argv[1] << "\" no valida";
                exit(2);
            }
            yyin = fopen(argv[2], "rt");
        }

        if( yyin )
        {
            if( yyparse() )
            {
                cout << "Error de analisis" << endl;
                system("pause");
                exit(3);
            }
            else
            {
                cout << "Analisis completado" << endl;
            }
        }
        fclose(yyin);
        Programa::obtenerInstancia()->generarArchivo("nxt");
        cout << "Archivo generado exitosamente" << endl;
        Programa::obtenerInstancia()->limpiarInstancia();
    }
    catch(ExcepcionLegus legusExcep)
    {
        int linea = legusExcep.obtenerNumeroDeLinea();
        cout << legusExcep.obtenerMensaje()
             << "\nAlrededor de la linea: "
             << linea << endl;
    }
    system("pause");
    return 0;
}
