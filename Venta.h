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
float _importe;

public:

Fecha getFecha() const;
void setFecha(Fecha);
void SetPlanta(Planta);
Planta getPlanta();
Cliente getCliente();

void setCliente(Cliente cli);
int getid() const ;
void setId(int id);
void setImporte(float);
float getImporte();





};