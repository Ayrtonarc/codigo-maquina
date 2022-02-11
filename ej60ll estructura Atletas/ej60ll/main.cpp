/*Hacer un arreglo de estructura llamada atleta
para N atletas que contenga los siguientes campos
nombre
pais
numero_medallas
y devuelva  los datos(nombre pais) del atleta que ha ganado
mayor numero de medallas

*/
#include <iostream>

using namespace std;

struct atletas{
 char nombre[20];
 char pais[20];
 int medallas;
}atle[100];

int main()
{
    int n_atletas, maxiMedalla =0;
    int cantmedalla = 0;

    cout << "Introduzca el numero de atletas en la competencia" << endl;
    cin>>n_atletas;

    for(int i=0; i<n_atletas; i++){
            fflush(stdin);
        cout<<i+1<<"ingrese nombre de atleta: "<<endl;
        cin.getline(atle[i].nombre,20,'\n');
        cout<<i+1<<"Ingrese pais de origen: "<<endl;
        cin.getline(atle[i].pais,20,'\n');
        cout<<"Ingrese la cantidad de medallas: ";
        cin>>atle[i].medallas;

        if(atle[i].medallas > maxiMedalla){
            maxiMedalla = atle[i].medallas;
            cantmedalla = i;
        }
        cout<<"\n";
    }
    cout<<"\n. El atleta con mas medallas es: .\n";
    cout<<"Nombre: "<<atle[cantmedalla].nombre<<endl;
    cout<<"Medallas: "<<atle[cantmedalla].medallas<<endl;
    return 0;
}
