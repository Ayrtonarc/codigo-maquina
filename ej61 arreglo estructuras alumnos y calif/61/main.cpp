/*Hacer 2 estructuras
una llamada promedio que tentra los siguientes campos
nota1
nota2
nota2

y otro llamado alumno que tendra los siguientes miembro
Nombre
Sexo
Edad,

hacer que la estructura promedio este anidada en la estructura alumno,

luego pedir todos los datos para un alumno,

luego calcular su promedio

y por ultiimo
imprimir todos sus datos incluidos el promedio.
*/
#include <iostream>

using namespace std;

struct nota{  //estructura de calificaciones
float nota1;
float nota2;
float nota3;
};

struct alumno{  //estructura de alumno
    char nombre[30];
    char sexo[20];
    int edad;
    struct nota notasfin; //se anida la otra estructura "nota"  y el nombre de variable que lleva el campo
}alumno1; //como solo es un aluno solo es una variable
int main()
{
    float promedio_alumno;

    cout<<"Digite su nombre: ";
    cin.getline(alumno1.nombre,30,'\n'); //getline(acceder a la variable y ahi se guarda en nombre)
    cout << "Escriba Sexo" << endl;
    cin.getline(alumno1.sexo,20,'\n');
    cout<<"Introduzca su edad"<<endl;
    cin>>alumno1.edad;  //ciando es int solo se usa el cin >>

    cout<<"\n :Notas del alumno: \n";
    cout<<"Nota1: "; cin>>alumno1.notasfin.nota1; //alumno uno en notas fin y se guarda la nota
    cout<<"Nota2: "; cin>>alumno1.notasfin.nota2;
    cout<<"Nota3: "; cin>>alumno1.notasfin.nota3;

    promedio_alumno = (alumno1.notasfin.nota1 + alumno1.notasfin.nota2 + alumno1.notasfin.nota3)/3;

    cout<<"\n Datos del alumno \n";
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno<<endl;

    return 0;
}
