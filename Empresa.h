#pragma once 

class Empresa {
private:
char _nombre[30];
int _cuit ;
public:
const char *getNombre() const;
int getCUIT();
void setNombre(const char *);
void setCUIT(int);

void Cargar();
void Mostrar();

//Constructores
Empresa();
Empresa(const char *nombre,int cuit);



};


