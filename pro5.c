#include <conio.h>
#include <stdio.h>
 int main()
 {
 float resis1, resis2, resis3, resis4, resis5, tot;
 printf( "\n Ingresa el valor de la resistencia 1: " );
 scanf( "%f", &resis1 );
 printf( "\n Ingresa el valor de la resistencia 2: " );
 scanf( "%f", &resis2 );
 printf( "\n Ingresa el valor de la resistencia 3: " );
 scanf( "%f", &resis3 );
 printf( "\n Ingresa el valor de la resistencia 4: " );
 scanf( "%f", &resis4 );
 printf( "\n Ingresa el valor de la resistencia 5: " );
 scanf( "%f", &resis5 );
 tot = resis1+resis2+resis3+resis4+resis5;
 printf( "\n La resistencia total es de : %0.2f ohm", tot );
 return 0;
 }
