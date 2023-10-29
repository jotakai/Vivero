#pragma once
#include <iostream>
#include <cstring>
#include "articulo.h"
#include "fecha.h"

class Movimiento{
    private:
        int _id;
        Articulo _idArticulo;
        float _total;
        int _cantidad;
        int _categoria;
        float _precioUnitario;
        Fecha _fechaEmision;
        bool _estado;

    public:
        
        Movimiento(int id, const Articulo& idArticulo, float total, int cantidad, int categoria, float precioUnitario, const Fecha& fechaEmision, bool estado) {
            _id = id;
            _idArticulo = idArticulo;
            _total = total;
            _cantidad = cantidad;
            _categoria = categoria;
            _precioUnitario = precioUnitario;
            _fechaEmision = fechaEmision;
            _estado = estado;
        }

        int getId();
        const Articulo& getIdArticulo();
        float getTotal();
        int getCantidad();
        int getCategoria();
        float getPrecioUnitario();
        const Fecha& getFechaEmision();
        bool getEstado();

        
        void setId(int id);
        void setIdArticulo(const Articulo& idArticulo);
        void setTotal(float total);
        void setCantidad(int cantidad);
        void setCategoria(int categoria);
        void setPrecioUnitario(float precioUnitario);
        void setFechaEmision(const Fecha& fechaEmision);
        void setEstado(bool estado);

        
        void mostrar();
};