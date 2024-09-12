#include<iostream>
using namespace std;
int main ()
{
	float saldo = 29042.17;
	float deposito;
	int opcion;
	float retirar;
	
	while (opcion != 4)
	{
		cout << "Eliga una su operacion a realizar: " << endl << endl;
		cout << "1- consultar saldo" << endl;
		cout << "2- depositar dinero" << endl;
		cout << "3- retirar dinero" << endl;
		cout << "4- salir" << endl << endl;
		cin >> opcion;
		
		switch (opcion)
		{
			case 1:
				cout << "el dinero que usted posee en su cuenta de banco es: $" << saldo << endl << endl << endl;
				break;
			case 2:
				cout << "ingrese el monto a depositar: ";
				cin >> deposito;
				saldo = saldo + deposito;
				cout << "su saldo actual es: " << saldo << endl << endl << endl;
				break;
			case 3:
				cout << "ingrese la cantidad de plata que desee retirar: $";
				cin >> retirar;
				if (retirar < saldo)
				{
					saldo = saldo - retirar;
					cout << "ahora su saldo actual es de: $" << saldo << endl << endl << endl;
				}
				else
				{
					if (retirar > saldo)
					{
						cout << "no posee el saldo suficiente, por favor vuelva a intentar con otro monto." << endl;
					}
				}
				break;
			case 4:
				cout << "gracias por su operacion.";
				break;
			default:
				cout << "esa no es una opcion valida, vuelva a intentarlo. " << endl << endl;
				break;
		}
	}
}
