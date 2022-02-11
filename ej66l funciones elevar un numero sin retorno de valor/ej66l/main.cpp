#include <iostream>
/*Escriba 3: una funcion llamada funpot() que eleve un numero entero que
se le transmita a una potencia en numero entero positivo y despliegue el resultado.
el numero entero positivo debera ser el segundo valor transmitido a la funcion*/
using namespace std;

//prototipos de funcion
void pedirDatos(); //pedir los datos
void funpot(int x, int y); //numero y potencia
int numero, exponente; //variavles que vamos a usar

int main()
{
        pedirDatos();
        funpot(numero, exponente);
    return 0;
}

void pedirDatos(){
cout<<"Digite numero: ";
cin>>numero;
cout<<"Digite el exponente de elevacion";
cin>>exponente;
}

void funpot(int x, int y){
long resultado = 1; //variable nueva y se usa long por que son numeros extensos
    for(int i=1;i<=y;i++){
        resultado *= x;
    }
    cout<<"El resultado es: "<<resultado<<endl;
}
