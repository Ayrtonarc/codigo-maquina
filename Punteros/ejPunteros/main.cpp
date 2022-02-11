#include <iostream>

using namespace std;

int main()
{
    int num;
    num = 20;
    int *dir_memoria = &num;

    cout<<"Numero: "<<num<<endl;
    cout<<"Direccion de memoria: "<<dir_memoria<<endl;



    return 0;
}
