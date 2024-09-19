#include <iostream>
using namespace std;

double byteAKilobyte(double bytes) {
    return bytes / 1024;
}

double terabyteAMegabyte(double terabytes) {
    return terabytes * 1024 * 1024;
}

double gigabyteAPetabyte(double gigabytes) {
    return gigabytes / 1024 / 1024;
}

int main() {
    double cantidad;
    int opcion;

    cout << "Selecciona una opción de conversión: \n";
    cout << "1. Byte a Kilobyte\n";
    cout << "2. Terabyte a Megabyte\n";
    cout << "3. Gigabyte a Petabyte\n";
    cin >> opcion;

    cout << "Introduce la cantidad a convertir: ";
    cin >> cantidad;

    switch(opcion) {
        case 1:
            cout << cantidad << " Bytes son " << byteAKilobyte(cantidad) << " Kilobytes\n";
            break;
        case 2:
            cout << cantidad << " Terabytes son " << terabyteAMegabyte(cantidad) << " Megabytes\n";
            break;
        case 3:
            cout << cantidad << " Gigabytes son " << gigabyteAPetabyte(cantidad) << " Petabytes\n";
            break;
        default:
            cout << "Opción inválida\n";
    }

    return 0;
}

