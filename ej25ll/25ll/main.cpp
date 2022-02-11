#include <iostream>

using namespace std;
/*Escriba un programa que escriba que calcule el valor de 1+2+3..2n-1*/
int main()
{
    int numero;
    int suma;
    int resultado;
    cout << "Introduzca su numero:" <<endl;
    cin>>numero;

    for(int i=1; i<numero; i++){
        suma = 2*i-1; /* primero necesitamos tomar los valores impares, ya que la suma es de numeros no pares
,asi que usamos "2*i-1" para que solo nos muestre los numeros que ocupamos(la formula "2*n-1"siempre da resultados impares) */


        resultado = suma + i; /*aqui lo que hacemos es que sumamos todos los numeros impares,hasta llegar al numero donde este sea igual a 2*n-1
ejemplo usando 3 como "n";
    }

    cout<<"El resultado es: "<<resultado;
    return 0;
}

