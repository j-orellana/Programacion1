#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
   int a, b, line = 12;
   for (a = line/2; a <= line; a = a+2) { //Para la parte superior del corazon
      for (b = 1; b < line-a; b = b+2) //crear espacio antes de la primera prominencia
         cout<<" ";
      for (b = 1; b <= a; b++) //imprimir la primera prominencia
         cout<<"*";
      for (b = 1; b <= line-a; b++) //crear espacio antes de la segunda prominencia
         cout<<" ";
      for (b = 1; b <= a-1; b++) //imprimir la segunda prominencia
         cout<<"*";
      cout<<"\n";
   }

   for (a = line; a >= 0; a--) { //la base del corazon es un triangulo invertido
      for (b = a; b < line; b++) //generar espacio antes del triangulo
         cout<<" ";
      for (b = 1; b <= ((a * 2) - 1); b++) //imprimir el triangulo
         cout<<"*";
      cout<<"\n";
   }
   return 0;
}
