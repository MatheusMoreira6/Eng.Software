/*Dado N inteiro positivo, dizemos que N � perfeito se for igual a soma de seus divisores positivos diferentes de N.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N, D=1, R, R1=0;
    setlocale(LC_ALL, "Portuguese");
    system("Color 70");
    printf("N�mero Perfeito");
    printf("\n________________________________");
    printf("\n\nInforme um n�mero:");
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
        printf("\n\nEsse n�mero(%d): � perfeito\n", N);
        printf("________________________________\n\n");
    }
    else
    {
        printf("________________________________");
        printf("\n\nEsse n�mero(%d): N�o � perfeito\n", N);
        printf("________________________________\n\n");
    }
    system("pause");
}
