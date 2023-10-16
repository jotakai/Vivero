#include<iostream>
using namespace std;
#include"StockHerramientas.h"


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
// void StockHerramientas::Mostrar(){

// cout<<"Capacidad"<< _capacidad <<endl;
// cout<<""<< <<endl;
// cout<<""<< <<endl;
// cout<<""<< <<endl;
// cout<<""<< <<endl;

// }
