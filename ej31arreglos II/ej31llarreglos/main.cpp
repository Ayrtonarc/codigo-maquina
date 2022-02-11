#include <iostream>

using namespace std;
/*multiplicacion acumulada de numeros del array*/
int main()
{
    int invect[] = {1,2,3,4,5};
    int multiplic = 1; //vale 1 por que si se multiplica por 0 todo sera cero

    for(int i = 0; i<5; i++){
        multiplic = multiplic * invect[i];
    }
    cout<<"La multiplicacion es: "<<multiplic<<endl;
    return 0;
}
