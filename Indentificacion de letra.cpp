#include<iostream>
using namespace  std ;
int  main ()
{
	char l;
	cout << "Ingrese una letra" << endl;
	cin >> l;
	
	switch (l) {
		case  'a' :
			cout << "Vocal" << endl;
			break;
		case  'e' :
			cout << "Vocal" << endl;
			break;
		case  'i' :
			cout << "Vocal" << endl;
			break;
		case  'o' :
			cout << "Vocal" << endl;
			break;
		case  'u' :
			cout << "Vocal" << endl;
			break ;
		default:
			cout << "Consonante" << endl;
	}
	return  0 ;
}
