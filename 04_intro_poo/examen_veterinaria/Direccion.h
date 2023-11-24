#ifndef DIRECCION_H
#define DIRECCION_H

#include <iostream>

using namespace std;

class Direccion {
    private:
        string calle;
        int numero;
        int cp;
        string colonia;
        string ciudad;

    public:
        Direccion();
        string getCalle();
        int getNumero();
        int getCp();
        string getColonia();
        string getCiudad();
        void setCalle(string _calle);
        void setNumero(int _numero);
        void setCp(int _cp);
        void setColonia(string _colonia);
        void setCiudad(string _ciudad);
        void imprimeDatos();
};

Direccion::Direccion() {
    calle = "Epigmenio González";
    numero = 100;
    cp = 76130;
    colonia = "Desarrollo San Pablo";
    ciudad = "Querétaro";
}
string Direccion::getCalle() {
    return calle;
};
int Direccion::getNumero() {
    return numero;
};
int Direccion::getCp() {
    return cp;
};
string Direccion::getColonia() {
    return colonia;
};
string Direccion::getCiudad() {
    return ciudad;
};
void Direccion::setCalle(string _calle) {
    calle = _calle;
};
void Direccion::setNumero(int _numero) {
    numero = _numero;
};
void Direccion::setCp(int _cp) {
    cp = _cp;
};
void Direccion::setColonia(string _colonia) {
    colonia = _colonia;
};
void Direccion::setCiudad(string _ciudad) {
    ciudad = _ciudad;
};
void Direccion::imprimeDatos() {
    cout << calle << " " << numero << " " << colonia << ", " << ciudad; 
}

#endif