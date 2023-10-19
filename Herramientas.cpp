#include<iostream>

using namespace std;

#include "Herramientas.h"
#include"FuncionesGlobales.h"
#include "ArchivoStockHerramienta.h"
#include"StockHerramientas.h"

void Herramienta:: setCodigoHerramienta(int codigoHerramienta){
    _codigoHerramienta=codigoHerramienta;
} 

void Herramienta:: setNombre(const char*nombre){
    strcpy(_nombre,nombre);
} 

void Herramienta::setPrecio(float precio){
    _precio=precio;
}

int Herramienta::getCodigoHeramienta() const{
return _codigoHerramienta;
}

const char * Herramienta::getNombre() const{
    return _nombre;
} 

float Herramienta::getPrecio() const{
    return _precio;
} 


void Herramienta::Cargar(){

///////////////////////////////////////////////////////////////
////ahi que hacer un leer registro, para asignarle a _id lo que tiene el ultimo registro del archivo
//
//ArchivoStockHerramienta ClassAr("herramienta.dat");
//StockHerramientas ClassP;
//
//int tamID;
//
//tamID=ClassAr.contarRegistros();
//ClassP = ClassAr.leerRegistro(tamID);
//_id=ClassP.getID();
///////////////////////////////////////////////////////////////

  
    cout<<"CODIGO HERRAMIENTA: "<<endl;
    cin>>_codigoHerramienta;
    cout<<"Ingrese Nombre= ";
    cargarCadena(_nombre,30);
    cout<<"Ingrese Precio= ";
    cin>>_precio;
}

void Herramienta::Mostrar(){
    cout<<"Su Codigo Herramienta es: "<<_codigoHerramienta<<endl;
    cout<<"Su Nombre es: "<<_nombre<<endl;
    cout<<"Su Precio es: "<<_precio<<endl;
}

Herramienta::Herramienta(int id,const char* nombre,float precio,bool estado){

}

Herramienta::Herramienta(/* args */){
   // _id=_id+1;
}

Herramienta::~Herramienta(){
}