#include <iostream>
#include <string>
using namespace std;

// Funciones de conversión
double usdToEur(double amount){return amount * 0.85;}
double eurToUsd(double amount){return amount * 1.18;}
double usdToMxn(double amount){return amount * 20.0;}
double mxnToUsd(double amount){return amount * 0.05;}
double eurToMxn(double amount){return amount * 23.5;}
double mxnToEur(double amount){return amount * 0.043;} 
double convertirMoneda(double cantidad, string origen, string destino){
    if (origen=="USD"&&destino=="EUR") return usdToEur(cantidad);
    else if (origen=="EUR"&&destino=="USD")return eurToUsd(cantidad);
    else if (origen=="USD"&&destino=="MXN")return usdToMxn(cantidad);
    else if (origen=="MXN"&&destino=="USD")return mxnToUsd(cantidad);
    else if (origen=="EUR"&&destino=="MXN")return eurToMxn(cantidad);
    else if (origen=="MXN"&&destino=="EUR")return mxnToEur(cantidad);
    else {
        cout<<"Conversion no soportada."<< endl;
        return 0.0;
    }
}

int main(){
    double cantidad;
    string monedaOrigen, monedaDestino;

    cout<<"Ingrese la cantidad a convertir: ";
    cin>>cantidad;
    cout<<"Ingrese la moneda de origen (USD, EUR, MXN): ";
    cin>>monedaOrigen;
    cout<<"Ingrese la moneda de destino (USD, EUR, MXN): ";
    cin>>monedaDestino;
    double resultado=convertirMoneda(cantidad, monedaOrigen, monedaDestino);
    if (resultado != 0.0){
        cout<<"El resultado de la conversión es: "<<resultado<<" "<<monedaDestino<<endl;
    }
    return 0;
}
