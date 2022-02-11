#include <iostream>
/*Escribe un programa que defina un vector de */
using namespace std;

int main()
{
    int vektor[100];
    int tamano;

    cout << "Introduzca el tamaño del vector" << endl;
    cin>>tamano;

    for(int i=0; i<tamano; i++){
        cout<<"Digite un numero: ";
        cin>>vektor[i];
    }
    //mostrar elementos
    for(int i=0; i<tamano; i++){
        cout<< vektor[tamano - i - 1]<<endl; //formula para reversear un array
    }

    return 0;
}
