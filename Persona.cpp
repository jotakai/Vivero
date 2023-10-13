#include <iostream>
#include <string>

using namespace std;

#include "Persona.h"
#include"FuncionesGlobales.h"

Persona::Persona(){
    _nombre = "";
    _apellido = "";
    _edad = 0;
}

Persona::Persona(std::string nombre, std::string apellido, int edad)
{
    _nombre = nombre;
    _apellido = apellido;
    _edad = edad;
}

Persona::~Persona(){

}

std::string Persona::getNombre(){
    return _nombre;
}

std::string Persona::getApellido(){
    return _apellido;
}

int Persona::getEdad(){
    return _edad;
}

void Persona::setNombre(std::string nombre){
    _nombre = nombre;
}

void Persona::setApellido(std::string apellido){
    _apellido = apellido;
}

void Persona::setEdad(int edad){
    _edad = edad;
}

void Persona::Cargar(){
cout<<"Ingrese Nombre = ";
getline(cin,_nombre);
cout<<"Ingrese Apellido= ";
getline(cin,_apellido);
cout<<"Ingrese Edad = ";
cin>>_edad;
}

void Persona::Mostrar(){
cout<<"Su Nombre es: "<<_nombre<<endl;
cout<<"Su Apellido es: "<<_apellido<<endl;
cout<<"Su Edad es: "<<_edad<<endl;
}
