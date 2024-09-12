
#include <iostream>
#include <string>
using namespace std;
int main(){	
string hilo;
int numcaract=0;
char caract;

cout<<"bienvenido al programa de lector de caracteres de lineas";
cout<<"\n";
cout<<"ingrese la linea de caracteres:";
getline(cin,hilo);
cout<<"ingrese el caracter que busca:";
cin>>caract;
for(int i=hilo.size(); i>=0; i--)
{
	if(caract==hilo[i])
	{
		numcaract=numcaract+1;
	}
}
cout<<"el caracter "<<caract;
cout<<" se mostro "<<numcaract;
cout<<" veces"<<endl;
return 0;
}
