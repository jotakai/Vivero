#pragma once

class Tipo_Docu{

    private:
        int _TipoDoc[3]; //1 == DNI, 2 == Cuit, 3 == Cuil
        int _numero;

    public:
        
        int getTipoDoc() const { return _TipoDoc; }
        void setTipoDoc(int TipoDoc) { _TipoDoc = TipoDoc; }

        int getNumero() const { return _numero; }
        void setNumero(int numero) { _numero = numero; }

};