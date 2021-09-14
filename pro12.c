#include <conio.h>
#include <stdio.h>
 int main()
 {
 float super1, super2, super3, pobla1, pobla2, pobla3, densi1, densi2, densi3;
 printf( "\n Ingrese la superficie de un pais X : " );
 scanf( "%f", &super1 );
 printf( "\n Ingrese la superficie de un pais Y : " );
 scanf( "%f", &super2 );
 printf( "\n Ingrese la superficie de un pais Z : " );
 scanf( "%f", &super3 );
 printf( "\n Ingrese la poblacion del pais X : " );
 scanf( "%f", &pobla1 );
 printf( "\n Ingrese la poblacion del pais Y : " );
 scanf( "%f", &pobla2 );
 printf( "\n Ingrese la poblacion del pais Z : " );
 scanf( "%f", &pobla3 );
 densi1 = pobla1/super1;
 densi2 = pobla2/super2;
 densi3 = pobla3/super3;
 if(densi1>densi2 && densi1>densi3)
{
 printf ("El pais X es el mas densamente poblado ");
 }
else
{
 if(densi2>densi1 && densi2>densi3)
{
 printf ("El pais Y es el mas densamente poblado ");
 }
else
{
    if (densi3>densi1 && densi3>densi2)
    {
         printf ("El pais Z es el mas densamente poblado ");
    }
}
{
 printf ("ERROR");
 }
 }
 return 0;
}
