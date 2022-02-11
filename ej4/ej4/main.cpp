#include <iostream>

using namespace std;

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;
    int operacion = 0;

    cout << "Introduzca el numero 1" << endl;
    cin>>numero1;

    cout<<"Introduzca numero 2"<< endl;
    cin>>numero2;

    //suma

    suma = numero1 + numero2;
    cout<<"El resultado de la suma es: "<<suma<<endl;
    resta = numero1 - numero2;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    multiplicacion = numero1 * numero2;
    cout<<"El resultado de la multi es: "<<multiplicacion<<endl;
    division = numero1 - numero2;
    cout<<"El resultado de la division es: "<<division<<endl;

    return 0;
}
