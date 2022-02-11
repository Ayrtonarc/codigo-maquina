/*Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N
    alumnos, y calcular cual de todos tiene el mejor promedio e imprimir los datos
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct promedio{
	double nota1,nota2,nota3;
};

struct alumno{
	char nombre[20];
	char sexo;
	int edad;
	struct promedio prom;
}a[40];

int main(){
	int n,pos;
	double mayor,promed;

	cout<<"Digite la cantidad de alumnos: ";
	cin>>n;

	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Digite el nombre del alumno: ";
		cin.getline(a[i].nombre,19);
		cout<<"Digite el sexo del alumno: ";
		cin>>a[i].sexo;
		cout<<"Digite la edad del alumno: ";
		cin>>a[i].edad;

		cout<<"Nota1: ";
		cin>>a[i].prom.nota1;
		cout<<"Nota2: ";
		cin>>a[i].prom.nota2;
		cout<<"Nota3: ";
		cin>>a[i].prom.nota3;

		promed = (a[i].prom.nota1 + a[i].prom.nota2 + a[i].prom.nota3) / 3;

		if(promed > mayor){
			mayor = promed;
			pos = i;
		}
		promed = 0;
		cout<<"\n";
	}

	//system("cls");
	cout<<"\n\tEl alumno con mejor promedio\n\n";
	cout<<"Nombre: "<<a[pos].nombre<<endl;
	cout<<"Sexo: "<<a[pos].sexo<<endl;
	cout<<"Edad: "<<a[pos].edad<<endl;
	cout<<"Promedio: "<<mayor<<endl;

	system("pause");
	return 0;
}
