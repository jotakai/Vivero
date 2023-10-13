#include <iostream>

using namespace std;

#include "Direccion.h"
#include"FuncionesGlobales.h"

const char * Direccion:: getID(){
return _id;
}
int Direccion:: getCodigoPostal(){
return _codigoPostal;
}
const char * Direccion :: getCalle ()
{
    return _calle;
}
const char * Direccion::getCiudad (){
    return _ciudad;
}
const char *Direccion::getProvincia (){
    return _provincia;
}
const char *Direccion::getNumeroCalle (){
    return _numeroCalle;
}
void Direccion:: setID (const char *id)
{
    strcpy(_id,id);
}
void Direccion:: setCodigoPostal (int codigoPostal)
{
    _codigoPostal=codigoPostal;
}
void Direccion:: setCalle (const char *calle)
{
    strcpy(_calle,calle);
}
void Direccion:: setCiudad (const char * ciudad)
{
   strcpy(_ciudad,ciudad);
}
void Direccion:: setProvincia(const char *provincia){
   strcpy(_provincia,provincia);
}
void Direccion:: setNumeroCalle(const char *numeroCalle){
   strcpy(_numeroCalle,numeroCalle);
}
void Direccion::Cargar(){

cout<<"Ingrese ID= ";
cargarCadena(_id,50);
cout<<"Ingrese Codigo Postal= ";
cin>>_codigoPostal;
cout<<"Ingrese Calle= ";
cargarCadena(_calle,50);
cout<<"Ingrese Ciudad= ";
cargarCadena(_ciudad,50);
cout<<"Ingrese Provincia= ";
cargarCadena(_provincia,50);
cout<<"Ingrese Numero de Calle= ";
cargarCadena(_numeroCalle,50);


}

void Direccion::Mostrar(){
cout<<"Su ID es: "<<_id<<endl;
cout<<"Su Codigo Postal es: "<<_codigoPostal<<endl;
cout<<"Su Calle es: "<<_calle<<endl;
cout<<"Su Ciudad es: "<<_ciudad<<endl;
cout<<"Su Provincia es: "<<_provincia<<endl;
cout<<"Su Numero de Calle es: "<<_numeroCalle<<endl;
}

Direccion::Direccion(){

}

Direccion::Direccion(const char *id,int codigoPostal,const char *calle,const char *ciudad,const char *provincia,const char *numeroCalle){
setID(id);
setCodigoPostal(codigoPostal);
setCalle(calle);
setCiudad(ciudad);
setProvincia(provincia);
setNumeroCalle(numeroCalle);
}
