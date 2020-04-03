/*Faça um programa que leia uma lista de números aleatórios, cujo último número é -99.
Ao final, o programa deve mostrar a media aritmética de todos os números positivos da
lista, os números negativos devem ser descartados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float N, S=0;
    int Q=0;
    printf("Informe uma sequencia de números cujo o ultimo valor seja -99\n");
    do{
        printf("\nInforme o número:");
            scanf("%f", &N);
        if(N>0)
        {
            S=S+N;
            Q++;
        }
    }while(N!=-99);
    if(Q==0)
    {
        printf("\nNenhum número positivo informado!\n\n");
    }
    else
    {
        S=S/Q;
        printf("\nMédia dos números:%g\n\n", S);
    }
    system("pause");
}
