#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularMCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero:";
    cin >> num1;

    cout << "Ingrese el segundo numero:";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);
    cout << "El MCD es:" << mcd << endl;

    return 0;
}

