#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cout<<"Ingrese un numero entero: "<<endl;
	cin>>n;
	cout<<"El factorial es: "<<fact(n)<<endl;
	return 0;
}
int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	
	else if (n>0){
		return n*fact(n-1);
	}
	return 0;
}
