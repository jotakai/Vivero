#include <iostream>
#include <string>

using namespace std;

#include "Sujeto.h"
#include"FuncionesGlobales.h"

Sujeto::Sujeto(){
    
}

Sujeto::Sujeto(std::string nombre, std::string apellido, int edad){
    _nombre = nombre;
    _apellido = apellido;
    _edad = edad;
}

Sujeto::~Sujeto(){

}

std::string Sujeto::getNombre(){
    return _nombre;
}

std::string Sujeto::getApellido(){
    return _apellido;
}

int Sujeto::getEdad(){
    return _edad;
}

void Sujeto::setNombre(std::string nombre){
    _nombre = nombre;
}

void Sujeto::setApellido(std::string apellido){
    _apellido = apellido;
}

void Sujeto::setEdad(int edad){
    _edad = edad;
}

void Sujeto::Cargar(){
    cout<<"Ingrese Nombre = ";
    getline(cin,_nombre);
    cout<<"Ingrese Apellido= ";
    getline(cin,_apellido);
    cout<<"Ingrese Edad = ";
    cin>>_edad;
}

void Sujeto::Mostrar(){
    cout<<"Su Nombre es: "<<_nombre<<endl;
    cout<<"Su Apellido es: "<<_apellido<<endl;
    cout<<"Su Edad es: "<<_edad<<endl;
}
