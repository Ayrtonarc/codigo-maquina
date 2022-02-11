/*Escriba una funcion llamada Al_cuadrado() que calcule el cuadrado del valor que se le transmite
y despliegue el resultado,
la funcion debera ser capaz de elevar al cuadrado numeros flotantes*/
#include <iostream>

using namespace std;

void solicitarDatos();
void al_Cuadrado(float x);

float num1;

int main()
{
    solicitarDatos();
    al_Cuadrado(num1);
    return 0;
}

void solicitarDatos(){
cout<<"Numero: "<<endl;
cin>>num1;

}
void al_Cuadrado(float x){
    num1 = num1 * 2;
    cout<<"El numero al cuadrado es: "<<num1<<endl;
}


