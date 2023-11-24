#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include <sstream>
#include "Miembro.h"

using namespace std;

class Profesor: public Miembro {

    private:
        float sueldo;

    public:
        Profesor();
        // En el constructor por parámetros se pasan también los atributos heredados
        Profesor(string, string, string, string, string, float);
        // En los getters, setters y otros métodos, no es necesario incluir los de la
        // clase padre ya que se heredan
        float getSueldo();
        void setSueldo(float);
        string toString();
};

Profesor::Profesor() {
    sueldo = 1;
}

// Los parámetros correspondientes a los atributos de la clase padre se pasan a su constructor
Profesor::Profesor(string _id, string _nombre, string _domicilio, string _telefono, string _correo, float _sueldo):
    Miembro(_id, _nombre, _domicilio, _telefono, _correo) {
        sueldo = _sueldo;
}

float Profesor::getSueldo() {
    return sueldo;
}

void Profesor::setSueldo(float _sueldo) {
    sueldo = _sueldo;
}

/*
Cuando el método se crea en la clase hija también, se dice que se sobreescribe. La lógica dentro
de este método tiene precedencia sobre la del método padre.
Si no se define el método en la clase hija, entonces se ejecuta el de la clase padre por default
*/
string Profesor::toString() {
    ostringstream salida;
    // Es posible invocar el método de la clase padre para extender su funcionalidad
    salida << Miembro::toString();
    salida << "Sueldo: " << sueldo << endl;

    return salida.str();
}

#endif