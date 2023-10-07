#include <cstring> 
#include "Empresa.h"
const char * Empresa::getNombre() const {
return _nombre;
}
int Empresa::getCUIT(){
return _cuit;

}
void Empresa::setNombre(const char * nombre){
    strcpy(_nombre,nombre);
}
void Empresa:: setCUIT(int cuit)
{
_cuit=cuit;
}
