#include <iostream>
using namespace std;
int potencia(int base, int exponente){
    int resultado = 1;
    for (int i=0; i<exponente; ++i){
        resultado*=base;
    }
    return resultado;
}
int main(){
    int base, exponente;

    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin>>exponente;
    int resultado=potencia(base, exponente);
    cout<<"El resultado de "<<base<<"^"<<exponente<<" es: "<<resultado<<endl;
    return 0;
}
