/*Um determinado restaurante cobra R$ 22 ,00 por cada quilo de refei��o. Fa�a um
programa que leia o peso do prato servido pelo cliente (em quilos) e calcule e
mostre o valor a pagar.*/

#include <stdio.h>//Biblioteca de entrada/sa�da
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //sele��o do idioma
    float R, P; //declara��o de vari�veis
    printf("Valor da refei��o");
    printf("\n\nInforme o peso do prato(kg):");
        scanf("%f", &P);
    R=P*22;
    printf("\nTotal a ser pago:R$%.2f\n\n", R);
    system ("pause"); //fun��o para pausar a execu��o do c�digo
}
