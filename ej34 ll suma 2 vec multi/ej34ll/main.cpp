/*Hacer un programa que lea 5 numeros en un arreglo
los copie a otro arreglo multiplicados por 2
muestre el segundo arreglo.
*/

#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {1,2,3,4,5};
    int multiplicados[5];

    //copiar y multiplicar
    for(int i=0; i<5; i++){
        multiplicados[i] = numbers[i]*2;

    }

    for(int i=0; i<5;i++){
        cout<<multiplicados[i]<<endl;
    }

    return 0;
}
