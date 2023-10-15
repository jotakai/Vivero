#include <iostream>

using namespace std;

#include "Venta.h"

int Venta::getid() const
{
    return _id;
}
void Venta::setId(int id)
{
    _id = id;
}

Fecha Venta::getFecha() const
{
    return _fechaVenta;
}
void Venta::setFecha(Fecha fechaventa) 
{
_fechaVenta=fechaventa;
}

void Venta::SetPlanta(Planta planta)
{
    //_PlantaVenta
    _PlantaVenta = planta;
}
Planta Venta::getPlanta()
{
    return _PlantaVenta;
}

void Venta::setCliente(Cliente cli)
{
    //_ClienteVenta
    _ClienteVenta = cli;
}
Cliente Venta::getCliente()
{
    return _ClienteVenta;
}
void Venta::setImporte(float importe)
{
    _importe = importe;
}
float Venta::getImporte()
{
    return _importe;
}   