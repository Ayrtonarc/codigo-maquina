/*Construya una clase Tiempo que contenga los siguientes atributos enteros
-Horas
-Minutos
-Segundos

Haga que la clase tenga 2 constructores, el primero debe tener 3 parametros Tiempo (int int int)

y el segundo solo tendra un campo que seran los segundos
y desensamble el numero entero largo en horas minutos y segundos.

*/

#include <iostream>

using namespace std;
class Tiempo{
    private: //atributos
    int horas, minutos, segundos;
    public: //metodos
    Tiempo(int,int,int); //constructor 1
    Tiempo(int); //constructor 2

    void mostrarTiempo();




};
//constructor1
Tiempo::Tiempo(int _horas, int _minutos,  int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}
//constructor2
  Tiempo::Tiempo(int segundos){
  horas = (segundos / 3600);
   minutos=int((segundos-horas*3600)/60);
    segundos=segundos-(horas*3600+minutos*60);
}

void Tiempo::mostrarTiempo(){
    cout<<"El tiempo  es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
int main()
{
    Tiempo hoy(12,25,40);
    Tiempo seg(86400);

    hoy.mostrarTiempo();
    seg.mostrarTiempo();
    return 0;
}
