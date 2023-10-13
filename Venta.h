#pragma once 
#include "Fecha.h"
#include "Planta.h"
#include "Cliente.h"
class Venta{
private:
int _id;
Fecha _fechaVenta;
Planta _PlantaVenta;
Cliente _ClienteVenta;

public:

Fecha getFecha();
Planta SetPlanta();
Cliente SetCliente();
//falta hacer los SetFecha
//falta hacer los SetPlanta
//falta hacer los SetCliente

int getid() const ;
void setId(int id);





};