/*Fa�a um programa que imprima os valores pares de 0 (zero) a 10 (dez).*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    int i; //Declara��o da vari�vel i

    i = 0; //Inicializa a vari�vel i com zero

    printf("\nNumeros Pares de Zero a Dez:");

    while (i <= 10) //Executa enquanto o i for menor ou igual a 10
    {
        printf(" %d", i); //Imprime o valor de i
        i = i + 2; //Incrementa o i em 2
    }
}
