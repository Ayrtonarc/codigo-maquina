/*Rellenar un arreglo con n numeros, posteriormente  utilizando punteros determinar el menor elemento de el arreglo*/
/*
Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros deterinar
el menor elemento del arreglo.
*/
#include <iostream>

using namespace std;

int main()
{
    int elements;
    cout<<"Cantidad de numeros: ";
    cin>> elements;

    int numeros[elements];
    for(int i=0; i<elements; i++) {
        cout<<"Numero "<<i+1<<": ";
        cin>>numeros[i];
    }

    int *dir_numeros = numeros;
    int menor = numeros[0];
    for(int i=0; i<elements; i++) {
        if(*dir_numeros < menor) menor = *dir_numeros;
        dir_numeros++;
    }

    cout<<"Numero menor: "<<menor<<endl;

    return 0;
}
