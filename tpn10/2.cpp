#include <iostream>
#include <cstdlib>   
#include <ctime>    
using namespace std;

int numeroaleatorio(int min, int max){
    return min+rand()%(max-min+1);
}
int main(){
    int minimo, maximo, cantidad;
    srand(time(0));
    cout<<"Ingrese el valor minimo del rango: ";
    cin>>minimo;
    cout<<"Ingrese el valor maximo del rango: ";
    cin>>maximo;
    cout<<"Ingrese la cantidad de numeros aleatorios a generar: ";
    cin>>cantidad;

    cout<<"Numeros aleatorios generados dentro del rango "<<minimo<<" y "<<maximo<<":"<<endl;
    for(int i=0; i<cantidad; ++i){
        cout<<numeroaleatorio(minimo, maximo)<<" ";
    }
    cout<<endl;
    return 0;
}
