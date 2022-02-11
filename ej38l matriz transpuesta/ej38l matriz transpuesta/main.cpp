#include <iostream>
/* Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta
la matriz transpuesta es aquella en la que la culumna esta cambiada por la fila*/
using namespace std;

int main()
{
    int numeros[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<"ingrese numero ["<<i<<"]["<<j<<"]";
                cin>>numeros[i][j];
            }
        }

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){

                cout<<numeros[i][j];
            }
            cout<<"\n";
        }

    cout << "Hello world!" << endl;

    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){

                cout<<numeros[j][i];
            }
            cout<<"\n";
        }
    return 0;
}
