#include <iostream>

using namespace std;
/*hacer una estructura llamada alumno, en la cual se tendran los siguientes campos
-Nombre
-edad
-promedio

comprobar cual de los 3 tiene mejor promedio y posteriormente imprimir los datos del alumno */

struct Alumno{
    char nombre[40];
    int edad;
    int promedio;
}alum[3];

int main()

{
    for(int i=0;i<3;i++){
    fflush (stdin);
    cout<<"Ingrese su nombre"<<endl;
    cin.getline(alum[i].nombre,40,'\n');
    cout<<"Ingrese su edad"<<endl;
    cin>>alum[i].edad;
    cout<<"Ingrese su promedio"<<endl;
    cin>>alum[i].promedio;
    }

    int valorpromedio =0;
    int valormaximo =0;
    int indice; //esta se usa para alojar el promedio maximo en el arreglo

   for(int i=0; i<3; i++){
     valorpromedio = alum[i].promedio;
     if(valorpromedio > valormaximo){ //si valor promedio es mayor a valor maximo
        valormaximo = valorpromedio; //asigna a valor maximo el valor del promedio
        indice = i; //indice se acerca
     }
   }


   //regresar datos
    cout<<"\n\nEl pelotudo con mejor promedio es: ";
    cout<<"\nNombre: "<<alum[indice].nombre<<endl;
    cout<<"\nEdad: "<<alum[indice].edad<<endl;
    cout<<"\nPromedio: "<<alum[indice].promedio<<endl;
    cout<<"\n";

    return 0;
}
