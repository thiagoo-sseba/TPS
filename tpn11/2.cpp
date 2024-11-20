#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>n;
    int vector[n];
    int suma=0;
    for(int i=0; i<n; i++){
        cout<<"Ingrese el elemento "<<i+1<< ": ";
        cin>>vector[i];
        suma+=vector[i];
    }
    float promedio=static_cast<float>(suma)/n;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    return 0;
}
