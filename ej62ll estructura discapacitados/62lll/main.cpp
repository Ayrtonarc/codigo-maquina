/*Defina una estructura que sirva para representar a una persona
la estructura debe contener dos campos:
 el nombre de la persona
 y una valor de tipo logico que indica si la persona
y un valor de tipo de discapacidad

Realice un programa que dado un vector de personas
rellene dos nuevos vectores:

uno que contenga las personas que no tienen ninguna discapacidad
y otro que tenga a las personas con discapacidad
 */
#include <iostream>

using namespace std;

struct Persona{
    char nombre;
    bool discapacidad = true;
}personas[30],personasDis[30],personas[30];
int main()
{
    int n_numeroPersonas;

    cout << "Digite el numero de personas" << endl;
    cin>>n_numeroPersonas;

    for(int i=0;i<n_numeroPersonas;i++){
        flush(stdin);
        cout<<"Nombre :"<<endl;
        cin.getline(personas[i].nombre,30,'\n');
        cout<<"Discapacidad (1/0)? :"<<endl;
        cin>>personas[i].discapacidad;
    }
    //
    return 0;
}
