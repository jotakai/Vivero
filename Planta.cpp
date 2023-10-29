#include <iostream>
#include <cstring>
#include <string>

using namespace std;
#include "FuncionesGlobales.h"
#include "Planta.h"



Planta::Planta()
{
   
}

Planta::Planta( std::string estacion)
{
    
    strcpy(_estacion, estacion.c_str());
}

Planta::~Planta()
{
}


const char * Planta::getEstacion()
{
    return _estacion;
}

void Planta::setEstacion(const char *estacion)
{
    strcpy(_estacion, estacion);
}


void Planta::Cargar(int nroUltimoRegistro)
{
    char estacion[30];
     Articulo::Cargar(nroUltimoRegistro);
    cout << "Ingrese Estacion = ";
    cargarCadena(estacion,30);
    setEstacion(estacion);

}

void Planta::Mostrar()
{
 Articulo::Mostrar();
 cout<<"Estacion: "<<_estacion<<endl;

}