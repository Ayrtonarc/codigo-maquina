#include <iostream>
/*Transformar u numero entero a romanos*/
using namespace std;

int main()
{
    int numero;
    int unidades, decenas, centenas;

    cout<<"Digite un numero"
    cin>>numero;

    unidades = numero%10; numero = numero/10; //unidades = 2, numero = 215
    decenas = numero%10; numero = numero/10; //decenas = 5, numero = 21;
    millar = numero %10; numero = numero/10;

    return 0;
}
