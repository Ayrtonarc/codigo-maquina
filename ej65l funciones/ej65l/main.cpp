/*Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, multiplique  estos dos numeros y despliegue el resultado*/
#include <iostream>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float num1,num2;

int main()
{
    pedirDatos();
    mult(num1,num2);
    return 0;
}

void pedirDatos(){
    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;


}
void mult(float x, float y){
  float multiplicacion = x * y;

  cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
