#include <iostream>

using namespace std;
/* Escriba un programa que calcule el valor de 1+2+3+4+...n*/
int main()
{
    int numero=0;
    int suma =0;
    cout << "Introduzca su numero: " << endl;
    cin>>numero;

    for(int i=1; i<=numero; i++){
        suma = suma + i;

    }
    cout<<"\nLa suma es: "<<suma<<endl;
    return 0;
}
