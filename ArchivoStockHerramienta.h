#pragma once


#include"Herramientas.h"
class ArchivoStockHerramienta
{
private:
    char _nombre[30];
    Herramienta h;
public:
  void CargarRegistro();
    ArchivoStockHerramienta(const char *n);
 bool leerRegistro(int);
    bool grabarRegistro();
    int contarRegistros();
    bool borrarRegistro();
    void MostrarRegistro();
    bool reemplazarRegistroCompra(Herramienta reg, int posicionAReemplazar);
};