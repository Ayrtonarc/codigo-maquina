#include <iostream>
/* Escriba un programa que lea la entrada estandar un caracter e indique en la salida estandar
si el caracter  es una vocal minuscula  o no*/
using namespace std;

int main()
{
    char vocal;
    cout << "Intruduzca una vocal" << endl;
    cin>>vocal;

    if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u' ){
        cout<<"La letra que introdujo es una vocal: "<<vocal<<endl;
    }else if(vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U'){
        cout<<"La letra que introdujo es una vocal Mayuscula: "<<vocal<<endl;
    }else{
        cout<<"La letra que introdujo no es vocal: "<<vocal<<endl;
    }
    return 0;
}
