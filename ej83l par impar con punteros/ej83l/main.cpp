/*Comprobar si un numero es par o impar, señalar la posision de memoria
donde se esta guardando el numero con punteros*/

#include <iostream>

using namespace std;

int main()
{
    int numero, *dir_numero;

    dir_numero = &numero; //guardando pos de memoria

    if(*dir_numero%2==0){
        cout<<"El numero"<<*dir_numero<<" es par"<<endl;  //astedisco adelante es para ver lo que hay dentro de la posision de la memoria
        cout<<"Posision: "<<dir_numero<<endl;
    }else{
        cout<<"El numero"<<*dir_numero<<" es impar"<<endl;  //astedisco adelante es para ver lo que hay dentro de la posision de la memoria
        cout<<"Posision: "<<dir_numero<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
