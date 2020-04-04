/*Faça um programa que leia a idade de várias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int I=1, I_M=0;
    system("Color F0");
    system("Title 2º Exercício do Trabalho");
    setlocale(LC_ALL, "Portuguese");
    printf("Maior idade");
    printf("\n__________________________________________________\n");
    printf("\nInforme várias idades (0 para encerrar)");
    printf("\n__________________________________________________\n");
    while(I!=0)
    {
        printf("\nInforme uma idade:");
            scanf("%d", &I);
        if(I>I_M)
        {
            I_M=I;
        }
    }
    printf("__________________________________________________\n");
    if(I_M>1)
    {
        printf("\nA maior idade informada foi:%d anos", I_M);
    }
    else
    {
        printf("\nA maior idade informada foi:%d ano", I_M);
    }
    printf("\n__________________________________________________\n\n");
    system("pause");
}
