#include <iostream>
#include <cstring>
#include <string>
#include "Planta.h"

using namespace std;

Planta::Planta(){
    strcpy(_nombre,"");
    strcpy(_especie,"");
    _codigoPlanta=-1;
    
}

Planta::Planta(std::string nombre, std::string especie)
{ strcpy(_nombre,nombre.c_str());
    strcpy(_especie,especie.c_str());
   
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
    strcpy(_nombre,nombre.c_str());
}

void Planta::setEspecie(std::string especie){
       strcpy(_especie,especie.c_str());

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
string nombre,especie;
cout<<"Ingrese Nombre = ";
cin>>nombre;
setNombre(nombre);
cout<<"Ingrese Especie = ";
cin>>especie;
setEspecie(especie);
_codigoPlanta++;

}

void Planta::Mostrar(){
cout<<"Su Nombre es: "<<_nombre<<endl;
cout<<"Su Especie es: "<<_especie<<endl;

}