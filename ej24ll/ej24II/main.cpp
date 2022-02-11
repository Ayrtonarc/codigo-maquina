#include <iostream>
#include <cstdlib>

using namespace std;
/*Escriba un programa que calcule x^y donde tanto x como y  son enteros positivos son usar la funcion pow*/
int base;
int exponente;
int resultado;

int main()
{
    cout << "Introduzca la base: " << endl;
    cin>>base;
    cout<<"Introduzca el exponente" <<endl;
    cin>>exponente;

    int x=1;
    while(x<exponente){
        if(resultado<base){
            resultado=base*base;
        }else{
            resultado = resultado*base;
        }
        x++;
    }
    cout<<"El resultado es: " <<resultado<<endl;
    return 0;
}
