#include<iostream>
using namespace std;
#include"StockHerramientas.h"

StockHerramientas::StockHerramientas()
{
     int _capacidad=0;
    int _id=0;
}
void StockHerramientas::setID(int id){
  _id=id;
}

void StockHerramientas::setHerramienta(Herramienta herramienta){
    _herramienta=herramienta;
}

void StockHerramientas::setCapacidad(int capacidad){
    _capacidad=capacidad;
}

void StockHerramientas::setEstado(bool estado){
    _estado=estado;
}

int StockHerramientas::getID(){
    return _id;
}

Herramienta StockHerramientas::getHerramienta(){
    return _herramienta;
}

int StockHerramientas::getCapacidad(){
    return _capacidad;
}

bool StockHerramientas::getEstado(){
    return _estado;
}
void StockHerramientas::CargarRegistro(){
    
int capacidad=0;

_id++;
_herramienta.Cargar();
cout<<"Cantidad  que ingresa de un mismo articulo: "<<endl;
cin>>capacidad;
setCapacidad(capacidad);
_estado=1;
}
void StockHerramientas::MostrarRegistro(){
    cout<<"ID: "<<getID();
_herramienta.Mostrar();
cout<<"Capacidad: "<<_capacidad<<endl;
}

void StockHerramientas::AumentarCapacidad(int cantidad)
{
      _capacidad=_capacidad+cantidad;
}
// void StockHerramientas::Mostrar(){

// cout<<"Capacidad"<< _capacidad <<endl;
// cout<<""<< <<endl;
// cout<<""<< <<endl;
// cout<<""<< <<endl;
// cout<<""<< <<endl;

// }
