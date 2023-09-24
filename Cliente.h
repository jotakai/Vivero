#pragma once
#include <string>
#include "Persona.h"

class Cliente : public Persona
{
public:
    Cliente();
    Cliente(std::string nombre, std::string apellido, int edad, std::string direccion, std::string telefono, std::string mail);
    ~Cliente();

    std::string getDireccion();
    std::string getTelefono();
    std::string getMail();

    void setDireccion(std::string direccion);
    void setTelefono(std::string telefono);
    void setMail(std::string mail);


private:
    std::string _direccion;
    std::string _telefono;
    std::string _mail;
};
