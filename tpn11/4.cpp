#include <iostream>
using namespace std;
int main(){
    int vector[10];
    int maximo,minimo;
    cout<<"Ingrese 10 numeros: ";
    for(int i=0; i<10; i++){
        cin>>vector[i];
    }
    maximo=minimo=vector[0];
    for(int i=1; i<10; i++){
        if (vector[i]>maximo)maximo=vector[i];
        if (vector[i]<minimo)minimo=vector[i];
    }
    cout<<"El valor maximo es: "<<maximo<<endl;
    cout<<"El valor minimo es: "<<minimo<<endl;
    return 0;
}
