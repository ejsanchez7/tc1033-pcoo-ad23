#include <iostream>
#include <cmath>

using namespace std;

/*
Desarrolla el algoritmo y posteriormente el programa 
completo en C++ que solicite al usuario el valor 
asignado a los catetos de un triángulo rectángulo, y 
que calcule el valor resultante de la hipotenusa. Para 
la solución de este problema se sugiere que utilices el 
teorema de Pitágoras.

ENTRADAS
    cateto_a -> números
    cateto_b -> números
*/

int main() {
    
    // 1.- Declarar catetos
    float cateto_a;
    float cateto_b;

    // 2.- Pedir catetos
    cout << "Escribe el cateto A: ";
    cin >> cateto_a;
    // 3.- Pedir cateto B
    cout << "Escribe el cateto B: ";
    cin >> cateto_b;
    // 4.- hipotenusa = raiz(cateto_a**2 + cateto_b**2)
    float hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));
    // 5.- imprimir hipotenusa
    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;

}

/*
SALIDAS
    hipotenusa -> numero
*/
