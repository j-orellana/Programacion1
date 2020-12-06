#include<iostream>
int Euclides (int x, int y);
using namespace std;
int main()
{
	cout<<"------------------------------------------\n";
	cout<<"* CALCULADOR DE MCD FORMULA DE EUCLIDES * \n";
	cout<<"------------------------------------------\n";
	int x, y, n;
	do
	{
	
	cout<<"    | INGRESE DOS NUMEROS NATURALES |"<<endl;
	cout<<"          ->X = ";
	cin>>x;
	cout<<"          ->Y = ";
	cin>>y;
	Euclides( x, y);
	cout << "        ->MCD = " << Euclides(x,y) << endl;
	cout<<"----------------------------------------------------------------\n";
	cout<<"* DESEA SALIR PRESIONE 0, DESEA CONTINUAR PRESIONE OTRO NUMERO *\n";
	cin>>n;
	cout<<"----------------------------------------------------------------\n";
	}while(n>0);
	system ("Pause");
	return 0;
}

//funciones
int Euclides (int x, int y)
{

  return (!y) ? x : Euclides(y,x%y);

}
