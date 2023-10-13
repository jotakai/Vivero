#include <iostream>
#include <string>
#include "Persona.h"
#include "Planta.h"
#include "Fecha.h"
#include "Cliente.h"
#include "Direccion.h"

using namespace std;

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

    Direccion ClassD;

    ClassD.Cargar();
    ClassD.Mostrar();
    
    return 0;
}
