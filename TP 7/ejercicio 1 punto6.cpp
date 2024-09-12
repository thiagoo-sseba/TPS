//Tomar una cadena y devolver su tamaño
#include <iostream>
#include <string>
using namespace std;
int main(){	
string hilo1;
string hilo2;
string junta;
int numcaract=0;
char caract;
int chooseoption;

cout<<"bienvenido al programa multifuncion de linea o P.M.L";
cout<<"\n";
cout<<"#ingrese la primera linea string para empezar con la funcion del programa:";
getline(cin,hilo1);
cout<<"+ a continuacion se le pedira que ingrese un numero que determinara la accion a realizar";
cout<<"\n";
cout<<"---si quiere saber el largo de una linea, ingrese (1)";
cout<<"\n";
cout<<"---si quiere concatenar 2 lineas, ingrese (2)";
cout<<"\n";
cout<<"---si quiere saber el reverso de una linea, ingrese (3)";
cout<<"\n";
cout<<"---si quiere saber cuantas veces aparece un caracter en una linea, precione (4)";
cout<<"\n";
cout<<"---si quiere saber la cantidad de letras en una linea, precione (5)";
cout<<"\n";
cout<<"a continuacion, ingrese el numero:";
cin>>chooseoption;
cout<<"\n";

switch (chooseoption) {
  case 1:
  cout<<"iniciando primer caso..."<<endl; 
  cout<<"\n";
  cout << "el largo de la linea es de:"<<hilo1.size();
    break;
  case 2:
	cout<<"iniciando segundo caso..."<<endl;
	cout<<"\n";
	cout<<"ingrese la segunda linea de caracteres:";
	getline(cin,hilo2);
	junta=hilo1+hilo2;
	cout<<junta;
    break;
  case 3:
    cout<<"iniciando tercer caso..."<<endl;
	hilo1.size();
	for(int i=hilo1.size()-1; i>=0; i--)
{
	cout<<hilo1.at(i);
}
    break;
  case 4:
cout<<"iniciando cuarto caso..."<<endl;
  cout<<"\n";
  cout<<"ingrese el caracter que busca:";
  cin>>caract;
  for(int i=hilo1.size(); i>=0; i--)
{
	if(caract==hilo1[i])
	{
		numcaract=numcaract+1;
	}
}
cout<<"el caracter "<<caract;
cout<<" se mostro "<<numcaract;
cout<<" veces"<<endl;
    break;
  case 5:
cout<<"iniciando quinto caso..."<<endl;
cout<<"la linea posee "<<hilo1.size();
cout<<" letras";
    break;
}

return 0;
}
