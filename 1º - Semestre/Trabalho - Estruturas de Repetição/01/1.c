/*Fa�a um programa que leia a altura de 10 pessoas e calcule e mostre
quantas destas pessoas possui altura maior que 1,80m.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float A, A1=1.80;
    int N=1, N2=0;
    system("Color F0");
    setlocale(LC_ALL, "Portuguese");
    system("Title 1� Exerc�cio do Trabalho");
    printf("Quantidade de pessoas maiores que 1,80m");
    printf("\n__________________________________________________");
    printf("\n\nInforme a altura de 10 pessoas\n");
    printf("__________________________________________________\n");
    for(N=1; N<=10; N++)
    {
        printf("\n%d� pessoa:", N);
            scanf("%f", &A);
        if(A>A1)
        {
            N2++;
        }
    }
    printf("__________________________________________________\n");
    printf("\nResultado: %d pessoas s�o maiores que 1,80m\n", N2);
    printf("__________________________________________________\n\n");
    system("pause");
}
