#include <iostream>
/*Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta
*/
using namespace std;

int main()
{
    int numero[100][100],filas, columnas;
    char bandera = 'F'; //para hacer una validacion de si es simetrica o no

    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;
    cout << "Hello world!" << endl;


    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Ingrese numero: ["<<i<<"]["<<j<<"]:";
            cin>>numero[i][j];
        }
    }

    if(filas==columnas){ // si el numero de filas y columas es 3 x3 entonces es simetrica
        for(int i=0; i<filas;i++){  //recorrer el array
            for(int j=0;j<columnas;j++){
                if(numero[i][j] == numero[j][i]){ //hacer la comparacion
                    bandera = 'V';
                }
            }
        }
    }
    if(bandera = 'V'){
        cout<<"La matriz es simetrica";
    }
    else{
        cout<<"La matriz no es simetrica";
    }
    return 0;
}
