#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1, N2;
    printf("Primeiro N�mero � Multiplo do Segundo?");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &N1);
    printf("\nInforme o segundo n�mero:");
        scanf("%d", &N2);
    N1=N1%N2;
    if(N1==0)
    {
        printf("\nO primeiro n�mero � m�ltiplo do segundo!\n\n");
    }
    else
    {
        printf("\nO primeiro n�mero n�o � m�ltiplo do segundo!\n\n");
    }
    system("pause");
}
