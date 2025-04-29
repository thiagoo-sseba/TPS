#include <iostream>
using namespace std;

int main() {
    int cantidadEntradas;
    float precioPorEntrada, total, descuento;

    cout << "ingrese el precio de una entrada:";
    cin >> precioPorEntrada;

    cout << "ingrese la cantidad de entradas (maximo 4):";
    cin >> cantidadEntradas;

    if (cantidadEntradas < 1 || cantidadEntradas > 4) {
        cout << "solo se pueden comprar de 1 a 4 entradas." << endl;
        return 1;
    }

    total = cantidadEntradas * precioPorEntrada;

    if (cantidadEntradas == 2) {
        descuento = total * 0.10;
    } else if (cantidadEntradas == 3) {
        descuento = total * 0.15;
    } else if (cantidadEntradas == 4) {
        descuento = total * 0.20;
    } else {
        descuento = 0;
    }

    cout << "Total a pagar:" << total - descuento << endl;

    return 0;
}

