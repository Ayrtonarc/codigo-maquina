#include <iostream>

using namespace std;

int numero;
int cuadrados;

int main()
{
    cout << "Introduzca primer numero: " << endl;
    cin>>cuadrados;

    for(int i; i<10; i++){
        cuadrados= i * i;
        numero = numero + cuadrados;
    }

    cout<<"El resutado de la suma es: "<<numero<<endl;

    return 0;
}
