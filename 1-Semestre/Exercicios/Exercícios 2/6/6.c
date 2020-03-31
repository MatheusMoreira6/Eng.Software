#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A;
    printf("Ano Bissexto");
    printf("\n\nInforme o ano:");
        scanf("%d", &A);
    A=A%4;
    if(A==0)
    {
        printf("\nEsse ano é bissexto!\n\n");
    }
    else
    {
        printf("\nEsse ano não é bissexto!\n\n");
    }
    system("pause");
}
