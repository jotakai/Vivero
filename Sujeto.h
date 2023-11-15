#pragma once
#include <string>
#include"Direccion.h"

class Sujeto{
    
public:

//contructor predeterminado
   Sujeto();
    Sujeto(std::string nombre, std::string apellido, int edad);
    ~Sujeto();

    std::string getNombre();
    std::string getApellido();
    int getEdad();
    std::string getTelefono() const { return telefono; }

    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setEdad(int edad);
    void setTelefono(const std::string &telefono_) { telefono = telefono_; }

    Direccion getDireccion() const { return _direccion; }
    void setDireccion(const Direccion &direccion) { _direccion = direccion; }

    void Cargar(); //TENDRA que ser actualizarlo
    void Mostrar(); //TENDRA que ser actualizarlo




private:
    std::string _nombre;
    std::string _apellido;
    int _edad;
    std::string telefono;
    Direccion _direccion;
};