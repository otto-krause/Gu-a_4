#include <conio.h>
#include <stdio.h>
int main()
{
  int per,are,valor1,valor2;
  printf( "\n Introduzca un numero: " );
  scanf( "%d", &valor1);
  printf( "\n Introduzca otro numero: " );
  scanf( "%d", &valor2 );
  per = 2*valor1+2*valor2;
  are=valor1*valor2;
  printf( "\n El perimetro es de :%d", per );
  printf( "\n El area es de :%d", are );
  getch();
  return 0;
}
