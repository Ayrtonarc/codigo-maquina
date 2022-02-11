#include <iostream>
#include<stdlib.h>
using namespace std;
/*Escriba un programa que tome la temparatura cada 4 horas,
 la temperatura exterior leyendola durante un periodo de 24 hrs


Es decir  debe leer 6 temperaturas calcule la temperatura mediadel dia  la temperatura mas alta y la mas baja*/
int main()
{
    float temperatura;
    float tmaxima = 0;
    float tminima = 100;
    float tmedia = 0;

    for(int i=1; i<6; i++){
        cout<<"Valor de la temperatura a "<<i*4<<" horas";
        cin>>temperatura;

        if(temperatura > tmaxima){
            tmaxima=temperatura;
        }if(temperatura<tminima){

        }
        tmedia +=temperatura/6;
    }
    cout<<"Temperatura mas alta: "<<tmaxima<<endl;
	cout<<"Temperatura mas baja: "<<tminima<<endl;
	cout<<"La media de los valores: "<<tmedia<<endl;

	system("pause");
    return 0;
}




