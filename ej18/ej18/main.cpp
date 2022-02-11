#include <iostream>

using namespace std;

int main()
{
    int saldo_inicial = 1000;
    int opc;
    float extra, saldo = 0, retiro;

    cout<<"t\Bienvendo al ATM"<<endl;
    cout<<"1 Ingresar Dinero a su cuenta"<<endl;
    cout<<"2 Retirar dinero de la cuenta"<<endl;
    cout<<"3 Salir"<<endl;
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: ";
            cin>>extra;
            saldo = saldo_inicial + extra;
            cout<<"Dinero en cuenta: "<<saldo;
        break;

        case 2:
            cout<<"Digite la cantidad de dinero que va a retirar ";
            cin>>retiro;

            if(retiro < saldo_inicial){
                cout<<"La cantidad de dinero que desea retirar es mayor a su saldo"<<endl;
            }else{
                saldo = saldo_inicial - retiro;
                cout<<"Dinero en cuenta: "<<saldo;
            }
        case 3: break;

    }

    return 0;
}
