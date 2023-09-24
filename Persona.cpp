#include <iostream>
#include <string>


#include "Persona.h"

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
