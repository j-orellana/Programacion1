#include<iostream>
#include<iomanip>
int main()
{
	int n;
	using namespace std;
	cout<<"Ingrese el valor de n (Entero Positivo)"<<endl,
	cin>>n;
	
	for (int i=n; i>=1; i--)
	{
		for (int j=1; j<=i; j++)
			cout<<"*";
		
		cout<<endl;
	}
	system("pause");
	return 0;
}
