#include <iostream>
#include <string.h>
/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales,
en caso de no serlo
indicar cual es mayor alfabeticamente*/
using namespace std;

int main()
{
    char cadena1[100];
    char cadena2[100];

    cout<<"Introduzca su texto"<<endl;
    cin.getline(cadena1, 100, '\n');

    cout<<"Introduzca su texto"<<endl;
    cin.getline(cadena2, 100, '\n');

    if(strcmp(cadena1,cadena2)==0){
        cout<<"\nAmbos strings son iguales";
    }else if(strcmp(cadena1,cadena2) > 0){
        cout<<"\nCadena 1 es mayor Alfanumericamente"<<endl;
    }else{
        cout<<"\nCadena 2 es mayor alfanumericamente"<<endl;
    }


    return 0;
}
