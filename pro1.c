#include <conio.h>
#include <stdio.h>
int main()
{
 int a,b;
  printf( "Ingrese el primer valor " );
  scanf( "%d", &a );
  printf( "Ingrese el segundo valor" );
  scanf( "%d", &b );
  printf( "Los valores ingresados fueron:\n%d  \n%d", a,b );
  getch();
  return 0;
}
