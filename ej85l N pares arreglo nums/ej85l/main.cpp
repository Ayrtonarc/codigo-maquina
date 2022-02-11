/*Ejercicio 3
rellenar un array, y posteriormente usando punteros indicar cuales son los numeros pares y su posision en memoria*/
#include <iostream>

using namespace std;

int main()
{
    int numeros  [10], *dir_numeros;
    cout << "Hello world!" << endl;

    for(int i=0;i<10;i++){
        cout<<"Digite un numero ["<<i<<"]";
        cin>>numeros[i];
    }
    dir_numeros = numeros; //Posision de memoria comienza a numeros

    for(int i=0; i<10;i++){
        if(*dir_numeros%2==0){
            cout<<" El numero: "<<*dir_numeros<<" Es par "<<endl;
            cout<<" Posision: "<<dir_numeros<<endl;
        }
        dir_numeros++; //variable puntero debe irse incrementando cada vez que se itera en el bucle
    }
    return 0;
}
