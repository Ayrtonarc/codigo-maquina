#include <iostream>
//realoce un programa que lea la entrada estandar de estos datos
//Edad
//Sexo
//Altura
//mostrar los datos al final
using namespace std;

int main()
{
    int edad = 0;
    char Sexo[10];
    float altura = 0;
    cout << "Introduzca su edad " << endl;
    cin>>edad;
    cout<<"Introduzca su sexo" <<endl;
    cin>>Sexo;
    cout<<"Introduzca su altura en el formato 0.00 con decimal"<<endl;
    cin>>altura;

    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<Sexo<<endl;
    cout<<"Edad: "<<altura<<endl;
    return 0;
}
