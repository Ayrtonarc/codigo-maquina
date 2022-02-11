#include <iostream>

/*En una clase de 5 alumnos
    se han realizado 3 examenes

    se requiere determinar el numero de:
    a) Alumnos que aprobaron los examenes
    b) Alumnos que aprobaron almenos un examen
    c) Alumnos que aprobaron unicamente en el ultimo examen

    Realice un programa que permita la lectura de datos y el calculo de estadisticas.
*/
using namespace std;

int main()
{
    float examen1;
    float examen2;
    float examen3;
    float evaluacion1;
    float evaluacion2;
    float evaluacion3;

    for(int alumnos=1; alumnos<=5; alumnos++){
        cout<<"Alumno "<<alumnos<<endl;
        cout<<"Introduzca calificacion del examen 1: ";
        cin>>examen1;
        cout<<"Introduzca calificacion del examen 2: ";
        cin>>examen2;
        cout<<"Introduzca calificacion del examen 3: ";
        cin>>examen3;
        cout<<"\n";

        if((examen1>=6)&&(examen2>=6)&&(examen3>=6)){
            evaluacion1++;
        }
        if((examen1>=6) || (examen2 >=6) || (examen3 >=6)){
            evaluacion2++;
        }
        if(examen3>=6){
            evaluacion3++;
        }
    }
    cout<<"\nAlumnos que pasaron todos los examenes: "<<evaluacion1<<endl;
    cout<<"\nAlumnos que pasaron almenos un examen: "<<evaluacion2<<endl;
    cout<<"\nAlumnos que solo pasaron un examen: "<<evaluacion3<<endl;


    return 0;
}
