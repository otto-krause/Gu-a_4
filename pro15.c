#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2,num3;
    printf("ingrese el primer numero \n");
    scanf("%d",&num1);
    printf("ingrese el segundo numero \n");
    scanf("%d",&num2);
    printf("ingrese el tercer numero \n");
    scanf("%d",&num3);

    if (num1<num2 && num2<num3)
    {
        printf("Los numeros estan ingresados de forma ascendente");
    }
    else
    {
        if (num1>num2 && num2>num3)
            {
                printf("Los numeros estan ingresados de forma descendente");
            }
            else
            {
                if (num1==num2 && num2==num3)
                {
                    printf("Los numeros son iguales");
                }
                else
                printf("Los numeros estan ingresados de forma aleatoria");
            }
    }
    return 0;

}

