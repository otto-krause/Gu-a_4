#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("ingrese el primer numero \n");
    scanf("%d",&num1);
    printf("ingrese el segundo numero \n");
    scanf("%d",&num2);
    printf("ingrese el tercer numero \n");
    scanf("%d",&num3);

    if (num1==num2)
        {
            if (num1==num3)
                {
                    printf("todos los numeros son iguales");
                }
                else
                {
                    printf("el primer y segundo numero son iguales");
                }
        }
        else
            {
                if (num2==num3)
                {
                    printf("el segundo y tercer numero son iguales");
                }
                else
                    {
                        if (num1==num3)
                        {
                            printf("el primer y tercer numero son iguales");
                        }
                        else
                        {
                            printf("todos los numeros son distintos");
                        }
                    }
            }
}
