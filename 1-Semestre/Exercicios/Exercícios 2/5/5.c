#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, R;
    printf("Divis�vel por tr�s");
    printf("\n\nInforme um n�mero:");
        scanf("%d", &N);
    N=N%3;
    if(N==0)
    {
        printf("\nEsse n�mero � divis�vel por tr�s!\n\n");
    }
    else
    {
        printf("\nEsse n�mero n�o � divis�vel por tr�s!\n\n");
    }
    system("pause");
}
