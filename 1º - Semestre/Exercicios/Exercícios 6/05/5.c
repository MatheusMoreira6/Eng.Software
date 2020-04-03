/*Construa um programa que receba um número
inteiro e verifique se o mesmo é primo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N, D=1,D1=0, R;
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    printf("Números Primos");
    printf("\n__________________________________");
    printf("\n\nInforme um número:");
        scanf("%d", &N);
    while(D<=N)
    {
        R=N%D;
        if(R==0)
        {
            D1++;
        }
        D++;
    }
    if(D1==2)
    {
        printf("__________________________________\n");
        printf("\nEsse número(%d): É primo\n", N);
        printf("__________________________________\n\n");
    }
    else
    {
        printf("__________________________________\n");
        printf("\nEsse número(%d): Não é primo\n", N);
        printf("__________________________________\n\n");
    }
    system("pause");
}
