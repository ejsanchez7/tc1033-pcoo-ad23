#include <iostream>
#include "Perro.h"
#include "Dueno.h"
#include "Direccion.h"

using namespace std;

/*
PERRO
    raza
    peso
    edad
    dueno
DUEÑO
    nombre
    direccion
    telefono
*/

int main() {
    Direccion tec;
    Dueno erik("Erik Sánchez", tec, "1234567890");
    Perro fiona("Mestizo", 6, 14, erik);

    cout << "Promedio de kg por año: " << fiona.pesoXedad() << endl;
    cout << "Los datos del perro son: " << endl;
    fiona.imprimeDatos();

    fiona.getDueno().getDireccion().imprimeDatos();
    cout <<endl;

    return 0;
}