#include <iostream>
/*realice un programa que calcule el producto de 2 matrices
cuadradas de 3x3*/
using namespace std;
int main()
{
    int matriz1[3][3];
    int matriz2[3][3];
    int producto[3][3];
    cout << "primer matriz" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
        cout<<"ingrese numero ["<<i<<"]["<<j<<"]:";
        cin>>matriz1[i][j];
    }
    cout<<"\n";
}
    cout << "segunda matriz" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
        cout<<"ingrese numero ["<<i<<"]["<<j<<"]:";
        cin>>matriz2[i][j];
       }
       cout<<"\n";
    }

    //cout<<"Operacion"<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
                if(matriz1[i][j]== matriz2[i][j]){
                   producto[i][j] = matriz1[i][j] * matriz2[i][j];

                }else{
                cout<<"Matriz no es cuadrada"<<endl;
                }

            }
    //cout<<"Resultado"<<endl;

    for(int i=0;i<3;i++){
            for(int j=0; j<3; j++){
            cout<<producto[i][j];

            }
            cout<<"\n";
        }
    }



    return 0;
}



