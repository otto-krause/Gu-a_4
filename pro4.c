#include <conio.h>
#include <stdio.h>
int main()
{
 float superf, presion, fuer;
 printf( "\n Pone la superficie: " );
 scanf( "%f", &superf );
 printf( "\n Pone la fuerza: " );
 scanf( "%f", &fuer );
 presion = fuer/superf;
 printf( "\n La presi%cn es: %0.2f", 162, presion);
 getch();
 return 0;
}
