#include <iostream>

using namespace std;

float calcular_llenado(float cantidad_ropa) {
    return (cantidad_ropa * 3) / 10.0;
}

float calcular_tiempo_lavado(float cantidad_ropa) {
    
    int tiempo_lavado = 0;

    if(cantidad_ropa <= 5) {
        tiempo_lavado = 15;
    } else if(cantidad_ropa <= 10) {
        tiempo_lavado = 25;
    } else {
        tiempo_lavado = 35;
    }
    
    return tiempo_lavado + calcular_llenado(cantidad_ropa);
}

float calcular_tiempo_enjuague(float cantidad_ropa) {
    
    int tiempo_enjuague = 0;

    if(cantidad_ropa <= 5) {
        tiempo_enjuague = 10;
    }else if(cantidad_ropa <= 10) {
        tiempo_enjuague = 15;
    }
    else {
        tiempo_enjuague = 20;
    }
    
    return tiempo_enjuague + calcular_llenado(cantidad_ropa);
}

float calcular_tiempo_secado(float cantidad_ropa) {
    if(cantidad_ropa <= 5) {
        return 5;
    }
    if(cantidad_ropa <= 10) {
        return 10;
    }
    
    return 15;
}

int main() {

    float cantidad_ropa;
    string lavar;
    string enjuagar;
    string secar;
    
    cout << "Dime la cantidad de ropa: ";
    cin >> cantidad_ropa;
    cout << "Deseas lavar? ";
    cin >> lavar;
    cout << "Deseas enjuagar? ";
    cin >> enjuagar;
    cout << "Deseas secar? ";
    cin >> secar;

    float tiempo = 0;

    if(cantidad_ropa <= 15) {
        if(lavar == "s") {
            tiempo += calcular_tiempo_lavado(cantidad_ropa);
        }
        if(enjuagar == "s") {
            tiempo += calcular_tiempo_enjuague(cantidad_ropa);
        }
        if(secar == "s") {
            tiempo += calcular_tiempo_secado(cantidad_ropa);
        }

        cout << "El tiempo total es: " << tiempo << endl;
    }else {
        cout << "La cantidad de ropa excede el límite permitido" << endl;
    }

    return 0;

}