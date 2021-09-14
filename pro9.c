#include <conio.h>
#include <stdio.h>
 int main()
 {
 char cate;
 int cal,num1;
 printf( "\n Ingrese la categoria del empleado : " );
 scanf( "%c", &cate );
 printf( "\n Ingrese las horas trabajadas del empleado : " );
 scanf( "%d", &num1 );
 switch (cate)
 {
     case 'A':
         cal=num1*200;
         printf("El tipo trabaja unas %d horas\n ",num1);
         printf("\nEl tipo tiene una de categoria de : %c",cate);
         printf("\nEl tipo tiene un sueldo de : %d",cal);
         break;
     case 'a':
         cal=num1*200;
         printf("El tipo trabaja unas %d horas\n ",num1);
         printf("\nEl tipo tiene una de categoria de : %c",cate);
         printf("\nEl tipo tiene un sueldo de : %d",cal);
         break;
     case 'B':
        cal=num1*180;
         printf("El tipo trabaja unas %d horas\n ",num1);
         printf("\nEl tipo tiene una de categoria de : %c",cate);
         printf("\nEl tipo tiene un sueldo de : %d",cal);
         break;
     case 'b':
        cal=num1*180;
         printf("El tipo trabaja unas %d horas\n ",num1);
         printf("\nEl tipo tiene una de categoria de : %c",cate);
         printf("\nEl tipo tiene un sueldo de : %d",cal);
         break;
     case 'C':
         cal=num1*150;
         printf("El tipo trabaja unas %d horas\n ",num1);
         printf("\nEl tipo tiene una de categoria de : %c",cate);
         printf("\nEl tipo tiene un sueldo de : %d",cal);
         break;
     case 'c':
         cal=num1*150;
         printf("El tipo trabaja unas %d horas\n ",num1);
         printf("\nEl tipo tiene una de categoria de : %c",cate);
         printf("\nEl tipo tiene un sueldo de : %d",cal);
         break;
     default:
        printf("puso una categoria invalida");
        break;
 }
 return 0;
 }
