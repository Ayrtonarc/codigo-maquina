#include <iostream>
#include <stdlib.h>
#include <string.h>
/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres*/
using namespace std;

int main()
{
    char cadena1[100];
    char arreglocopia[100];
    cout<<"Ingrese una palabra"<<endl;
    cin.getline(cadena1,100,'\n');

    strcpy(arreglocopia,cadena1);

    cout<<"\ Su texto fue"<<arreglocopia<<endl;
    cout<<"\n";


    return 0;
}
