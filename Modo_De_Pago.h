#pragma once

class Modo_De_Pago{

private:


int _num_de_pago;
int _ModoDePago[3]; //1 == Efectivo, 2 == Debito, 3 == Credito
int _otros_Detales[2]; //1 == Cheques, 2 == Pagares

public:
void setNumDePago(int num_de_pago) { _num_de_pago = num_de_pago; }
int getnumDePago() const { return _num_de_pago; }

void setModoDePago(int ModoDePago, int _num_de_pago) { _ModoDePago[_num_de_pago-1] = ModoDePago; }
int getmodoDePago(int _num_de_pago) const { return _ModoDePago[_num_de_pago-1]; }

int getotrosDetales(int _num_de_pago) const { return _otros_Detales[_num_de_pago-1]; }
void setOtrosDetales(int otros_Detales, int _num_de_pago) { _otros_Detales[_num_de_pago-1] = otros_Detales; }






};