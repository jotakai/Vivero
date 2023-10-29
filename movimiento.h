#pragma once
#include <iostream>
#include <cstring>
using namespace std;
#include "articulo.h"
#include "fecha.h"

class Movimiento{
    private:
        int _id;
       int _idArticulo;
        float _total;
        int _cantidad;
        int _categoria;
        float _precioUnitario;
        Fecha _fechaEmision;
        bool _estado;

    public:
        Movimiento();
        Movimiento(int , int , float , int , int , float ,  Fecha , bool );

        int getId();
       int getIdArticulo();
        float getTotal();
        int getCantidad();
        int getCategoria();
        float getPrecioUnitario();
        const Fecha& getFechaEmision();
        bool getEstado();

        
        void setId(int id);
        void setIdArticulo(int idArticulo);
        void setTotal(float total);
        void setCantidad(int cantidad);
        void setCategoria(int categoria);
        void setPrecioUnitario(float precioUnitario);
        void setFechaEmision(const Fecha& fechaEmision);
        void setEstado(bool estado);

        void cargar(int );
        void mostrar();
};