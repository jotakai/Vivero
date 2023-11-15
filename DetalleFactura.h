#pragma once
#include"registroCompra.h"
#include"Articulo.h"

class DetalleFactura : public Articulo,public registroCompra{

private:

Articulo _IdArticulo;
registroCompra _idRegistroCompra;
int _cantidad;
float _precio;

public:
Articulo getIdArticulo() const { return _IdArticulo; }
void setIdArticulo(const Articulo &IdArticulo) { _IdArticulo = IdArticulo; }

registroCompra getIdRegistroCompra() const { return _idRegistroCompra; }
void setIdRegistroCompra(const registroCompra &idRegistroCompra) { _idRegistroCompra = idRegistroCompra; }

int getCantidad() const { return _cantidad; }
void setCantidad(int cantidad) { _cantidad = cantidad; }

float getPrecio() const { return _precio; }
void setPrecio(float precio) { _precio = precio; }

void MostrarArticuloFactura(); //hacer



};