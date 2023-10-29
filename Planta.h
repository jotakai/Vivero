#pragma once
#include <string>
#include "Articulo.h"

class Planta : public Articulo 
{
public:
    Planta();
    Planta(std::string estacion);
    ~Planta();
    void setEstacion(const char *);
    const char *getEstacion();
    void Cargar(int);
    void Mostrar();
   
    

private:

    char  _estacion[30];
    
};