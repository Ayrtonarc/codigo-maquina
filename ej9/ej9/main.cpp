#include <iostream>

using namespace std;
/*la calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta con un 30%  del total, la nota teorica cuenta un 60% y la nota de participacion que cuenta el 10% restante
escroba un prpgrama que lea la entranda estandar y escriba  en la salida estandar. las tres notas de un alimnos y escrba en la salida estandar su nota final*/
int main()
{
    float practica;
    float teoria;
    float participacion;
    float suma = 0;

    cout << "Calificaciond de practica: " << endl;
    cin>>practica;
    cout<< "Calificacion de teoria: " <<endl;
    cin>>teoria;
    cout<<"calificacion de participacion: "<<endl;
    cin>>participacion;

    practica = practica * 0.30;
    teoria = teoria * 0.60;
    participacion = participacion * 0.10;

    suma = practica + teoria + participacion;
    cout<<"La calificacion final es: "<<suma<<endl;
    return 0;
}
