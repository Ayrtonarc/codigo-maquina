#include <iostream>
#include <conio.h>
#include <string.h>
/*Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos:
Nombre
Edad
Sexo
Club
pedir datos al usuario para un corredor,
Asignarle una categoria de competicion:

juvenil <18
señor <=40
Veterano >40

Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion
*/
using namespace std;

struct corredor{
    char nombre[30];
    int edad;
    char sexo[20];
    char club[20];

}cl;


int main()
{
    char categoria[20];
    cout<<"Nombre: ";
    cin.getline(cl.nombre,30,'\n');
    cout<<"Edad: ";
    cin>>cl.edad;
    fflush(stdin);
    cout<<"Sexo: ";
    cin.getline(cl.sexo,20,'\n');
    cout<<"Club: ";
    cin.getline(cl.club,20,'\n');

    if(cl.edad <= 18){
        strcpy(categoria,"Juvenil");
    }
    else if(cl.edad <= 40){
        strcpy(categoria,"Senior");
    }else{
        strcpy(categoria, "Veterano");
    }
    //mostrar datos

    cout<<"\n\Datos del corredor: "<<endl;
    cout<<"Nombre: "<<cl.nombre<<endl;
    cout<<"Edad : "<<cl.edad<<endl;
    cout<<"Sexo : "<<cl.sexo<<endl;
    cout<<"Club : "<<cl.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    return 0;
}
