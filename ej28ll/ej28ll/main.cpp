
/*En una clase de 5 alumnos
    se han realizado 3 examenes

    se requiere determinar el numero de:
    a) Alumnos que aprobaron los examenes
    b) Alumnos que aprobaron almenos un examen
    c) Alumnos que aprobaron unicamente en el ultimo examen

    Realice un programa que permita la lectura de datos y el calculo de estadisticas.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	float exam1,exam2,exam3, Eva00=0,Eva01=0,Eva02=0;

	cout<<"\tMenu de revicion de Examenes"<<endl;

	for(int i=1; i<=5; i++){

		cout<<"Alumno "<<i<<endl;
		cout<<"-Digite la nota del examen 1: ";cin>>exam1;
		cout<<"-Digite la nota del examen 2: ";cin>>exam2;
		cout<<"-Digite la nota del examen 3: ";cin>>exam3;
		cout<<"\n";

		if((exam1>=6)&&(exam2>=6)&&(exam3>=6)){
			Eva00++;
		}
		if((exam1>=6)||(exam2>=6)||(exam3>=6)){
			Eva01++;
    	}
    	if((exam3>=6)){
			Eva02++;
	}
}
	    cout<<"\nAlumnos que aprobaron todos los examenes: "<<Eva00<<endl;
	    cout<<"\nAlumnos que aprobaron al menos un examen: "<<Eva01<<endl;
	    cout<<"\nAlumnos que aprobaron unicamente el ultimo examen: "<<Eva02<<endl;

	getch();
	return 0;
}
