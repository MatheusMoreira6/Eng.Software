/*Após as negociações sobre um plano de saúde, o governo enviou a tabela de valores abaixo.
Faça um programa que leia a idade de uma pessoa e imprima o valor que ela deverá pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int I;
    printf("Valor do Plano de Saúde");
    printf("\n\nInforme a idade:");
        scanf("%d", &I);
    if(I<=10)
    {
        printf("\nValor do Plano: R$30,00\n\n");
    }
    else if (I>=11 && I<=29)
    {
        printf("\nValor do Plano: R$60,00\n\n");
    }
    else if (I>=30 && I<=45)
    {
        printf("\nValor do Plano: R$120,00 \n\n");
    }
    else if (I>=46 && I<=59)
    {
        printf("\nValor do Plano: R$150,00\n\n");
    }
    else if (I>59)
    {
        printf("\nValor do Plano: R$250,00\n\n");
    }
    system ("pause");
}
