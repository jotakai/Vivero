#include <iostream>
#include <string>


using namespace std;

#include"menu.h"
#include "ArchivoStockHerramienta.h"
#include "StockHerramientas.h"
//<----


void pruebaArchivos()
{
StockHerramientas stockHerramienta;
Herramienta H;
ArchivoStockHerramienta ASH("prueba.dat");
 H.Cargar(); //<---
stockHerramienta.setHerramienta(H);


ASH.grabarRegistro(stockHerramienta);
stockHerramienta=ASH.leerRegistro(0);
stockHerramienta.getHerramienta().Mostrar();
}












int main(){

    //se agrego una variable de cada clase para probar el funcionamiento

    //Persona persona = Persona("Juan", "Perez", 20);
    //Planta planta = Planta("Rosa", "Rosa", 2);
    //Fecha fecha = Fecha(1, 1, 2000);
    //Cliente cliente = Cliente("Juan", "Perez", 20, "Calle 123", "12345678", "jesus@gmaol.com");
    //
//
    //cout << "Nombre: " << persona.getNombre() << endl;
    //cout << "Apellido: " << persona.getApellido() << endl;
    //cout << "Edad: " << persona.getEdad() << endl;
//
//
    //cout << "Nombre: " << planta.getNombre() << endl;
    //cout << "Especie: " << planta.getEspecie() << endl;
    //cout << "Edad: " << planta.getEdad() << endl;
//
    //cout << "Dia: " << fecha.getDia() << endl;
    //cout << "Mes: " << fecha.getMes() << endl;
    //cout << "Anio: " << fecha.getAnio() << endl;
//
    //cout << "Nombre: " << cliente.getNombre() << endl;
    //cout << "Apellido: " << cliente.getApellido() << endl;
    //cout << "Edad: " << cliente.getEdad() << endl;
    //cout << "Direccion: " << cliente.getDireccion() << endl;
    //cout << "Telefono: " << cliente.getTelefono() << endl;
    //cout << "Mail: " << cliente.getMail() << endl;




   // menuPrincipal();


pruebaArchivos();
    return 0;
}



/*
Win + .
Emogis utilizados

❌❎
👌✅


*/