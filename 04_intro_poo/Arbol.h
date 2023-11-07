#include <iostream>
#include <string>

using namespace std;

class Arbol {
    private:
        // Atributos (características)
        int edad; // Edad en meses
        int tam; // Tamaño en cm
        string especie;

        int tasaCrecimiento;

    public:
        // Constructor por omisión
        Arbol();
        Arbol(string esp, int ed, int tasa);
        // Getter (devuelve el valor de una propiedad privada)
        int getEdad();
        int getTam();
        string getEspecie();
        // Setters (modifican valores de una propiedad privada)
        void setEspecie(string esp);

        // Métodos (comportamiento)
        void crece(int tiempo);
        void imprimeDatos();
};

// Constructor por omisión (default)
Arbol::Arbol() {
    tasaCrecimiento = 5;
    especie = "";
    edad = 10;
    tam = 10 * tasaCrecimiento;
}

Arbol::Arbol(string esp, int ed, int tasa) {
    especie = esp;
    edad = ed;
    tasaCrecimiento = tasa;
    tam = ed * tasa;
}

// Getters
int Arbol::getEdad() {
    return edad;
}

int Arbol::getTam() {
    return tam;
}

string Arbol::getEspecie() {
    return especie;
}

// Setters
void Arbol::setEspecie(string esp) {
    especie = esp;
}

/*
Crece 5cm por mes
tiempo está en meses
*/
void Arbol::crece(int tiempo) {
    tam += tiempo * tasaCrecimiento;
    edad += tiempo;
}

void Arbol::imprimeDatos() {
    cout << "Especie: " << especie << endl;
    cout << "Edad: " << edad << endl;
    cout << "Tamaño: " << tam << endl;
}