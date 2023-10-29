#include "movimiento.h"
#include <iostream>
#include <cstring>

using namespace std;
// Constructor
Movimiento::Movimiento(int id, const Articulo& idArticulo, float total, int cantidad, int categoria, float precioUnitario, const Fecha& fechaEmision, bool estado) {
    setId(id);
    setIdArticulo(idArticulo);
    setTotal(total);
    setCantidad(cantidad);
    setCategoria(categoria);
    setPrecioUnitario(precioUnitario);
    setFechaEmision(fechaEmision);
    setEstado(estado);
}

// Getters
int Movimiento::getId() {
    return _id;
}

const Articulo& Movimiento::getIdArticulo() {
    return _idArticulo;
}

float Movimiento::getTotal() {
    return _total;
}

int Movimiento::getCantidad() {
    return _cantidad;
}

int Movimiento::getCategoria() {
    return _categoria;
}

float Movimiento::getPrecioUnitario() {
    return _precioUnitario;
}

const Fecha& Movimiento::getFechaEmision() {
    return _fechaEmision;
}

bool Movimiento::getEstado() {
    return _estado;
}

// Setters
void Movimiento::setId(int id) {
    _id = id;
}

void Movimiento::setIdArticulo(const Articulo& idArticulo) {
    _idArticulo = idArticulo;
}

void Movimiento::setTotal(float total) {
    _total = total;
}

void Movimiento::setCantidad(int cantidad) {
    _cantidad = cantidad;
}

void Movimiento::setCategoria(int categoria) {
    _categoria = categoria;
}

void Movimiento::setPrecioUnitario(float precioUnitario) {
    _precioUnitario = precioUnitario;
}

void Movimiento::setFechaEmision(const Fecha& fechaEmision) {
    _fechaEmision = fechaEmision;
}

void Movimiento::setEstado(bool estado) {
    _estado = estado;
}

// Métodos de instancia
void Movimiento::mostrar() {
    cout << "ID de movimiento: " << _id << endl;
    _idArticulo.getID();
    cout << "Total: $" << _total << endl;
    cout << "Cantidad: " << _cantidad << endl;
    cout << "Categoría: " << _categoria << endl;
    cout << "Precio unitario: $" << _precioUnitario << endl;
    cout<<"Fecha Emision: ";
    _fechaEmision.Mostrar();
    cout << "Estado: " << _estado << endl;
}


       