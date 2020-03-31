#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int I;
    printf("Categoria do Nadador");
    printf("\n\nInforme a idade do nadador:");
        scanf("%d", &I);
    if(I<5)
    {
        printf("\nCategoria: Sem Categoria\n\n\n");
    }
    else if (I>=5 && I<=7)
    {
        printf("\nCategoria: Infantil A\n\n\n");
    }
    else if (I>=8 && I<=10)
    {
        printf("\nCategoria: Infantil B\n\n\n");
    }
    else if (I>=11 && I<=13)
    {
        printf("\nCategoria: Juvenil A\n\n\n");
    }
    else if (I>=14 && I<=17)
    {
        printf("\nCategoria: Juvenil B\n\n\n");
    }
    else if (I>17)
    {
        printf("\nCategoria: Adulto\n\n\n");
    }
    system ("pause");
}
