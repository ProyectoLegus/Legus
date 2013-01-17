#-------------------------------------------------
#
# Project created by QtCreator 2012-11-27T14:18:04
#
#-------------------------------------------------

QT       += core gui

TARGET = Legus
TEMPLATE = app

SOURCES += main.cpp\
        editor.cpp \
    tokens.cpp \
    parser.cpp \
    Expresion.cpp \
    ExpresionBinaria.cpp \
    ExpresionBinariaModulo.cpp \
    ExpresionBinariaDivision.cpp \
    ExpresionBinariaMultiplicacion.cpp \
    ExpresionBinariaResta.cpp \
    ExpresionBinariaSuma.cpp \
    ExpresionUnaria.cpp \
    ExpresionBinariaExponenciacion.cpp \
    ExpresionBinariaDivisionEntera.cpp \
    ExpresionBinariaMayor.cpp \
    ExpresionBinariaMenor.cpp \
    ExpresionBinariaMayorIgual.cpp \
    ExpresionBinariaMenorIgual.cpp \
    ExpresionBinariaIgualdad.cpp \
    ExpresionBinariaDistinto.cpp \
    ExpresionBinariaY.cpp \
    ExpresionBinariaO.cpp \
    ExpresionLiteralBooleana.cpp \
    ExpresionLiteralCaracter.cpp \
    ExpresionLiteralFlotante.cpp \
    ExpresionLiteralEntera.cpp \
    ExpresionLiteralCadena.cpp \
    ExpresionUnariaNegacion.cpp \
    ExpresionUnariaNegativo.cpp \
    Tipo.cpp \
    TipoBooleano.cpp \
    TipoCaracter.cpp \
    TipoFlotante.cpp \
    TipoEntero.cpp \
    TipoCadena.cpp \
    Instruccion.cpp \
    InstruccionSi.cpp \
    InstruccionCaso.cpp \
    InstruccionMientras.cpp \
    InstruccionPara.cpp \
    InstruccionRepetir.cpp \
    InstruccionAsignacion.cpp \
    InstruccionRepitaDesde.cpp \
    InstruccionParaCada.cpp \
    InstruccionRepita.cpp \
    Lista.cpp \
    InstruccionLlamadaAFuncion.cpp \
    InstruccionRetornar.cpp \
    Variable.cpp \
    VariableArreglo.cpp \
    VariableFuncion.cpp \
    ListaDeCaso.cpp \
    TablaDeFunciones.cpp \
    DeclaracionDeFuncion.cpp \
    Programa.cpp \
    DeclaracionUtilizar.cpp \
    VariablePuerto.cpp \
    VariableSensor.cpp \
    EntradaSimbolo.cpp \
    VariableDeclarada.cpp \
    GeneradorDeErrores.cpp \
    ExcepcionLegus.cpp \
    TipoArreglo.cpp

HEADERS  += editor.h \
    tokens.h \
    parser.h \
    Expresion.h \
    ExpresionBinaria.h \
    ExpresionBinariaModulo.h \
    ExpresionBinariaDivision.h \
    ExpresionBinariaMultiplicacion.h \
    ExpresionBinariaResta.h \
    ExpresionBinariaSuma.h \
    ExpresionUnaria.h \
    ExpresionBinariaExponenciacion.h \
    ExpresionBinariaDivisionEntera.h \
    ExpresionBinariaMayor.h \
    ExpresionBinariaMenor.h \
    ExpresionBinariaMayorIgual.h \
    ExpresionBinariaMenorIgual.h \
    ExpresionBinariaIgualdad.h \
    ExpresionBinariaDistinto.h \
    ExpresionBinariaY.h \
    ExpresionBinariaO.h \
    ExpresionLiteralBooleana.h \
    ExpresionLiteralCaracter.h \
    ExpresionLiteralFlotante.h \
    ExpresionLiteralEntera.h \
    ExpresionLiteralCadena.h \
    ExpresionUnariaNegacion.h \
    ExpresionUnariaNegativo.h \
    Tipo.h \
    TipoBooleano.h \
    TipoCaracter.h \
    TipoFlotante.h \
    TipoEntero.h \
    TipoCadena.h \
    Instruccion.h \
    InstruccionSi.h \
    InstruccionCaso.h \
    InstruccionMientras.h \
    InstruccionPara.h \
    InstruccionRepetir.h \
    InstruccionAsignacion.h \
    InstruccionRepitaDesde.h \
    InstruccionParaCada.h \
    InstruccionRepita.h \
    ParserImports.h \
    Lista.h \
    InstruccionLlamadaAFuncion.h \
    InstruccionRetornar.h \
    Variable.h \
    VariableArreglo.h \
    VariableFuncion.h \
    ListaDeCaso.h \
    TablaDeFunciones.h \
    DeclaracionDeFuncion.h \
    Programa.h \
    DeclaracionUtilizar.h \
    VariablePuerto.h \
    VariableSensor.h \
    EntradaSimbolo.h \
    VariableDeclarada.h \
    GeneradorDeErrores.h \
    ExcepcionLegus.h \
    TipoArreglo.h

FORMS    += editor.ui

OTHER_FILES += \
    parser.y \
    tokens.l
