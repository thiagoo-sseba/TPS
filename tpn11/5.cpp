#include <iostream>
using namespace std;
int main(){
    float alturas[5];
    float suma=0,promedio;
    int masAltas=0,masBajas=0;
    cout<<"Ingrese las alturas de 5 personas: ";
    for(int i=0; i<5; i++){
        cin>>alturas[i];
        suma+=alturas[i];
    }
    promedio=suma/5;
    for(int i=0; i<5; i++){
        if(alturas[i]>promedio)
            masAltas++;
        else if(alturas[i]<promedio)
            masBajas++;
    }
    cout<<"El promedio de las alturas es: "<<promedio<<endl;
    cout<<"Personas más altas que el promedio: "<<masAltas<<endl;
    cout<<"Personas más bajas que el promedio: "<<masBajas<<endl;
    return 0;
}
