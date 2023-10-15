#include<iostream>

using namespace std;

#include "ArchivoStock.h"

   ArchivoStock::ArchivoStock(const char *n){
        strcpy(nombre, n);
    }
StockPlanta ArchivoStock::leerRegistro(int pos){
        StockPlanta reg;
        reg.setEstado(false);
        FILE *p;
        p=fopen(nombre, "rb");
        if(p==NULL) return reg;
        fseek(p, sizeof reg*pos,0);
        fread(&reg, sizeof reg,1, p);
        fclose(p);
        return reg;
    }
   bool ArchivoStock::grabarRegistro(StockPlanta reg)
   {
    FILE *p = fopen(nombre, "ab");
    if (p == NULL){return false;}
    bool pudoEscribir = fwrite(&reg, sizeof(StockPlanta), 1, p);
    fclose(p);
    return pudoEscribir;
}

    int ArchivoStock::contarRegistros(){
        FILE *p;
        p=fopen(nombre, "rb");
        if(p==NULL) return -1;
        fseek(p, 0,2);
        int tam=ftell(p);
        fclose(p);
        return tam/sizeof(StockPlanta);
    }


