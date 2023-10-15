#pragma once
#include "StockPlanta.h"

#include <cstring> 
class ArchivoStock{
private:
    char nombre[30];
public:
    ArchivoStock(const char *n);
    StockPlanta leerRegistro(int );
    bool grabarRegistro(StockPlanta);
    int contarRegistros();

};