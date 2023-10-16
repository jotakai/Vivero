#include <cstring> 
#include<iostream>
using namespace std;

#include "Empresa.h"
#include"FuncionesGlobales.h"

const char * Empresa::getNombre() const {
    return _nombre;
}

int Empresa::getCUIT(){
    return _cuit;
}

void Empresa:: setNombre(const char *nombre){
    strcpy(_nombre,nombre);
}

void Empresa:: setCUIT(int cuit){
    _cuit=cuit;
}

void Empresa::Cargar(){
    cout<<"Ingrese nombre= ";
    cargarCadena(_nombre,30);
    cout<<"Ingrese cuit= ";
    cin>>_cuit;
}

void Empresa::Mostrar(){
    cout<<"Su Nombre es: "<<_nombre<<endl;
    cout<<"Su Cuit es: "<<_cuit<<endl;
}

Empresa::Empresa(){

}

Empresa::Empresa(const char *nombre,int cuit){
    setNombre(nombre);
    setCUIT(cuit);
}