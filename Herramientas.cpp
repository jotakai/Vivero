#include<iostream>

using namespace std;

#include "Herramientas.h"
#include"FuncionesGlobales.h"
#include "ArchivoStockHerramienta.h"
//#include"StockHerramientas.h"

void Herramienta:: setIdHerramienta(int id){
    _idHerramienta=id;
} 

void Herramienta:: setNombre(const char*nombre){
    strcpy(_nombre,nombre);
} 

void Herramienta::setPrecio(float precio){
    _precio=precio;
}
    void Herramienta::setStock(int stock)
    {
        _stock=stock;
    }
    int Herramienta:: getStock()
    {
        return _stock;
    }
int Herramienta::getIdHerramienta() const{
return _idHerramienta;
}

const char * Herramienta::getNombre() const{
    return _nombre;
} 

float Herramienta::getPrecio() const{
    return _precio;
} 
bool Herramienta::getEstado() const
{return _estado;}
void Herramienta::setEstado(bool estado)
{
    _estado=estado;
}



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
void Herramienta::Cargar(int nroUltimoRegistro ){


    cout<<"Id Herramienta: "<<nroUltimoRegistro+1<<endl;
    setIdHerramienta(nroUltimoRegistro+1);
    
     cout<<"Ingrese Nombre= ";
    cargarCadena(_nombre,30);
    cout<<"Ingrese Precio= ";
    cin>>_precio;
}

void Herramienta::Mostrar(){
    cout<<"Su Codigo Herramienta es: "<<_idHerramienta<<endl;
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