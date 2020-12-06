#include<iostream>
using namespace std;
int main(){
	int n, m;
	cout<<"Ingrese limite superior: ";
	cin>>n;
	cout<<"Ingrese limite inferior: ";
	cin>>m;
	m--;
	cout<<"Sumatoria:  "<<((n / 2 ) * (n + 1 )) -	((m / 2 ) * (m + 1 ));
	return 0;
}
