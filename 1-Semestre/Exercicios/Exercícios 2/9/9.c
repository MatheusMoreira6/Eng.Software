#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;
    printf("N�meros iguais ou diferentes");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &A);
    printf("\nInforme o segundo n�mero:");
        scanf("%d", &B);
    if(A==B)
    {
        printf("\nEsses n�meros s�o iguais!\n\n");
    }
    else if (A>B)
    {
        printf("\nEsses n�meros s�o diferentes e o primeiro n�mero � maior que o segundo!\n\n");
    }
    else if (B>A)
    {
        printf("\nEsses n�meros s�o diferentes e o segundo n�mero � maior que o primeiro!\n\n");
    }
    system ("pause");
}
