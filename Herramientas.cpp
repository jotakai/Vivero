#include "Herramientas.h"
void Herramienta:: setId(int id){
_id=id;

} 
void Herramienta:: setNombre(const char*nombre)
{
    strcpy(_nombre,nombre);
} 
void Herramienta::setPrecio(float precio)
{
    _precio=precio;
}
void Herramienta::setEstado(bool estado)
{
_estado=estado;
}
int Herramienta::getId() const
{
return _id;
}
const char * Herramienta::getNombre() const
{
    return _nombre;
} 
float Herramienta::getPrecio() const
{
    return _precio;
} 
bool Herramienta:: getEstado() const{
    return _estado;
}

