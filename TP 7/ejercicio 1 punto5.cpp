//Tomar una cadena y devolver su cantidad de letras
#include <iostream>
#include <string>
using namespace std;
int main(){	
string hilo;
cout<<"bienvenido al programa que calcula el tama�o de una linea";
cout<<"\n";
cout<<"ingrese la linea de caracteres:";
getline(cin,hilo);
cout<<"la linea posee "<<hilo.size();
cout<<" letras";
return 0;
}
