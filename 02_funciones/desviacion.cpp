#include <iostream>
#include <cmath>

using namespace std;


float promedio(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

float desviacion(int num1, int num2, int num3) {
    float prom = promedio(num1, num2, num3);
    float suma = pow((num1 - prom), 2) + pow((num2 - prom), 2) + pow((num3 - prom), 2);
    return sqrt(suma / 2);
}

int main() {
    
    cout << "Promedio: " << promedio(20, 30, 45) << endl;
    cout << "Desviación estándar de 20, 30, 45 = " << desviacion(20, 30, 45) << endl;

    return 0;

}