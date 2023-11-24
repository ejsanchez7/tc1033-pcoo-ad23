#ifndef MIEMBRO_H
#define MIEMBRO_H

#include <iostream>
#include <sstream> // Permite construir strings formateados como si fuera cout

using namespace std;

class Miembro {
    /*
    Cuando los atributos son privados, su acceso queda restringido únicamente a los métodos
    de la misma clase.
    Cuando requerimos que estos atributos sean accesibles también en los métodos de las clases
    hijas, es necesario utilizar el especificador de acceso "protected".
    */
    protected:
        string id;
        string nombre;
        string domicilio;
        string telefono;
        string correo;
        // Se puede generalizar la lista de grupos aquí
    public:
        Miembro();
        Miembro(string, string, string, string, string);
        string getId();
        string getNombre();
        string getDomicilio();
        string getTelefono();
        string getCorreo();
        void setId(string);
        void setNombre(string);
        void setDomicilio(string);
        void setTelefono(string);
        void setCorreo(string);
        virtual string toString();
        // Este método son virtuales porque cada subclase debe implementarlos
        // de acuerdo a sus restricciones
        //virtual Grupo agregarGrupo();
        // Borrar grupo y getMaterias es igual para todos
        //bool borrarGrupo();
        //vector<Materia> getMaterias();
};

Miembro::Miembro() {
    id = "";
    nombre = "";
    domicilio = "";
    telefono = "";
    correo = "";
}

Miembro::Miembro(string _id, string _nombre, string _domicilio, string _telefono, string _correo) {
    id = _id;
    nombre = _nombre;
    domicilio = _domicilio;
    telefono = _telefono;
    correo = _correo;
}

string Miembro::getId() {
    return id;
}

string Miembro::getNombre() {
    return nombre;
}

string Miembro::Miembro::getDomicilio() {
    return domicilio;
}

string Miembro::getTelefono() {
    return telefono;
}

string Miembro::getCorreo() {
    return correo;
}

void Miembro::setId(string _id) {
    id = _id;
}

void Miembro::setNombre(string _nombre) {
    nombre = _nombre;
}

void Miembro::setDomicilio(string _domicilio) {
    domicilio = _domicilio;
}

void Miembro::setTelefono(string _telefono) {
    telefono = _telefono;
}

void Miembro::setCorreo(string _correo) {
    correo = _correo;
}

// Este método debe ser sobreescrito en las clases hijas ya que es un método virtual
string Miembro::toString() {
    ostringstream salida;
    salida << "ID: " << id << endl;
    salida << "Nombre: " << nombre << endl;
    salida << "Domicilio: " << domicilio << endl;
    salida << "Teléfono: " << telefono << endl;
    salida << "Correo: " << correo << endl;
    return salida.str();
}

#endif