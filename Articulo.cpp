#include "Articulo.h"

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
void Articulo:: setStock (int stock)
{
    _stock=stock;
}
bool Articulo::getEstado()const {return _estado;}
void Articulo::setEstado(bool estado)
{
    _estado=estado;
}