#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1, N2;
    printf("Primeiro Número é Multiplo do Segundo?");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &N1);
    printf("\nInforme o segundo número:");
        scanf("%d", &N2);
    N1=N1%N2;
    if(N1==0)
    {
        printf("\nO primeiro número é múltiplo do segundo!\n\n");
    }
    else
    {
        printf("\nO primeiro número não é múltiplo do segundo!\n\n");
    }
    system("pause");
}
