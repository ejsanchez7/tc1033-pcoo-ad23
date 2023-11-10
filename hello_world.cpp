#include <iostream>

using namespace std;

//Calcula el promedio
float promedio(int a, int b, int c) {
    return (a + b + c) / 3;
}

int main() {
    int a;
    int b;
    int c;

    cout << "Escribe el primer número: ";
    cin >> a;
    cout << "Escribe el segundo número: ";
    cin >> b;
    cout << "Escribe el tercer número: ";
    cin >> c;

    cout << "El promedio es: " << promedio(a, b, c) << endl;

    return 0;
}
