/*Leia dois n�meros inteiros e que determina e mostra a diferen�a do maior pelo menor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int N1, N2, D;
    printf("Diferen�a entre dois n�meros inteiros");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &N1);
    printf("\nInforme o segundo n�mero:");
        scanf("%d", &N2);
    if (N1>N2)
    {
        D=N1-N2;
        printf("\nA diferen�a �:%d\n\n", D);
    }
    else
    {
        D=N2-N1;
        printf("\nA diferen�a �:%d\n\n", D);
    }
    system ("pause");
}
