#include<iostream>
using namespace std;
int main(){
	double n, c=0,  suma = 0, mayor, menor ;
	cout<<"Ingrese numeros a evaluar, para salir ingrese 0"<<endl;
	do {
		cout<<"Ingrese numero a evaluar:  ";
		cin>>n;
		if (n==0)
			continue;
		if (n>mayor){ 
			mayor = n;
		}
		if (n>=0 && n<menor || c==0) {
			menor = n;
		}
			
		suma=suma+n;
		c++;
	}while (n!=0);
	cout<<"Promedio: "<<suma/c<<"\nMayor: "<<mayor<<"\nMenor: "<<menor;
	return 0;
}
