#include <iostream>

using namespace std;

int main()
{
    char palabra[]= "Ayrton";
    char palabra2[] = {'A','y','r','t','o','n',};
    char nombre[30];
    cout <<palabra<< endl;
    cout <<palabra2<< endl;

    cout<<"Digite su nombre: ";
    //cin>>nombre<<endl;  //cin no se debe de usar para guardar texto por que si usa espacio para el se le acaba la cadena
    //otra opcion es el gets

    //mejor usar
    cin.getline(nombre,20,'\n');
    cout <<nombre<< endl;
    return 0;
}
