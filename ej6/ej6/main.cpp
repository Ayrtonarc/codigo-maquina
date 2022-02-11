#include <iostream>

using namespace std;

int main()
{
    int numeroA = 0;
    int numeroB = 0;
    int constante1 = 1;
    int resultado;
    cout << "Introduzca su primer numero " << endl;
    cin>>numeroA;
    cout<< "Intruduzca su segundo numero" <<endl;
    cin>>numeroB;

    resultado = (numeroA / numeroB) + constante1;

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}
