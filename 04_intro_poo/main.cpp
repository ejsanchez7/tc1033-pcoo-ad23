#include <iostream>
#include "Arbol.h"

using namespace std;

int main() {

    /*
    miArbol es una variable de tipo "Arbol" que se crea
    usando el constructor por omisión
    */
    Arbol miArbol;
    miArbol.imprimeDatos();

    /*
    Puedo modificar los datos de miArbol usando los setters
    que haya programado en mi clase, si no hay setter no se puede
    */
    string nombre;
    int tiempo;
    cout << "Escribe el nombre: ";
    cin >> nombre;
    cout << "Escribe el tiempo de crecimiento: ";
    cin >> tiempo;

    miArbol.setEspecie(nombre);
    // También puedo invocar métodos que usan las propiedades del objeto
    miArbol.crece(tiempo);
    miArbol.imprimeDatos();

    /*
    baobab es una variable de tipo "Arbol" que se crea 
    usando el constructor con parámetros
    */
    Arbol baobab("Baobab", 40, 15);
    baobab.imprimeDatos();

    /*
    También puedo pedir los datos al usuario y pasarlos al constructor
    con parámetros
    */
    int edad;
    int tasa;
    cout << "Escribe la especie del árbol: ";
    cin >> nombre;
    cout << "Escribe la edad del árbol: ";
    cin >> edad;
    cout << "Escribe la tasa de crecimiento de " << nombre << ": ";
    cin >> tasa;

    Arbol otroArbol(nombre, edad, tasa);   
    otroArbol.imprimeDatos();

    return 0;
}