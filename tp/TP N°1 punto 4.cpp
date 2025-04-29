#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero positivo (hasta 3 cifras): ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Error: el numero debe ser positivo." << endl;
    } else if (numero < 10) {
        cout << "El numero tiene 1 cifra." << endl;
    } else if (numero < 100) {
        cout << "El numero tiene 2 cifras." << endl;
    } else if (numero < 1000) {
        cout << "El numero tiene 3 cifras." << endl;
    } else {
        cout << "Error: el numero tiene mas de 3 cifras." << endl;
    }

    return 0;
}

