/*Leia dois n�meros inteiros e que compara e mostra se s�o iguais ou diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;
    printf("Comparador de N�meros");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &A);
    printf("\nInforme o segundo n�mero:");
        scanf("%d", &B);
    if (A==B)
    {
        printf("\nOs n�meros s�o iguais!\n\n");
    }
    else
    {
        printf("\nEsses n�meros s�o diferentes!\n\n");
    }
    system ("pause");
}
