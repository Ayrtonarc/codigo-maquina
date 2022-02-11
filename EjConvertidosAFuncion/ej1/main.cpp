#include <iostream>

using namespace std;

int numero1 = 0;
int numero2 = 0;
int suma = 0;
int resta = 0;
int multiplicacion = 0;
int division = 0;

int Zuma(int numero1, int numero2);
int Rezta(int numero1, int numero2);
int Multi(int numero1, int numero2);
int DiviZion(int numero1, int numero2);

int main()
{
    int numero1; //declarar variable para que la funcion la pueda utilizar
    int numero2;

    cout<<"introduzca el primer numero"<<endl;
    cin>>numero1;

    cout<<"introduzca el segundo numero"<<endl;
    cin>>numero2;


    cout<<"El resultado de la suma es: "<<Zuma(numero1, numero2)<<endl; //poner parametros
    cout<<"El resultado de la resta es: "<<Rezta(numero1, numero2)<<endl; //poner parametros
    cout<<"El resultado de la multiplicacion es: "<<Multi(numero1, numero2)<<endl;
    cout<<"El resultado de la Division es: "<<DiviZion(numero1, numero2)<<endl;
    return 0;


}

int Zuma(int numero1, int numero2){
    suma = numero1 + numero2;
    return suma;
}

int Rezta(int numero1, int numero2){
    resta = numero1 - numero2;
    return resta;
}
int Multi(int numero1, int numero2){
    multiplicacion = numero1 * numero2;
    return multiplicacion;
}
int DiviZion(int numero1,int numero2){
    division = numero1 / numero2;
    return division;
}

