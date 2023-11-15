#pragma once
#include <cstring>

class Direccion{
    private:
        char _id[50];//
        int _codigoPostal;
        char _calle [50];
        char _ciudad [50];
        char _provincia[50];
        char _numeroCalle[50];//
        char _pais[50];
    public:

        const char * getID();//
        int getCodigoPostal();
        const char *getCalle ();
        const char *getCiudad ();
        const char *getProvincia ();
        const char *getNumeroCalle();//
        const char *getPais() const;
        void setID (const char *);//
        void setCodigoPostal (int);
        void setCalle (const char *);
        void setCiudad (const char *);
        void setProvincia(const char *);
        void setNumeroCalle(const char *);//
        void setPais(const char * pais);

        void Cargar();
        void Mostrar();
    //Constructores
    Direccion();
    Direccion(const char *id,int codigoPostal,const char *calle,const char *ciudad,const char *provincia,const char *numeroCalle,const char *pais);


};
