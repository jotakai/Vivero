#pragma once

#include"Proveedor.h"
#include"Fecha.h"
#include"Modo_De_Pago.h"

class registroCompra : public Proveedor{

private:

    int _id;
    char _idProveedor[50];
    Fecha _Fecha;
    Modo_De_Pago _ModoDePago;

public:
    
    int getId() const { return _id; }
    void setId(int id) { _id = id; }

    const char *GetIdProveedor() const { return _idProveedor; }
    void setIdProveedor(const char *idProveedor);

    Fecha getFecha() const { return _Fecha; }
    void setFecha(const Fecha &Fecha) { _Fecha = Fecha; }

    Modo_De_Pago GetModoDePago() const { return _ModoDePago; }
    void setModoDePago(const Modo_De_Pago &ModoDePago) { _ModoDePago = ModoDePago; }


};