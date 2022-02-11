#include <iostream>

using namespace std;

int main()
{
    int numeros1 [2][2];
    int numeros2 [2][2];

    int suma [2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"ingrese numero ["<<i<<"]["<<j<<"]";
            cin>>numeros1[i][j];
        }
    }
    //mostrar datos de la matriz
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<numeros1[i][j];
        }
        cout<<"\n";
    }
    cout << "segunda matriz" << endl;
    for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
            cout<<"ingrese numero ["<<i<<"]["<<j<<"]";
            cin>>numeros2[i][j];
        }
    }
    //mostrar datos de la matriz
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<numeros2[i][j];
        }
        cout<<"\n";
    }

    //sumar matriz
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            suma [i][j] = numeros1 [i][j] + numeros2[i][j];
        }
    }

      //mostrar datos de la matriz
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<suma[i][j];
        }
        cout<<"\n";
    }

    return 0;
}
