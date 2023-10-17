#pragma once
#include"Herramientas.h"

class StockHerramientas{

    private:
        int _id;
        Herramienta _herramienta;
        int _capacidad;
        bool _estado=true;
    public:
        void setID(int id);
        void setHerramienta(Herramienta herramienta);
        void setCapacidad(int capacidad);
        void setEstado(bool estado);

        int getID();
        Herramienta getHerramienta();
        int getCapacidad();
        bool getEstado();
        void CargarRegistro(int);
        void MostrarRegistro();
};