#include <iostream>

using namespace std;
int numero;
int res;
int main()

{
    cout << "Intruduzca el numero de la tabla de multiplicar que desea calcular" << endl;
    cin>>numero;

    for(int i; i<=10; i++){
        res = numero * i;
        cout<<numero<<" x "<<i<<" = "<<res<<endl;
    }
    return 0;
}
