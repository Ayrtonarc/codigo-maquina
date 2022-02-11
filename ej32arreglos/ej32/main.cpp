#include <iostream>

using namespace std;
/*Escribe un programa que lea la entrada estandar de un vector de numeros
 y muestre en la salida  estandar los numeros del vector con sus indices asociados*/
int main()
{
    int vektor[100];
    int capacidad = 0;

    cout<<"Introduzca el tamaño de su arreglo "<<endl;
    cin>>capacidad;

    for(int i=0; i<capacidad; i++){
        cout<<"Digite un numero: "<<endl;
        cin>>vektor[i]; // guardando los elementos del vector.
    }
    //desplegar los elementos del vector
    for(int i=0; i<capacidad; i++){
        cout<<i<<" - > "<<vektor[i]<<endl;
    }



    return 0;
}
