#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#include "Persona.h"
#include "Proveedor.h"
#include"FuncionesGlobales.h"

const char * Proveedor::getID(){
    return _id;
}

void Proveedor:: setID (const char *id)
{
    strcpy(_id,id);
}

int Proveedor::getcuit(){
    return _cuit;
}

void Proveedor::setcuit (int cuit){
    _cuit=cuit;
}

void Proveedor::Cargar(){
    cout<<"Ingrese ID= ";
    cargarCadena(_id,50);
    cout<<"Ingrese Cuit= ";
    cin>>_cuit;
}
void Proveedor::Mostrar(){
    cout<<"Su ID es: "<<_id<<endl;
    cout<<"Su Cuit es: "<<_cuit<<endl;
}
Proveedor::Proveedor(){

}

Proveedor::Proveedor(const char *id,int cuit){
    setID(id);
    setcuit(cuit);
}