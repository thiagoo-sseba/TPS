//Tomar 2 cadenas y devolver su concatenacion.
#include <iostream>
#include <string>

using namespace std;
int main(){	
string hilo;
string hilo1;
string junta;
cout<<"bienvenido al programa concatenador de lineas de caracteres";
cout<<"\n";
cout<<"ingrese la primera linea de caracteres:";
getline(cin,hilo);
cout<<"ingrese la primera linea de caracteres:";
getline(cin,hilo1);
junta=hilo+hilo1;
cout<<junta;
return 0;
}
