#include <iostream>
#include <string>

#include "Persona.h"
#include "Cliente.h"


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

Cliente::~Cliente()
{
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
