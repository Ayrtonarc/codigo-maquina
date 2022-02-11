#include <iostream>
/*Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos*/
using namespace std;

int main()
{
    int invec[] = {1,2,3,4,5,6,7,8,9,10}; // se declara el vector
    int suma = 0; //variable suma

    for(int i = 0; i<10; i++){ // ciclo for para recorrer el arreglo
        suma = suma + invec[i]; //la instruccion a ejecutar  suma es igual a suma + suma de los numeros contenidos en el vector
    }
    cout<<"La suma de los elementos del vector es: "<<suma<<endl; // se llama la variable suma
    return 0;
}
