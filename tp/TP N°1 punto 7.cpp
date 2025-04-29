#include <iostream>
using namespace std;

void mostrarMenu();
void consultarSaldo(float saldo);
float depositarDinero(float saldo);
float retirarDinero(float saldo);

int main() {
    int opcion = 0;
    float saldo = 1000.0;

    while (opcion != 4) {
        mostrarMenu();
        cin >> opcion;

        if (opcion == 1) {
            consultarSaldo(saldo);
        } else if (opcion == 2) {
            saldo = depositarDinero(saldo);
        } else if (opcion == 3) {
            saldo = retirarDinero(saldo);
        } else if (opcion == 4) {
            cout << "Gracias por usar el cajero ¡Hasta luego y no vuelva nunca :)!" << endl;
        } else {
            cout << "Opcion inválida Intente nuevamente." << endl;
        }
    }

    return 0;
}

void mostrarMenu() {
    cout << "\n----- Cajero Automatico -----" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar dinero" << endl;
    cout << "3. Retirar dinero" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

void consultarSaldo(float saldo) {
    cout << "Su saldo actual es:" << saldo << endl;
}

float depositarDinero(float saldo) {
    float monto;
    cout << "Ingrese el monto a depositar:";
    cin >> monto;

    if (monto > 0) {
        saldo += monto;
        cout << "Depósito exitoso. Nuevo saldo:" << saldo << endl;
    } else {
        cout << "el monto debe ser mayor a cero." << endl;
    }

    return saldo;
}

float retirarDinero(float saldo) {
    float monto;
    cout << "Ingrese el monto a retirar:";
    cin >> monto;

    if (monto > 0) {
        if (monto <= saldo) {
            saldo -= monto;
            cout << "Retiro exitoso. Nuevo saldo:" << saldo << endl;
        } else {
            cout <<"saldo insuficiente." << endl;
        }
    } else {
        cout << "el monto debe ser mayor a cero." << endl;
    }

    return saldo;
}

