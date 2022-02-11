#include <iostream>


/*Realice un programa que realice la descomposicion en factores primos de un numero entero*/
using namespace std;

int main()
{
    int numero;
    int descomposicion;
    cout << "Introduzca un numero" << endl;
    cin>>numero;
    for(int i =2; numero>1; i++){
        while(numero%i == 0){

            numero = numero/i;
            if(numero>1)cout<<i<<"x";
            else cout<<i;
        }
    }

    return 0;
}
