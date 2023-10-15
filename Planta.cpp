#include <iostream>
#include <string>
#include "Planta.h"

using namespace std;

Planta::Planta(){
    _nombre = "";
    _especie = "";
    _edad = 0;
}

Planta::Planta(std::string nombre, std::string especie, int edad)
{
    _nombre = nombre;
    _especie = especie;
    _edad = edad;
}

Planta::~Planta(){

}

std::string Planta::getNombre(){
    return _nombre;
}

std::string Planta::getEspecie(){
    return _especie;
}

int Planta::getEdad(){
    return _edad;
}

void Planta::setNombre(std::string nombre){
    _nombre = nombre;
}

void Planta::setEspecie(std::string especie){
    _especie = especie;
}

void Planta::setEdad(int edad){
    _edad = edad;
}
void Planta::Cargar(){
cin.ignore();
cout<<"Ingrese Nombre = ";
getline(cin,_nombre);
cout<<"Ingrese Especie = ";
getline(cin,_especie);
cout<<"Ingrese Edad = ";
cin>>_edad;
}

void Planta::Mostrar(){
cout<<"Su Nombre es: "<<_nombre<<endl;
cout<<"Su Especie es: "<<_especie<<endl;
cout<<"Su Edad es: "<<_edad<<endl;
}