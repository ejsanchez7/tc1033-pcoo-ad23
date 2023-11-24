#ifndef DUENO_H
#define DUENO_H

#include <iostream>
#include <string>
#include "Direccion.h"

using namespace std;

/*
DUEÑO
    nombre
    direccion
    telefono
*/

class Dueno {

    private:
        string nombre;
        Direccion direccion;
        string telefono;
    public:
        // Constructores
        Dueno();
        Dueno(string _nombre, Direccion _direccion, string _telefono);
        // Getters
        string getNombre();
        Direccion getDireccion();
        string getTelefono();
        // Setters
        void setNombre(string _nombre);
        void setDireccion(Direccion _direccion);
        void setTelefono(string _telefono);
};

Dueno::Dueno() {
    nombre = "";
    telefono = "";
}

Dueno::Dueno(string _nombre, Direccion _direccion, string _telefono) {
    nombre = _nombre;
    direccion = _direccion;
    telefono = _telefono;
}
// Getters
string Dueno::getNombre() {
    return nombre;
};
Direccion Dueno::getDireccion() {
    return direccion;
};
string Dueno::getTelefono() {
    return telefono;
};
// Setters
void Dueno::setNombre(string _nombre) {
    nombre = _nombre;
};
void Dueno::setDireccion(Direccion _direccion) {
    direccion = _direccion;
};
void Dueno::setTelefono(string _telefono) {
    telefono = _telefono;
};

#endif