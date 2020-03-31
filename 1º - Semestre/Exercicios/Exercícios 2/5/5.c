#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, R;
    printf("Divisível por três");
    printf("\n\nInforme um número:");
        scanf("%d", &N);
    N=N%3;
    if(N==0)
    {
        printf("\nEsse número é divisível por três!\n\n");
    }
    else
    {
        printf("\nEsse número não é divisível por três!\n\n");
    }
    system("pause");
}
