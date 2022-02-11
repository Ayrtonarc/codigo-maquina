


#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int n,suma=0,suma_total=0,resta=0,signo=1;

	cout<<"\n Ingrese el numero de elementos n= "; cin>>n;

	for(int i=1;i<=n;i+=2){

		suma=suma+i;//Realiza la suma 1+3+5+7+9+...n
	}
	for(int j=2;j<=n;j+=2){
		signo=j*-1;//Se cambia la j por signo negativo
		resta=resta+signo;//Realiza la resta -2-4-6-8-10-12-...n
	}
	suma_total=suma+resta;//Aqui se realiza la suma total (1-2)+(3-4)+(5-6)+....n-m

	cout<<"\n La suma total= "<<suma_total;

	getch();
	return 0;
}
