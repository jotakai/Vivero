#pragma once
#include "StockPlanta.h"

#include <cstring>
class ArchivoStockPlanta
{
private:
    char nombre[30];

public:
    void CargarRegistro();
    ArchivoStockPlanta(const char *n);
    StockPlanta leerRegistro(int);
    bool grabarRegistro(StockPlanta);
    int contarRegistros();
};