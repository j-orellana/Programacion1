#include <iostream>
#include<cstdlib>
#include <cmath>
using namespace std; 

int main(){
	double a, x,b , c, x1, x2;

    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor de c: "<<endl;
    cin>>c;
    x = (b*b) - (4*a*c); 
    
    if (x < 0){
        x = x*(-1);
        cout<<"Solución solo en números complejos"<<endl;
        cout<<"x1 = "<<(-b/(2*a))<<" + "<<(sqrt(x)/(2*a))<<"i"<<endl;
		cout<<"x2 = "<<(-b/(2*a))<<" - "<<(sqrt(x)/(2*a))<<"i"<<endl;
    }
	else{

        x1 = (-b + sqrt(x)) / (2*a);
        x2 = (-b - sqrt(x)) / (2*a);
        
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
return 0;
}
