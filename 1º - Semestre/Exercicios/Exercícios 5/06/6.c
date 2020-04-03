/*Faça um programa que calcule o produto de dois números lidos da entrada (n1 e n2)
através do método de somas sucessivas. Suponha que n1 e n2 são positivos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1, N2, R1, Q;
    system("color 70");
    Q=1;
    printf("PRODUTO DE DOIS NÚMEROS INTEIROS\n_____________________________________");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &N1);
    while(N1<0)
    {
        printf("\nInforme novamente o primeiro números:");
            scanf("%d", &N1);
    }
    printf("_____________________________________\n\nInforme o segundo número:");
        scanf("%d", &N2);
    while(N2<0)
    {
        printf("\nInforme novamente o segundo número:");
            scanf("%d", &N2);
    }
    R1=N1;
    while(Q<N2)
    {
        Q++;
        R1=R1+N1;
    }
    printf("_____________________________________\n\nR:%dx%d=%d\n_____________________________________\n\n", N1, N2, R1);
    system("pause");
}
