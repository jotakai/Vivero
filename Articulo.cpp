#include <iostream>
using namespace std;
#include "FuncionesGlobales.h"
#include "Articulo.h"

Articulo::Articulo()
{
_id=0;
}
int Articulo::getID() const
{
    return _id;
}

void Articulo::setId(int id)
{
    _id = id;
}

void Articulo::setPrecio(float precio)
{
    _precio = precio;
}

float Articulo::getPrecio() const
{
    return _precio;
}

int Articulo::getCategoria() const { return _categoria; }
void Articulo::setCategoria(int categoria)
{
    _categoria = categoria;
}
int Articulo::getStock() const
{
    return _stock;
}
void Articulo::setStock(int stock)
{
    _stock = stock;
}
bool Articulo::getEstado() const { return _estado; }
void Articulo::setEstado(bool estado)
{
    _estado = estado;
}
void Articulo::Cargar(int nroUltimoRegistro)
{
    cout << "ID: " << nroUltimoRegistro + 1 << endl;
    setId(nroUltimoRegistro);
    cout << "Nombre: ";
    cargarCadena(_nombre, 30);
    cout << "Precio: ";
    cin >> _precio;
    cout << "Categorria: ";
    cin >> _categoria;
    cout << "Stock: ";
    cin >> _stock;
    setEstado(1);
}
void Articulo::Mostrar()
{
     cout << "ID: " << _id << endl;
    cout << "Nombre: "<<_nombre;
    cout << "Precio: ";
    cin >> _precio;
    cout << "Categorria: ";
    cin >> _categoria;
    cout << "Stock: ";
    cin >> _stock;
    setEstado(1);
}
void Articulo::setNombre(const char *nombre)
{
    strcpy(_nombre, nombre);
}