/*Faça um programa que leia um número inteiro positivo n e imprima a soma dos n primeiros
 números pares maiores do que zero (Por exemplo, se for informado n = 4, o algoritmo deve
imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N=0, N1=0, N2=0, C=0;
    system("Color F0");
    system("Title 3º Exercícido do Trabalho");
    setlocale(LC_ALL, "Portuguese");
    printf("Soma dos N primeiros números pares");
    printf("\n__________________________________________________\n\n");
    printf("Informe um número:");
        scanf("%d", &N);
    while(C<N)
    {
        C++;
        N1=N1+2;
        N2=N2+N1;
    }
    printf("__________________________________________________\n");
    printf("\nResultado:%d", N2);
    printf("\n__________________________________________________\n\n");
    system("pause");
}
