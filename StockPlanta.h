#pragma once
#include "Planta.h"

class StockPlanta{
    private :
        int _id;
        Planta _planta;
        int _capacidad;//lo maximo que puede almacenar
        bool _estado=1;

    public:
        void setID(int id);
        int getID();
        
        void setPlanta(Planta planta);
        Planta getPlanta();

        void setCapacidad(int);
        int getCapacidad();

        void setEstado(bool);
        bool getEstado();

        void AumentarCapacidad(int );
        void DisminuirCapacidad(int );

        void CargarRegistro(int tam);
        void MostrarRegistro();
};