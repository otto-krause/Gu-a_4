#include <conio.h>
#include <stdio.h>
 int main()
 {
 float altu,pes,imc;
 printf( "\n Ingrese su altura: " );
 scanf( "%f", &altu);
 printf( "\n Ingrese su peso: " );
 scanf( "%f", &pes );
 imc = pes/(altu*altu);
 if(imc>25)
{
 printf ("Persona excedida de peso ");
 }
else
{
 if(imc>=20)
{
 printf ("Persona de peso ideal");
 }
else
{
printf ("Persona por debajo del peso ideal");
 }
 }
 return 0;
 }
