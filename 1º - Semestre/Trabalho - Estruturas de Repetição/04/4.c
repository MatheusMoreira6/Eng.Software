/*Fa�a um programa que leia uma lista de n�meros cujo �ltimo n�mero � zero.
Ao final, o programa dever� mostrar a soma de todos os n�meros m�ltiplos de
cinco da lista.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N=1, R=0, R1=0;
    system("Color 70");
    system("Title 4� Exerc�cido do Trabalho");
    setlocale(LC_ALL, "Portuguese");
    printf("Soma dos N�meros M�ltiplos de Cinco");
    printf("\n__________________________________________________\n");
    printf("\nInforme 0 para Finalizar a Lista");
    printf("\n__________________________________________________\n");
    while(N!=0)
    {
        printf("\nInforme um n�mero:");
            scanf("%d", &N);
        R=N%5;
        if(R==0)
        {
            R1=R1+N;
        }
    }
    printf("\n__________________________________________________\n");
    printf("\nResultado da soma:%d", R1);
    printf("\n__________________________________________________\n\n");
    system("pause");
}
