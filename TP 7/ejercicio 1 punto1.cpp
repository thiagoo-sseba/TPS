//Tomar una cadena y devolver su longitud
#include <iostream>
#include <string>

using namespace std;
int main(){	
string hilo;

cout<<"bienvenido al programa lector de lineas de caracteres";
cout<<"\n";
cout<<"ingrese una linea de caracteres:";
getline(cin,hilo);
cout << "el largo de la linea es de:"<<hilo.size();
return 0;
}
