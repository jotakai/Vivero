#include <iostream>
#include <cstring>
#include <string>
#include "Planta.h"

using namespace std;

Planta::Planta()
{
    strcpy(_nombre, "");
    strcpy(_estacion, "");
    _idPlanta = -1;
}

Planta::Planta(std::string nombre, std::string estacion)
{
    strcpy(_nombre, nombre.c_str());
    strcpy(_estacion, estacion.c_str());
}

Planta::~Planta()
{
}

std::string Planta::getNombre()
{
    return _nombre;
}

std::string Planta::getEstacion()
{
    return _estacion;
}

void Planta::setNombre(std::string nombre)
{
    strcpy(_nombre, nombre.c_str());
}

void Planta::setEstacion(std::string estacion)
{
    strcpy(_estacion, estacion.c_str());
}

void Planta::setPrecio(float precio)
{
    _precio = precio;
}

float Planta::getPrecio()
{
    return _precio;
}

void Planta::setCodigoPlanta(int idPlanta)
{
    _idPlanta = idPlanta;
}

float Planta::getCodigoPlanta()
{
    return _idPlanta;
}
int Planta::getStock()
{
    return _stock;
}
void Planta::setStock(int stock)
{
    _stock = stock;
}
void Planta::setEstado(bool estado)
{
    _estado = estado;
}
bool Planta::getEstado()
{
    return _estado;
}
void Planta::Cargar(int nroUltimoRegistro)
{
    string nombre, estacion;
    float precio;
    int stock;
    cout<<"ID: "<<nroUltimoRegistro+1<<endl;
    setCodigoPlanta(nroUltimoRegistro);
    cout << "Ingrese Nombre = ";
    cin >> nombre;
    setNombre(nombre);
    cout << "Ingrese Estacion = ";
    cin >> estacion;
    setEstacion(estacion);
    cout << "Ingrese Stock = ";
    cin >> stock;
    setStock(stock);
    cout << "Precio: " << endl;
    cin >> precio;
    setPrecio(precio);
    setEstado(1);
}

void Planta::Mostrar()
{
    cout << " Id: " << _idPlanta+1<< endl;
    cout << " Nombre : " << _nombre << endl;
    cout << " Estacion: " << _estacion << endl;
    cout << " Precio: " << _precio << endl;
    cout << " Stock: " << _stock << endl;
}