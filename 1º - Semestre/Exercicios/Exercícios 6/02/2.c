/*Construa um programa que calcule o fatorial de um número N inteiro e positivo (N!).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N, N1, N2;
    system("color 70");
    setlocale(LC_ALL, "Portuguese");
    printf("Fatorial de N (N!);");
    printf("\n________________________________");
    printf("\n\nInforme um número:");
        scanf("%d", &N);
    if(N<0)
    {
        while(N<0)
        {
            printf("------------------\n");
            printf("|Número negativo!|\n");
            printf("------------------\n");
            printf("\nInforme um novo número:");
                scanf("%d", &N);
        }
    }
    N1=N;
    N2=N-1;
    while(N2>0)
    {

        N1=N1*N2;
        N2--;
    }
    if(N==0)
    {
        N1=1;
    }
    printf("________________________________\n");
    printf("\nResultado(%d!):%d\n", N, N1);
    printf("________________________________\n\n");
    system("pause");
}
