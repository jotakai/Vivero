#include<iostream>

using namespace std;

#include "Herramientas.h"
#include"FuncionesGlobales.h"

void Herramienta:: setId(int id){
    _id=id;
} 

void Herramienta:: setNombre(const char*nombre){
    strcpy(_nombre,nombre);
} 

void Herramienta::setPrecio(float precio){
    _precio=precio;
}

int Herramienta::getId() const{
return _id;
}

const char * Herramienta::getNombre() const{
    return _nombre;
} 

float Herramienta::getPrecio() const{
    return _precio;
} 


void Herramienta::Cargar(){
    cout<<"Ingrese ID= ";
    cin>>_id;
    cout<<"Ingrese Nombre= ";
    cargarCadena(_nombre,30);
    cout<<"Ingrese Precio= ";
    cin>>_precio;
}

void Herramienta::Mostrar(){
    cout<<"Su ID es: "<<_id<<endl;
    cout<<"Su Nombre es: "<<_nombre<<endl;
    cout<<"Su Precio es: "<<_precio<<endl;
}

Herramienta::Herramienta(int id,const char* nombre,float precio,bool estado){

}

Herramienta::Herramienta(/* args */){
    _id=_id+1;
}

Herramienta::~Herramienta(){
}