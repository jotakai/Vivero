#pragma once
#include <string>
#include "Sujeto.h"

class Cliente : public Sujeto
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

        void Cargar();
        void Mostrar();

    private:
        int _id;
        std::string _direccion;
        std::string _telefono;
        std::string _mail;
        char _tipoCliente[1];///para saber si son empresa o persona
};
