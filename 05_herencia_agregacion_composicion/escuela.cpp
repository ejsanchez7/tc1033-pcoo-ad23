#include <iostream>
#include "Escuela.h"
#include "Miembro.h"
#include "Profesor.h"
#include <vector>
#include <typeinfo>


using namespace std;

int main() {

    // Crear una escuela con los valores default
    Escuela tec;
    cout << tec.toString();

    /*
    COMPOSICIÓN: agregar un salón a la escuela
    Se guarda la referencia del salón agregado en una variable tipo apuntador(*)
    Los apuntadores son variables especiales que almacenan referencias de memoria
    a localidades que almacenan valores de cierto tipo.
    */
    Salon* salon = tec.agregarSalon("6102", 30);
    // Agregar otro salón
    tec.agregarSalon("1234", 15);
    tec.mostrarSalones();

    /*
    Cuando la variable es un apuntador a un objeto, se utiliza el operador "->"
    en lugar de "." para llamar a los métodos. En esta línea estamos modificando 
    el salón que está guardado en la lista dentro de "tec", no una copia de él
    */
    salon->setCapacidad(10);
    // Borrar salón
    tec.borrarSalon("1234");

    // Como modificamos el salón guardado y no una copia, el valor se debería ver reflejado
    // al mostrar la lista de salones
    tec.mostrarSalones();

    vector<Miembro*> miembros;
    Profesor* prof = new Profesor("L12345", "Erik Sánchez", "Homeless", "1234567890", "ejsanchez@tec.mx", 123);
    miembros.push_back(prof);

    cout << "************ PROFESOR **************" << endl;
    cout << prof->toString();

    cout << "************ MIEMBROS **************" << endl;
    for(int i = 0; i < miembros.size(); i++) {
         cout << typeid(miembros[i]).name() << endl;
         cout << miembros[i]->toString();
    }
    
    return 0;
}