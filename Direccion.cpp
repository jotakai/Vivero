
#include "Direccion.h"

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