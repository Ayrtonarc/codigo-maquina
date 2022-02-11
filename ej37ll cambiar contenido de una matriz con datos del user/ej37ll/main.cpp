#include <iostream>
/*Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de numeros aleatorios, copiar el contenido a otra matriz y
por ultimo mostrarla en una pantalla*/
using namespace std;

int main()
{
    int numeros[10][10],fila, columna;
    int matrixCopia[10][10];

    cout<<"introduzca el numero de filas"<<endl;
    cin>>fila;
    cout<<"Introduzca el numero de columnas"<<endl;
    cin>>columna;
//almacenar numeros
    for(int i=0; i<fila; i++){ //dos for anidados
        for(int j=0;j<columna;j++){
            cout<<"digite un numero ["<<i<<"]["<<j<<"]"<<endl;
            cin>>numeros[i][j]; //GUARDAR DATOS
        }
    }
//mostrar datos
    for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }

//Copiar contenido a otra matriz
     for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            matrixCopia[i][j] = numeros[i][j];
        }

    }

    //mostrar datos
    for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            cout<<matrixCopia[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
