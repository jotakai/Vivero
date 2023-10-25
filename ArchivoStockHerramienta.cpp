#include<iostream>
using namespace std;
#include "ArchivoStockHerramienta.h"

ArchivoStockHerramienta::ArchivoStockHerramienta(const char *n){
    strcpy(_nombre, n);
}

Herramienta ArchivoStockHerramienta::leerRegistro(int pos){
 
  Herramienta reg;
    reg.setEstado(false);
    FILE *p;
    p=fopen(_nombre, "rb");
    if(p==NULL) 
    {return reg;}
    fseek(p, sizeof (Herramienta)*pos,0);
    fread(&reg, sizeof (Herramienta),1, p);
    fclose(p);
    return reg;
}

bool ArchivoStockHerramienta::grabarRegistro(Herramienta reg){
      FILE *p = fopen(_nombre, "ab");
    if (p == NULL){return false;}
    bool pudoEscribir = fwrite(&reg, sizeof(Herramienta), 1, p);
    fclose(p);
    return pudoEscribir;
}

int ArchivoStockHerramienta::contarRegistros(){
    FILE *p;
    p=fopen(_nombre, "rb");
    if(p==NULL) return -1;
   fseek(p, 0,2);
    int tam=ftell(p);
    fclose(p);
    return tam/sizeof(Herramienta);
}

bool ArchivoStockHerramienta::borrarRegistro(){
    FILE *p;
    p=fopen(_nombre, "wb");
    if(p==nullptr){ return false;}
    fclose(p);
    return true;
}

bool ArchivoStockHerramienta::reemplazarRegistroCompra(Herramienta reg,int posicionAReemplazar){
    FILE *p = fopen(_nombre, "rb+");
    if (p == NULL){return false;}
    fseek(p, posicionAReemplazar * sizeof(Herramienta), SEEK_SET);
    bool pudoEscribir = fwrite(&reg, sizeof(Herramienta), 1, p);
    fclose(p);
    return pudoEscribir;
}
