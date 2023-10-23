#pragma once
#include "Planta.h"

#include <cstring>
class ArchivoStockPlanta
{
private:
    char nombre[30];

public:
    
    ArchivoStockPlanta(const char *n);
    Planta leerRegistro(int);
    bool grabarRegistro(Planta);
    int contarRegistros();
    bool borrarRegistro();
};