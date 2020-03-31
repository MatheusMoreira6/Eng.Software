#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;
    printf("Números iguais ou diferentes");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &A);
    printf("\nInforme o segundo número:");
        scanf("%d", &B);
    if(A==B)
    {
        printf("\nEsses números são iguais!\n\n");
    }
    else if (A>B)
    {
        printf("\nEsses números são diferentes e o primeiro número é maior que o segundo!\n\n");
    }
    else if (B>A)
    {
        printf("\nEsses números são diferentes e o segundo número é maior que o primeiro!\n\n");
    }
    system ("pause");
}
