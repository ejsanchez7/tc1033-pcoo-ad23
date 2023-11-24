#ifndef ESCUELA_H
#define ESCUELA_H

#include <iostream>
#include <sstream> // Permite construir strings formateados como si fuera cout
#include <vector> // Una versión de listas en C++
#include "Salon.h"

using namespace std;

class Escuela {

    private:
        string nombre;
        string domicilio;
        string telefono;
        vector<Salon> salones;
        // Método privado que sirve como auxiliar para borrar salón
        int buscarSalon(string);

    public:
        Escuela();
        Escuela(string, string, string);
        string getNombre();
        string getDomicilio();
        string getTelefono();
        vector<Salon> getSalones();
        void setNombre(string);
        void setDomicilio(string);
        void setTelefono(string);
        Salon* agregarSalon(string, int);
        bool borrarSalon(string);
        void mostrarSalones();
        string toString();
};

Escuela::Escuela() {
    nombre = "ITESM";
    domicilio = "Epigmenio González 100, Desarrollo San Pablo, Querétaro, Qro.";
    telefono = "1234567890";
}

Escuela::Escuela(string _nombre, string _domicilio, string _telefono) {
    nombre = _nombre;
    domicilio = _domicilio;
    telefono = _telefono;
}

string Escuela::getNombre() {
    return nombre;
}

string Escuela::getDomicilio() {
    return domicilio;
}

string Escuela::getTelefono() {
    return telefono;
}

vector<Salon> Escuela::getSalones() {
    return salones;
}

void Escuela::setNombre(string _nombre) {
    nombre = _nombre;
}

void Escuela::setDomicilio(string _domicilio) {
    domicilio = _domicilio;
}

void Escuela::setTelefono(string _telefono) {
    telefono = _telefono;
}

/*
COMPOSICIÓN
La relación de composición indica que la clase compuesta (Escuela) tiene
el control sobre la existencia del componente y el componente no puede existir
si no existe el compuesto, así que se delega la creación del Salón al objeto
Escuela para garantizar su previa existencia

El método devuelve una referencia al salón agregado (&), una referencia es la
dirección de memoria donde se almacenó el salón de modo que al modificarlo afuera
se esté modificando el mismo que está guardado en la lista.
Si no se devuelve una referencia, lo que hace C++ es regresar una copia del objeto
para preservar la integridad del objeto original.
*/
Salon* Escuela::agregarSalon(string clave, int capacidad) {
    Salon salon(clave, capacidad);
    salones.push_back(salon);
    return &salones.back();
}

int Escuela::buscarSalon(string clave) {
    for(int i = 0; i < salones.size(); i++) {
        if(salones[i].getClave() == clave) {
            return i;
        }
    }

    return -1;
}

bool Escuela::borrarSalon(string clave) {
    int posicion = buscarSalon(clave);

    if(posicion != -1) {
        salones.erase(salones.begin() + posicion);
        return true;
    }

    return false;
}

void Escuela::mostrarSalones() {
    cout << "****** SALONES ******" << endl;
    for(int i = 0; i < salones.size(); i++) {
        cout << salones[i].toString();
        cout << "----------------" << endl;
    }
    cout << "*******************" <<endl;
}

string Escuela::toString() {
    ostringstream salida;
    salida << nombre << endl << domicilio << endl << telefono << endl;
    return salida.str();
}

#endif