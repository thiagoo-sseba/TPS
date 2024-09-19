#include <iostream>
#include <string>
using namespace std;


bool buscarPalabra(const ::string& cadena, const ::string& palabra) {
    return cadena.find(palabra) != ::string::npos;
}


void imprimirResultado(bool encontrado) {
    if (encontrado) {
        cout << "La palabra se encuentra en la cadena." << ::endl;
    } else {
        cout << "La palabra NO se encuentra en la cadena." << ::endl;
    }
}

int main() {
    string cadena,palabra;

    cout << "Ingrese la cadena: ";
    getline(cin, cadena);
    cout << "Ingrese la palabra a buscar: ";
    getline(cin, palabra);
    bool encontrado = buscarPalabra(cadena, palabra);

    
    imprimirResultado(encontrado);

    return 0;
}

