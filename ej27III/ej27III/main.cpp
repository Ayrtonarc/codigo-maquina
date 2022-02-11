#include <iostream>

using namespace std;

int main()
{
    int numero;
    int suma = 0;
    int suma_total = 0;
    int resta = 0;
    int negativo = 0;

    cout << "Introduzca su numero" << endl;
    cin>>numero;

    for(int i =1;i<numero; i+=2){
        suma = suma + i; //Realiza la suma 1+3+5+7+9+...n
    }
    for(int j=1;j<numero;j+=2){
        negativo = j*-1; //Se cambia la j por signo negativo
        resta + negativo;
    }
    suma_total=suma+resta;//Aqui se realiza la suma total (1-2)+(3-4)+(5-6)+....n-m
    cout<<"\n La suma total= "<<suma_total;
    return 0;
}
