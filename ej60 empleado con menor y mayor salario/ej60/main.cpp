/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa  y que imprima los datos del empleado con mayor y menor salario*/

#include <iostream>

using namespace std;

struct Empleado{
    char nombre[20];
    float salario;
}emp[100];



int main()
{
    int n_empleados,posM=0,posm=0;
    float mayor=0, menor = 999999;

    cout<<"Digite el numero de empleados: ";
    cin>>n_empleados;

    for(int i =0; i<n_empleados;i++){
            fflush(stdin);
        cout<<i+1<<"ingrese nombre de empleado: "<<endl; //el i+1 es para empezar desde empleado numero 1 en vez que desde el numero 0
        cin.getline(emp[i].nombre,20,'\n');
        cout<<i+1<<"Ingrese su salario: "<<endl;
        cin>>emp[i].salario;


    if(emp[i].salario > mayor){  //mayor = 0 si salario es mayor a 0
        mayor = emp[i].salario; //mayor va a valer el salario
        posM = i;   //el indise se llamara posM para llamarlo en las salidas de texto
    }
    if(emp[i].salario < menor){
       menor = emp[i].salario;
       posm = i;
    }
    cout<<"\n";
}
    cout<<"\n. :Datos del empleado con mayor salario: .\n";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;

    return 0;
}
