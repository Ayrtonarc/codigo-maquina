#include <iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
/*Escriba un programa que calcule el valor de 2*/
int main()
{
    int numero;
    int suma;
    int elevado;

    cout << "Ingrese un numero" << endl;
    cin>>numero;

    for(int i = 1; i<=numero; i++){
        elevado = pow(2,i);
        suma = suma + elevado;
    }
    cout<<"\nLa suma total es: "<<suma<<endl;

    return 0;
}
