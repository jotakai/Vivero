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

        Sujeto idSujeto() const { return _idSujeto; }
        void setIdSujeto(const Sujeto &idSujeto) { _idSujeto = idSujeto; }

        void Cargar(); //ACtualizarlo, agregar (Sujeto _idSujeto)
        void Mostrar(); //ACtualizarlo, agregar (Sujeto _idSujeto)


    private:
        int _id;
        Sujeto _idSujeto;
        std::string _direccion;
        std::string _telefono;
        std::string _mail;
        char _tipoCliente[1];///para saber si son empresa o persona
};
