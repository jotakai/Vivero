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
};


