#include <iostream>

#include <cstring>
using namespace std;
#include "Venta.h"

Venta::Venta(){
    _idCliente = 0;
}

int Venta::getIdCliente() const{
    return _idCliente;
}

void Venta::setIdCliente(int idCliente){
    _idCliente = idCliente;
}

void Venta::cargar(int nroUltimoRegistro){
 
     Movimiento::cargar(nroUltimoRegistro);
    cout << "Ingrese el ID del cliente: ";
    cin >> _idCliente;
 
}

void Venta::mostrar(){
   
   Movimiento::mostrar();
    cout << "ID de cliente: " << _idCliente << endl;
   
}


// void Venta::cargarVenta()
// {
//     cout<<"ID Articulo: ";
//     cin>>_idArticulo;
    
//     Detalle d(id,idarticulo);
//     detalle.guardar();
// }
// void Mostrar()
// {
//     cout<<"Atributos....";
//     detalle.mostrar();
// }
// mostrarDetalle()
// {

//     leerArchivoDetalle.
//     busqueda(idVenta);
//     cout<<Articulos..;

// }