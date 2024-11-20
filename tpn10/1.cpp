#include <iostream>
using namespace std;
int mayortres(int num1, int num2, int num3){
    int mayor;
    if(num1 > num2){
        mayor=num1;
    } 
	else{
        mayor=num2;
    }
    if(num3 > mayor){
        mayor=num3;
    }
    return mayor;
}
int main(){
    int n1, n2, n3;
    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    cout<<"Ingrese el tercer numero: ";
    cin>>n3;

    int resultado=mayortres(n1, n2, n3);
    cout<<"El mayor de los tres numeros es: "<<resultado<<endl;
    return 0;
}
