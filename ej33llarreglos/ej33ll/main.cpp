
/*Escribe un programa que defina un vector de numeros x
calcule si existe algun numero(sima total = a numero de dentro del arreglo)
 en el vector cuyo valor equivale a la suma del resto
de numeros del vector*/

#include<iostream>
#include<math.h>
#include<conio.h>
#include<time.h>

using namespace std;

int main(){
    int n, elemento = 0, suma= 0; //se declaran las variables

	cout<<"Digite numero de elementos del vector: "; // se solicita al usuario indicar el tamaño
    cin>>n; //se asigna a n el tamaño

    int vector[n]; // vector declarado con el tamaño de n

    for(int i=0; i<n; i++){ //recorrer el vector

	cout<<"Ingrese el elemento numero "<<i+1<<endl; //solicitar vector y asignar tamaño
	cin >> elemento; //gruardar cada elemento,
    	vector[i] = elemento; //vector i es = elemento
    	suma += vector[i]; //suma = suma + vector
    }

    cout<<"suma es: "<<suma<<endl; // sacar el resultado de la suma

    for(int i=0; i<n; i++){ // se recorre el vector
    if(vector[i] == suma/2){ // condicional si el vector es = a la suma entre 2 poner que el elemento i ´+ 1 cumple con la condicion
       cout<<"Elemento "<<i+1<<" cumple con la condicion"<<endl;
    }else {
    }

}
    cout<<"\n";
getch();
return 0;
}

