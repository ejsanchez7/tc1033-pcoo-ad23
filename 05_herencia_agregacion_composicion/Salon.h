#ifndef SALON_H
#define SALON_H

#include <iostream>
#include <sstream> // Permite construir strings formateados como si fuera cout

using namespace std;

class Salon {

    private:
        string clave;
        int capacidad;
    public:
        Salon();
        Salon(string, int);
        string getClave();
        int getCapacidad();
        void setClave(string);
        void setCapacidad(int);
        // Estos son métodos comunes, no son getters en realidad (no devuelven el valor de un atributo)
        // aunque su nombre sea parecido
        string getEdificio();
        string getPiso();
        string getSalon();
        string toString();
};

Salon::Salon() {
    clave = "";
    capacidad = 30;
}

Salon::Salon(string _clave, int _capacidad) {
    clave = _clave;
    capacidad = _capacidad;
}

string Salon::getClave() {
    return clave;
}

int Salon::getCapacidad() {
    return capacidad;
}

void Salon::setClave(string _clave) {
    clave = _clave;
}

void Salon::setCapacidad(int _capacidad) {
    capacidad = _capacidad;
}

string Salon::getEdificio() {
    return clave.substr(0, 1);
}
string Salon::getPiso() {
    return clave.substr(1, 1);
}
string Salon::getSalon() {
    return clave.substr(2, 2);
}

string Salon::toString() {
    ostringstream salida;
    salida << "Clave: " << clave << endl << "Capacidad: " << capacidad << endl;
    return salida.str();
}

#endif