//Tomar una cadena y devolver su reverso.
#include <iostream>
#include <string>
using namespace std;
int main(){	
string hilo;

cout<<"bienvenido al programa reversor de lineas de caracteres";
cout<<"\n";
cout<<"ingrese la linea de caracteres:";
getline(cin,hilo);
hilo.size();

for(int i=hilo.size()-1; i>=0; i--)
{
	cout<<hilo.at(i);
}
return 0;
}
