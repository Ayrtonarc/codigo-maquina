#include <iostream>
//clases en c++
using namespace std;

class Persona{
  private: //Atributos
      int edad;
      string nombre;
  public:                                                      //metodos
      Persona(int,string);                                     // se declara el constructor
    void leer();
    void correr();
};

//Constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;

}

void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}
void Persona::correr(){
    cout<<"Soy"<<nombre<<" y estoy corriendo un maraton"<<endl;
}
int main()
{
    Persona p1 = Persona(20,"Alex");
    Persona p2 (19,"Maria");
    Persona p3 (21,"Juan");

    p1.leer();
    p2.correr();

    p3.leer();
    p3.correr();

    cout << "Hello world!" << endl;
    return 0;
}
