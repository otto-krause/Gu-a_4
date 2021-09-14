#include <conio.h>
#include <stdio.h>
int main()
{
  float num1,num2,por1,por2;
  printf( "Ingrese el numero de hombres postulados :  " );
  scanf( "%f", &num1);
  printf( "Ingrese el numero de mujeres postuladas : " );
  scanf( "%f", &num2 );
  por1=(100*num1)/(num1+num2);
  por2=(100*num2)/(num1+num2);
  printf( "El porcentaje de los hombres postulados es de :  %0.2f  ", por1 );
  printf( "\nEl porcentaje de las mujeres postuladas es de :  %0.2f  ", por2 );
  getch();
  return 0;
}
