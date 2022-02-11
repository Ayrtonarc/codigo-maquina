#include <iostream>
/*Construya una clase rectangulo que tenga los siguientes atributos
largo ancho y los siguientes metodos
perimetro y area*/
using namespace std;

class Rectangulo{
private:
    int ancho;
    int largo;
public:
Rectangulo(int,int);
void perimetro();
void area();
};

//iniciar el constructor
Rectangulo::Rectangulo(int _ancho, int _largo){
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo:: perimetro(){
    cout<<"El perimetro del rectangulo es "<<(largo * 2) + (ancho * 2)<<endl;

}
void Rectangulo::area(){
    cout<<"El area del rectangulo es: "<<largo * ancho<<endl;
}

int main()
{
    Rectangulo p1(4,9);

    p1.perimetro();
    p1.area();
    cout << "Hello world!" << endl;
    return 0;
}
