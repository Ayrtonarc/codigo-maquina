/*Escriba un programa en c++ que devuelva una parte fraccionaria de cualquier numero introducido por el usuario
por ejemplo si se introduce el numero  256.897 deberia desplegarse el numero 0.897*/
#include <iostream>

using namespace std;
//prototipos de funcion
void pedirDatos();
void calculoF(long x);

long numero;

int main()
{
    pedirDatos();
    calculoF(numero);
    return 0;
}
void pedirDatos(){
    cout <<"Introduzca datos"<< endl;
    cin>>numero;
}

void calculoF(long x){  //llamarla tal y como se declara en el prototipo
  long resultado = 0;
  long fracc = x;
  int aux = x;
  resultado = fracc - aux;
  cout<<"Solo decimal"<<resultado<<endl;
}
