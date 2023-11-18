#pragma once

class Agroquimicos{

    private:
    int _tipoAgroquimico; //1-Ecologico,2-Quimico
    public:
    void setTipoAgroquimico(int tipoAgroquimico);
    int getTipoAgroquimico();
    void Cargar();
    void Mostrar();
};