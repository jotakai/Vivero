#include <iostream>
#include <string>

using namespace std;

#include "Persona.h"
#include "Cliente.h"
#include"FuncionesGlobales.h"

Cliente::Cliente(){
    _direccion = "";
    _telefono = "";
    _mail = "";
}

Cliente::Cliente(std::string nombre, std::string apellido, int edad, std::string direccion, std::string telefono, std::string mail) : Persona(nombre, apellido, edad){
    _direccion = direccion;
    _telefono = telefono;
    _mail = mail;
}

Cliente::~Cliente(){
}

std::string Cliente::getDireccion(){
    return _direccion;
}

std::string Cliente::getTelefono(){
    return _telefono;
}

std::string Cliente::getMail(){
    return _mail;
}

void Cliente::setDireccion(std::string direccion){
    _direccion = direccion;
}

void Cliente::setTelefono(std::string telefono){
    _telefono = telefono;
}

void Cliente::setMail(std::string mail){
    _mail = mail;
}

void Cliente::Cargar(){
    Persona::Cargar();
    cout<<"Ingrese Direccion = ";
    getline(cin,_direccion);
    cout<<"Ingrese Telefono = ";
    getline(cin,_telefono);
    cout<<"Ingrese Mail = ";
    getline(cin,_mail);

}

void Cliente::Mostrar(){
    Persona::Mostrar();
    cout<<"Su Direccion es: "<<_direccion<<endl;
    cout<<"Su Telefono es: "<<_direccion<<endl;
    cout<<"Su Mail es: "<<_mail<<endl;
}