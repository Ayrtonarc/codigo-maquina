#include <iostream>
/*hacer una matriz de 2*2 llenarla de numeros  y copiarla a otra matriz */
using namespace std;

int main()
{
    int matrix[2][2] = {{1,2},{3,4}};
    int matrix2[2][2];


    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            matrix2[i][j] = matrix[i][j];
        }
    }
    //Mostrando matrix2
    for(int i=0; i<2;i++){
      for(int j=0;j<2;j++){
        cout<<matrix2[i][j];
      }
      cout<<"\n";
    }
    return 0;
}
