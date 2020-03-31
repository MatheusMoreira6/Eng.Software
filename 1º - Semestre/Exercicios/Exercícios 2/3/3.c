#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int N1, N2, D;
    printf("Diferença entre dois números inteiros");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &N1);
    printf("\nInforme o segundo número:");
        scanf("%d", &N2);
    if (N1>N2)
    {
        D=N1-N2;
        printf("\nA diferença é:%d\n\n", D);
    }
    else
    {
        D=N2-N1;
        printf("\nA diferença é:%d\n\n", D);
    }
    system ("pause");
}
