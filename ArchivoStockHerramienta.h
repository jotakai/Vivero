#pragma once

#include "StockHerramientas.h"
#include"Herramientas.h"
class ArchivoStockHerramienta
{
private:
    char _nombre[30];

public:
    void CargarRegistro();
    ArchivoStockHerramienta(const char *n);
    StockHerramientas leerRegistro(int);
    bool grabarRegistro(StockHerramientas);
    int contarRegistros();
    bool borrarRegistro();
    bool reemplazarRegistroCompra(StockHerramientas reg, int posicionAReemplazar);
};