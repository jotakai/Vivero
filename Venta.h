#pragma once 
#include "Fecha.h"
#include "movimiento.h"

class Venta : public Movimiento{
    private:
        int _idCliente;
    
    public:
        Venta();
        int getIdCliente()const;
        void setIdCliente(int idCliente);
        void cargar(int);
        void mostrar();
};

/* class Venta{
    private:
        int _id;
        int _idCliente;
        Fecha _fechaVenta;
        int _idArticulo;
        int _categoria;
        float _importe;
       

    public:
        Venta();
        Fecha getFecha() const;
        void setFecha(Fecha);
        int getIdArticulo()const;
        void setIdArticulo(int);
        int getCategoria()const;
        void setCategoria(int);
        int getid() const ;
        void setId(int id);
        void setImporte(float);
        float getImporte();

}; */