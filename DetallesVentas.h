#pragma once

#include"RegistroVenta.h"
#include"Articulo.h"

class DetallesVentas{

    private:
        RegistroVenta _idVenta;
        Articulo _idArticulo;
        int _cantidad;
        float _precioUnitario;
        float _subTotal;
        float _precioTotal;

    public:
        
        RegistroVenta getIdVenta() const { return _idVenta; }
        void setIdVenta(const RegistroVenta &idVenta) { _idVenta = idVenta; }

        Articulo getIdArticulo() const { return _idArticulo; }
        void setIdArticulo(const Articulo &idArticulo) { _idArticulo = idArticulo; }

        int getCantidad() const { return _cantidad; }
        void setCantidad(int cantidad) { _cantidad = cantidad; }

        float getPrecioUnitario() const { return _precioUnitario; }
        void setPrecioUnitario(float precioUnitario) { _precioUnitario = precioUnitario; }

        float getSubTotal() const { return _subTotal; }
        void setSubTotal(float subTotal) { _subTotal = subTotal; }

        float getPrecioTotal() const { return _precioTotal; }
        void setPrecioTotal(float precioTotal) { _precioTotal = precioTotal; }

        void Cargar(); //HACER
        void Mostrar(); //HACER

        void MostrarArchivoVenta();
        
};