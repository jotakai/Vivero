#pragma once
#include"Cliente.h"
#include"Modo_De_Pago.h"
#include"Fecha.h"

class RegistroVenta : public Cliente,public Modo_De_Pago{

    private:
        int idVenta;
        Cliente _idCliente;
        Fecha _fecha;
        Modo_De_Pago _mododepago;

    public:
        
        int getIdVenta() const { return idVenta; }
        void setIdVenta(int idVenta_) { idVenta = idVenta_; }

        Cliente getIdCliente() const { return _idCliente; }
        void setIdCliente(const Cliente &idCliente) { _idCliente = idCliente; }

        Fecha fecha() const { return _fecha; }
        void setFecha(const Fecha &fecha) { _fecha = fecha; }

        Modo_De_Pago mododepago() const { return _mododepago; }
        void setMododepago(const Modo_De_Pago &mododepago) { _mododepago = mododepago; }

        void Cargar(); //HACER
        void Mostrar(); //HACER

};