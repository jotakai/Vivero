#include <iostream>
#include <string>
#include "Planta.h"

using namespace std;

Planta::Planta(){
    _nombre = "";
    _especie = "";
    _codigoPlanta=-1;
    
}

Planta::Planta(std::string nombre, std::string especie)
{
    _nombre = nombre;
    _especie = especie;
   
}

Planta::~Planta(){

}

std::string Planta::getNombre(){
    return _nombre;
}

std::string Planta::getEspecie(){
    return _especie;
}



void Planta::setNombre(std::string nombre){
    _nombre = nombre;
}

void Planta::setEspecie(std::string especie){
    _especie = especie;
}
void Planta::setPrecio(float precio){
_precio=precio;
}
float Planta::getPrecio(){
return _precio;
}
void Planta::setCodigoPlanta(float codigoPlanta){
_codigoPlanta=codigoPlanta;
}
float Planta::getCodigoPlanta(){
return _codigoPlanta;
}

void Planta::Cargar(){
cin.ignore();
cout<<"Ingrese Nombre = ";
getline(cin,_nombre);
cout<<"Ingrese Especie = ";
getline(cin,_especie);
_codigoPlanta++;

}

void Planta::Mostrar(){
cout<<"Su Nombre es: "<<_nombre<<endl;
cout<<"Su Especie es: "<<_especie<<endl;

}