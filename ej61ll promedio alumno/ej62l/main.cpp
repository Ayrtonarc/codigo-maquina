/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa, La estructura debe tener 3 campos
Horas
Minutos
Segundos
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas*/
#include <iostream>

using namespace std;

struct Tiempo{
    int horas;
    int minutos;
    int segundos;
}et[100];

int main()
{
    int n_etapas, horasT,minutosT,segundosT;

    cout << "Digite el numero de etapas: " << endl;
    cin>>n_etapas;

    for(int i=0; i<n_etapas; i++){ //guardando datos
        cout<<"Horas: ";cin>>et[i].horas;
        cout<<"Minutos: ";cin>>et[i].minutos;
        cout<<"Segundos: ";cin>>et[i].segundos;

        horasT = horasT + et[i].horas;
        minutosT = minutosT + et[i].minutos;
        if(minutosT >= 60){
            minutosT -=60;
            horasT++;
        }
        segundosT = segundosT + et[i].segundos;
        if(segundosT >= 60){
            segundosT -=60;
            minutosT++;
        }
        cout<<"\n";
    }
    cout<<"\nTiempo total empleado\n";
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;
    return 0;
}
