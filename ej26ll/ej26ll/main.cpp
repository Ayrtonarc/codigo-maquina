#include <iostream>

using namespace std;
/*Escriba un programa que calcule el valor de 1!+2!+3!...+n*/
int main()
{
    int numero;
    int suma;
    int factorial = 1;
    cout << "introduzca su numero" << endl;
    cin>>numero;

    for(int i =1; i<=numero; i++){
        factorial = factorial * i;
        suma = suma + factorial;//en esta linea la suma +el factorial
    }
    cout<<"la suma factorial de "<<suma<<endl;

    return 0;
}
