#include <iostream>
using namespace std;
int main() 
{
    int num;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) 
	{
        for (int j = 1; j <= num; ++j) 
		{
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << " " << endl;
    }
}
