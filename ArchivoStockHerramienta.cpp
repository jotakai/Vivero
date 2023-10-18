#include<iostream>
using namespace std;
#include "ArchivoStockHerramienta.h"
#include"Herramientas.h"

ArchivoStockHerramienta::ArchivoStockHerramienta(const char *n){
    strcpy(_nombre, n);
}

StockHerramientas ArchivoStockHerramienta::leerRegistro(int pos){
    StockHerramientas reg;
    reg.setEstado(false);
    FILE *p;
    p=fopen(_nombre, "rb");
    if(p==NULL) return reg;
    fseek(p, sizeof reg*pos,0);
    fread(&reg, sizeof reg,1, p);
    fclose(p);
    return reg;
}

bool ArchivoStockHerramienta::grabarRegistro(StockHerramientas reg){
    FILE *p = fopen(_nombre, "ab");
    if (p == NULL){return false;}
    bool pudoEscribir = fwrite(&reg, sizeof(StockHerramientas), 1, p);
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
    return tam/sizeof(StockHerramientas);
}

bool ArchivoStockHerramienta::borrarRegistro(){
    FILE *p;
    p=fopen(_nombre, "wb");
    if(p==nullptr){ return false;}
    fclose(p);
    return true;
}
bool ArchivoStockHerramienta::reemplazarRegistroCompra(StockHerramientas reg, int posicionAReemplazar){
    FILE *p = fopen(_nombre, "rb+");
    if (p == NULL){return false;}
    fseek(p, posicionAReemplazar * sizeof(StockHerramientas), SEEK_SET);
    bool pudoEscribir = fwrite(&reg, sizeof(StockHerramientas), 1, p);
    fclose(p);
    return pudoEscribir;
}
