/*4 pasos
crear el espacio en memoria para almacenar un nodo
cargar el valor dentro del nodo(dato)
cargar el puntero dentro del nodo(*siguiente)
asignar el nuevo nodo a pila
*/
#include <iostream>
#include <conio.h>
#include<stdlib.h> //que funcione en new objetos
using namespace std;
struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&,int); //Prototipo

int main()
{
    Nodo *pila = NULL;
    int n1,n2;

    cout<<"Digite un numero: ";
    cin>>n1;
    agregarPila(pila,n1);

    cout<<"Digite un numero: ";
    cin>>n2;
    agregarPila(pila,n2);



    return 0;
}

void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"/nElemento "<<n<<" agregado a pila correctamente: "<<endl;
}
