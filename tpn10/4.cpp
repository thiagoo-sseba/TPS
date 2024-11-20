#include <iostream>
using namespace std;
bool primo(int numero){
    if(numero<=1){
        return false; 
    }
    for(int i=2; i<=numero/2; ++i){
        if(numero%i==0){
            return false; 
        }
    }
    return true; 
}
int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    if(primo(numero)){
        cout<<numero<<" es un numero primo."<<endl;
    } 
	else{
        cout<<numero<<" no es un numero primo."<<endl;
    }
    return 0;
}
