#include<iostream>

using namespace std;
#include "StockPlanta.h"

void StockPlanta::setID(int id){
    _id=id;
}

int StockPlanta::getID(){
    return _id;
}

void StockPlanta::setPlanta(Planta planta){
    _planta=planta;
}

Planta StockPlanta::getPlanta(){
    return _planta;
}

void StockPlanta::setCapacidad(int cantidad){
    _capacidad=cantidad;
}

int StockPlanta::getCapacidad(){
    return _capacidad;
}

void StockPlanta::setEstado(bool estado){
    _estado=estado;
}

bool StockPlanta::getEstado(){
    return _estado;
}

void StockPlanta::AumentarCapacidad(int cantidad){
    _capacidad=_capacidad+cantidad;
}

void StockPlanta::DisminuirCapacidad(int cantidad){
    _capacidad=_capacidad-cantidad;
}

void StockPlanta::CargarRegistro(int tam){
_planta.Cargar();
setCapacidad(tam);
_estado=1;
}

void StockPlanta::MostrarRegistro(){
_planta.Mostrar();
cout<<"Capacidad: "<<_capacidad<<endl;
}