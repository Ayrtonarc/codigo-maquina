#include <iostream>

/* Escriba un programa que lea valores enteros
hata que se introduzca un valor entre el rango de 20-30 o se intruduzca el valor 0.
el programe debe entregar la suma de los valores a 0 introducidos*/
using namespace std;

int numero; //declarando variables
int suma;
int main()
{


    do{
        cout<<"Digite un numero: "; //pedir dumero de manera contimua
        cin>>numero;

        if(numero>0){  //si el numero es cero sumar los demas
            suma = suma + numero;
        }

    }while( ((numero<20) || (numero > 30)) && (numero !=0));  //hacerlo mientras el numero sea menor a 2o 0 mayor a 20 && el numero no sea igual a cero

    cout<<"\La suma es: "<<suma<<endl;
    return 0;
}
