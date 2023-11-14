#ifndef PERRO_H
#define PERRO_H

#include <iostream>
#include <string>
#include "Dueno.h"

using namespace std;
/*
PERRO
    raza
    peso
    edad
    dueno
*/

class Perro {
    private:
        string raza;
        float peso;
        int edad;
        Dueno dueno;

    public:
        // Constructores
        Perro(); // Default o por omisión
        Perro(string _raza, float _peso, int _edad, Dueno _dueno); // Por parámetros
        // Getters
        string getRaza();
        float getPeso();
        int getEdad();
        Dueno getDueno();
        // Setters
        void setRaza(string _raza);
        void setPeso(float _peso);
        void setEdad(int _edad);
        void setDueno(Dueno _dueno);
        // Otros métodos
        float pesoXedad();
        void imprimeDatos();
};

Perro::Perro() {
    raza = "";
    peso = 0;
    edad = 0;
}

Perro::Perro(string _raza, float _peso, int _edad, Dueno _dueno) {
    raza = _raza;
    peso = _peso;
    edad = _edad;
    dueno = _dueno;
}
// Getters
string Perro::getRaza() {
    return raza;
};
float Perro::getPeso() {
    return peso;
};
int Perro::getEdad() {
    return edad;
};
Dueno Perro::getDueno() {
    return dueno;
};
// Setters
void Perro::setRaza(string _raza) {
    raza = _raza;
};
void Perro::setPeso(float _peso) {
    peso = _peso;
};
void Perro::setEdad(int _edad) {
    edad = _edad;
};
void Perro::setDueno(Dueno _dueno) {
    dueno = _dueno;
};
// Otros métodos
float Perro::pesoXedad() {
    return (peso / edad);
}

void Perro::imprimeDatos() {
    cout << "Raza: " << raza << endl;
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << endl;
    cout << "Dueño: " << dueno.getNombre() << endl;
}
#endif