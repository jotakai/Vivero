#include<iostream>

using namespace std;

#include"Venta.h"

int Venta::getid() const 
{
return _id;
}
void Venta::setId(int id){
_id = id;
}

Fecha Venta::getFecha(){
return _fechaVenta;
}

Planta Venta::SetPlanta(){
return _PlantaVenta;
}

Cliente Venta::SetCliente(){
return _ClienteVenta;
}