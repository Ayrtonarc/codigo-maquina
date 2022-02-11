#include <iostream>
/*Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas
y columnas

Posteriormente mostrar la matriz en pantalla*/
using namespace std;

int main()
{
    int numeros[10][10],filas, columnas;
    cout << "Digite el numero de filas" << endl;
    cin>>filas;
    cout<<"Digite el numero de columas"<<endl;
    cin>>columnas;

    for(int i=0; i<filas;i++){
        for(int j=0; j<columnas;j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
            cin>>numeros[i][j];
        }
    }
//Mostrando la matriz
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        cout<<numeros[i][j];
    }
    cout<<"\n";
}

    return 0;
}
