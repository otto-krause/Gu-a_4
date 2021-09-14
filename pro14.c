#include <stdio.h>
#include <conio.h>

int main()
{
    int hor,min,seg,unf,fin;
    printf("ingrese horas \n");
    scanf("%d",&hor);
    printf("ingrese minutos \n");
    scanf("%d",&min);
    printf("ingrese segundos \n");
    scanf("%d",&seg);
    printf("ingrese unidad final \n");
    scanf("%d",&unf);
    switch(unf)
        {
            case 1:
                fin=(hor*60)*60+(min*60)+seg;
                printf("el resultado es %d segundos",fin);
                break;
            case 2:
                fin=(hor*60)+min+(seg/60);
                printf("el resultado es %d minutos",fin);
                break;
            case 3:
                fin=hor+(min/60)+((seg/60)/60);
                printf("el resultado es %d horas",fin);
            default:
                printf("ingrese un numero del 1 al 3");
        }

}
