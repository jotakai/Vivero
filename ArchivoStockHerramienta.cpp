#include<iostream>
using namespace std;
#include "ArchivoStockHerramienta.h"

ArchivoStockHerramienta::ArchivoStockHerramienta(const char *n){
    strcpy(_nombre, n);
}
void ArchivoStockHerramienta::CargarRegistro()
{
    int nroUltimoRegistro=0;
    nroUltimoRegistro=contarRegistros();
    h.Cargar(nroUltimoRegistro);
//falta codificar :3

}

bool ArchivoStockHerramienta::leerRegistro(int pos){
 
    FILE *p;
    p=fopen(_nombre, "rb");
    if(p==NULL) return false;
    fseek(p, sizeof(ArchivoStockHerramienta)*pos,0);
 bool leyo=   fread(this, sizeof (ArchivoStockHerramienta),1, p);
    fclose(p);
    return leyo;
}

bool ArchivoStockHerramienta::grabarRegistro(){
    FILE *p = fopen(_nombre, "ab");
    if (p == NULL){return false;}
    bool pudoEscribir = fwrite(this, sizeof(ArchivoStockHerramienta), 1, p);
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
    return tam/sizeof(ArchivoStockHerramienta);
}

bool ArchivoStockHerramienta::borrarRegistro(){
    FILE *p;
    p=fopen(_nombre, "wb");
    if(p==nullptr){ return false;}
    fclose(p);
    return true;
}
void ArchivoStockHerramienta:: MostrarRegistro()
{
    cout<<"Detalles Herramienta"<<endl;
    h.Mostrar();
}
bool ArchivoStockHerramienta::reemplazarRegistroCompra(Herramienta reg, int posicionAReemplazar){
    FILE *p = fopen(_nombre, "rb+");
    if (p == NULL){return false;}
    fseek(p, posicionAReemplazar * sizeof(Herramienta), SEEK_SET);
    bool pudoEscribir = fwrite(&reg, sizeof(Herramienta), 1, p);
    fclose(p);
    return pudoEscribir;
}
