#include <iostream>

using namespace std;
class Fecha{
 private: //private
     int dia,mes,anio;
 public: //metodos
    Fecha(int,int,int);
    Fecha(long);
    void mostrarFecha();
};

Fecha::Fecha(int _dia, int _mes, int _anio){ //constructor 1
    anio = _anio;
    mes = _mes;
    dia = _dia;
}
//constructor2
Fecha::Fecha(long fecha){
    anio = int(fecha/10000); //extraer el año
    mes = int ((fecha-anio*10000)/100);
    dia = int (fecha-anio*10000-mes*100);
}
    void Fecha::mostrarFecha(){
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main()
{
    Fecha hoy(9,1,2017);
    Fecha ayer(20170108);

    hoy.mostrarFecha();
    ayer.mostrarFecha();

    cout << "Hello world!" << endl;
    return 0;
}
