#include <iostream>

using namespace std;

int main()
{
    int vektor[100];
    int capacidad =0;
    int mayor = 0;

    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>capacidad;

    for(int i = 0; i<capacidad; i++){
        cout<<i+1<<" .Digite un numero: ";//1. Digite un numero
        cin>>vektor[i];

        if(vektor[i] > mayor){ //la variable mayor esta inicializada como 0
            mayor = vektor[i]; //mayor 1 2 4 10 5
        }
    }
    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;



    return 0;
}
