#include <iostream>

using namespace std;
/* Escriba un programa que solicite una edad (un entero) e indique en la salida estandar si la edad esta en el rango 18  a 25*/
int main()
{
    int edad;


    cout << "Introduzca su edad" << endl;
    cin>>edad;

    if(edad >= 18 && edad <= 25){
        cout<<"La edad esta en los rangos estimados "<<edad<<endl;
    }else{
        cout<<"No esta en el rango indicado "<<edad<<endl;
    }
    return 0;
}
