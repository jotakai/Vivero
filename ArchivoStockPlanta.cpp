#include<iostream>
using namespace std;
#include "ArchivoStockPlanta.h"

ArchivoStockPlanta::ArchivoStockPlanta(const char *n){
    strcpy(nombre, n);
}



Planta ArchivoStockPlanta::leerRegistro(int pos){
   Planta reg;
    reg.setEstado(false);
    FILE *p;
    p=fopen(nombre, "rb");
    if(p==NULL) return reg;
    fseek(p, sizeof reg*pos,0);
    fread(&reg, sizeof reg,1, p);
    fclose(p);
    return reg;
}

bool ArchivoStockPlanta::grabarRegistro(Planta reg){
    FILE *p = fopen(nombre, "ab");
    if (p == NULL){return false;}
    bool pudoEscribir = fwrite(&reg, sizeof(Planta), 1, p);
    fclose(p);
    return pudoEscribir;
}

int ArchivoStockPlanta::contarRegistros(){
    FILE *p;
    p=fopen(nombre, "rb");
    if(p==NULL) return -1;
    fseek(p, 0,2);
    int tam=ftell(p);
    fclose(p);
    return tam/sizeof(Planta);
}

bool ArchivoStockPlanta::borrarRegistro(){
    FILE *p;
    p=fopen(nombre, "wb");
    if(p==nullptr){ return false;}
    fclose(p);
    return true;
}
