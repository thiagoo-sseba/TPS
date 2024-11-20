#include <iostream>
using namespace std;
int main(){
    int vector[]={1, 2, 3, 4, 5};
    int suma=0;
    int len=sizeof(vector)/sizeof(vector[0]); 

    for(int i=0; i<len; i++){
        suma+=vector[i];
    }

    cout<<"La suma de los elementos es: "<<suma<<endl;
    return 0;
}
