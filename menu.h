#pragma once

void menuPrincipal();

//EMPRESA
void menuEmpresa(int opcion);//

void menuEmpresaQueDeseaComprar(int opcion);// elegir que comprar
void menuEmpresaQueDeseaVender(int opcion);// elegir que comprar

void menuPlantasCompraEmpresa(int opcion);// Comprar
void menuPlantasVentaEmpresa(int opcion);// Vender

void menuComprarHerramientasEmpresa(int opcion);// Comprar
void menuVenderHerramientasEmpresa(int opcion);// Vender


//PERSONA
void menuPersona(int opcion);//

void menuPersonaQueDeseaComprar(int opcion);//❌ elegir que comprar
void menuPersonaQueDeseaVender(int opcion);//❌ elegir que comprar

void menuPlantasCompraPersona(int opcion);//❌ Comprar
void menuPlantasVentaPersona(int opcion);//❌ Vender

void menuHerramientasCompraPersona(int opcion);//❌ Comprar
void menuHerramientasVentaPersona(int opcion);//❌ Vender

//DUEÑO
void menuDuenio(int opcion);

void CargarDatos(int opcion);//'ab' de archivos
void ModificarDatos(int opcion);//'rb' que lo lea y modifique
void LimpiarDatos(int opcion);//'wb' de archivos == 'baja Fisica'
void ListarDatos(int opcion);//seleccionar el archivo que quieres que abra y muestre
void ContarRegistros(int opcion);//Cuenta todos los registros dentro del bloc de notas
