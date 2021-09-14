#include <stdio.h>
#include <conio.h>

int main()
{
    int ca;
    float num1,hij,cal,cal2,cal3;
    printf("Ingrese la categoria del empleado");
    scanf("%d",&ca);
    printf("Ingrese el sueldo");
    scanf("%f",&num1);
    printf("Ingrese la cantidad de hijos");
    scanf("%f",&hij);
    switch(ca)
    {
        case 1:
        cal=((num1*10)/100)+num1;
        if (hij>=4)
        {
            cal2=cal+(500*hij);
            printf("El sueldo total del empleado es de : %0.2f ",cal2);
        }
        else
        {
            cal3=cal+(300*hij);
            printf("El sueldo total del empleado es de : %0.2f ",cal3);
        }
        break;
        case 2:
            cal=((num1*20)/100)+num1;
            if (hij>=4)
            {
                cal2=cal+(500*hij);
                printf("El sueldo total del empleado es de : %0.2f ",cal2);
            }
            else
            {
                cal3=cal+(300*hij);
                printf("El sueldo total del empleado es de : %0.2f ",cal3);
            }
            break;
        default:
        printf("Ingreso una categoria no valida");
    }
    return 0;
}
