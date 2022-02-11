/*Punteros declaracion de punteros
&n = la direccion de n
*n = la variable coya direccion esta almacenada en n
*/

#include <iostream>

using namespace std;

int main()
{
    int num, *dir_num;
    dir_num =&num;
    num = 20;

    cout<<"Numero:  "<<*dir_num<<endl;
    cout<<"Direccion de mem: "<<dir_num<<endl;


    return 0;
}
