/*Dado N inteiro positivo, dizemos que N é perfeito se for igual a soma de seus divisores positivos diferentes de N.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N, D=1, R, R1=0;
    setlocale(LC_ALL, "Portuguese");
    system("Color 70");
    printf("Número Perfeito");
    printf("\n________________________________");
    printf("\n\nInforme um número:");
        scanf("%d", &N);
    while(D<N)
    {
        R=N%D;
        if(R==0)
        {
            R1=R1+D;
        }
        D++;
    }
    if(R1==N)
    {
        printf("________________________________");
        printf("\n\nEsse número(%d): É perfeito\n", N);
        printf("________________________________\n\n");
    }
    else
    {
        printf("________________________________");
        printf("\n\nEsse número(%d): Não é perfeito\n", N);
        printf("________________________________\n\n");
    }
    system("pause");
}
