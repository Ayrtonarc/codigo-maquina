#include <iostream>

using namespace std;

//definir un vector de numeros y calcular la suma acumulada de un vector de numeros
int vector2[] = {1,2,3,4,10,9,80,70,19};
int suma = 0;
int SumaAcumuladaVector(int vector2);

int main()
{
   // int vector2;

    cout<<"La suma de los elementos del vector: "<<SumaAcumuladaVector(vector2)<< endl;
    return 0;
}

int SumaAcumuladaVector(int vector2[]){

    for(int i =0; i<8; i++){
        suma = suma + vector2[i];
    }
    return 0;
}
