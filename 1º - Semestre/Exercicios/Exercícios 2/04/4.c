/*Leia dois números inteiros e que compara e mostra se são iguais ou diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;
    printf("Comparador de Números");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &A);
    printf("\nInforme o segundo número:");
        scanf("%d", &B);
    if (A==B)
    {
        printf("\nOs números são iguais!\n\n");
    }
    else
    {
        printf("\nEsses números são diferentes!\n\n");
    }
    system ("pause");
}
