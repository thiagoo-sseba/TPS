#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 < 10) {
        if (num2 < 10) {
            if (num3 < 10) {
                cout << "Todos los numeros son menores a diez" << endl;
            }
        }
    }

    return 0;
}

