#pragma once

#include "Herramientas.h"
class ArchivoStockHerramienta
{
private:
  char _nombre[30];

public:
  ArchivoStockHerramienta(const char *n);
 Herramienta leerRegistro(int);
  bool grabarRegistro(Herramienta);
  int contarRegistros();
  bool borrarRegistro();
  bool reemplazarRegistroCompra(Herramienta, int posicionAReemplazar);
};