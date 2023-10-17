#include <iostream>
#include <cstring>
#include <string>
#include "Planta.h"

using namespace std;

Planta::Planta(){
    strcpy(_nombre,"");
    strcpy(_estacion,"");
    _codigoPlanta=-1;
    
}

Planta::Planta(std::string nombre, std::string estacion){ 
    strcpy(_nombre,nombre.c_str());
    strcpy(_estacion,estacion.c_str());
}

Planta::~Planta(){

}

std::string Planta::getNombre(){
    return _nombre;
}

std::string Planta::getEstacion(){
    return _estacion;
}



void Planta::setNombre(std::string nombre){
    strcpy(_nombre,nombre.c_str());
}

void Planta::setEstacion(std::string estacion){
    strcpy(_estacion,estacion.c_str());
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
    string nombre,estacion;
    cout<<"Ingrese Nombre = ";
    cin>>nombre;
    setNombre(nombre);
    cout<<"Ingrese Estacion = ";
    cin>>estacion;
    setEstacion(estacion);
    _codigoPlanta++;
}

void Planta::Mostrar(){
    cout<<"Su Nombre es: "<<_nombre<<endl;
    cout<<"Su Estacion es: "<<_estacion<<endl;
}