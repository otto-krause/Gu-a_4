#include <conio.h>
#include <stdio.h>
 int main()
 {
 float hor,tot1,tot2,descu,edad;
 printf( "\n Ingrese la edad del cliente: " );
 scanf( "%f", &edad );
 printf( "\n Ingrese las horas del servicio: " );
scanf( "%f", &hor );
if (edad>=70)
{
tot1 = hor*50-hor*(50*50/100);
}
else
{
if (edad>=60)
{
tot1 = hor*50-hor*(50*30/100);
}
else
{
if (edad>=50)
{
tot1 = hor*50-hor*(50*20/100);
}
else
{
tot1 = hor*50;
}
}
}
tot2 = tot1+(tot1*33/100);
printf ("\n El costo sin impuestos es: %0.2f" ,tot1);
printf ("\n El costo con impuestos es: %0.2f" ,tot2);
 return 0;
 }
