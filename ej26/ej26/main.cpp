#include <iostream>

using namespace std;
/*Escriba un programa que calcule el valor de 1*2*3...n* en factorial*/
int main()
{
    int numero;
    int factorial = 1;

    cout << "Introduzca el numero" << endl;
    cin>>numero;

    for(int i=1; i<=numero; i++){
        factorial = factorial * i;
    }
    cout<<"el factorial de "<<numero<<" es: "<<factorial<<endl;
    return 0;
}
