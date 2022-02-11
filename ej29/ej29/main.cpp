#include <iostream>
#include<stdlib.h>
#include<time.h>
/*15 Realice un programa que solicite al usuario que piense un numero entero
    entre 1 y el 100.
    El programa debe generarun numero aleatorio en ese mismo rango [1-100]
    indicarle al usuario si el numero que digito es menor o mayor al numero aleatoreo,
    asi que hasta que lo adivine y por ultimo mostrarle el numero de intentos que le llevo
*/
using namespace std;

int main()
{
    int numero, dato, contador = 0;

    srand(time(NULL));//generar un numero aleatorio;
    dato = 1 + rand()%(100);

    do{
        cout << "Digite un numero: " << endl;
        cin>>numero;
        if(numero>dato){
        cout<<"\nDigite un numero menor "<<endl;
        }if(numero<dato){
            cout<<"\nDigite un numero mayor\n"<<endl;
        }
    }while(numero !=dato);

    cout<<"Felicidades Adivinaste el numero"<<endl;
    cout<<"\nNumero de intentos"<<contador<<endl;

    system("pause");

    return 0;
}
