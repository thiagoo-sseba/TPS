#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	int cantidad_vendedores;
	
	cout << "ingrese la cantidad de vendedores en su tienda: ";
	cin >> cantidad_vendedores;
	
	string nombre [cantidad_vendedores];
	int ventas [cantidad_vendedores];
	
	for (int i = 0; i <= cantidad_vendedores - 1; i ++)
	{
		cout << "vendedor" << i + 1 << ": " << endl;
		cout << "ingrese el nombre del vendedor: ";
		cin >> nombre [i];
		cout << "ingrese cuantas ventas realizo: " << endl;
		cin >> ventas [i];
	}
	
	int suma_ventas = 0;
	
	for(int i = 0; i < cantidad_vendedores; ++i)
	{
		cout<<nombre[i]<<": "<<ventas[i]<<" Ventas"<<endl;
		suma_ventas+=ventas[i];
	}
	cout<<"total de ventas: "<<suma_ventas<<" Ventas"<<endl;
}
