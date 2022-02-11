/*Determinar si un numero es primo o no: con punteros y ademas indicar en que posision de memoria se guardo el numero */
#include <iostream>

using namespace std;

int main()
{
    int numero,*dir_numero, contador =0;

    cout << "introduzca un numero: " << endl;
    cin>>numero;

    dir_numero = &numero; //almacenamos su direccion

    //determinamos si es primo o no
    for(int i=1;i<*dir_numero;i++){
            if(*dir_numero%i == 0){
                contador++;
            }
        }
    if(contador>2){
        cout<<"El numero "<<*dir_numero<<" No es primo"<<endl;
    }else{
        cout<<"El numero "<<*dir_numero<< " Es primo"<<endl;
        cout<<"Direccion en memoria: "<<dir_numero<<endl; //Mostramos su dirreccion en memoria
    }
    return 0;
}
