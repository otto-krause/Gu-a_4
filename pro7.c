#include <conio.h>
#include <stdio.h>
int main()
{
int numer1, numer2;
printf( "\n Ingrese un numero: " );
scanf( "%d", &numer1 );
printf( "\n Ingrese otro numero: " );
scanf( "%d", &numer2 );
if (numer1>numer2)
 {
printf (" El numero 1 es mayor que el numero 2 ");
 }
 else
 {
     if (numer1<numer2)
{
printf (" El numero 2 es mayor que el numero 1");
 }
 else
 {
      if (numer1==numer2)
{
 printf (" El numero 1 y 2 son iguales");
 }
 else
 {
     printf("Ingreso un valor invalido");
 }
 }
 }

 return 0;
 }
