
/*Hacer un programa que pida al usuario que digite una cadena de caracteres
verificar la longitud
si pasa de los 10 caracteres mostrarla en pantalla
caso contrario no mostrarla*/

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[10000];
    int tamano=0;

    cout<<"Ingrese una palabra o texto: ";
    gets(palabra);

    tamano=strlen(palabra);

    if(tamano<=10){
            cout<<"El tamaño de la cadena es: "<<tamano;

    }

return 0;
}
