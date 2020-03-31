/*Um determinado restaurante cobra R$ 22 ,00 por cada quilo de refeição. Faça um
programa que leia o peso do prato servido pelo cliente (em quilos) e calcule e
mostre o valor a pagar.*/

#include <stdio.h>//Biblioteca de entrada/saída
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //seleção do idioma
    float R, P; //declaração de variáveis
    printf("Valor da refeição");
    printf("\n\nInforme o peso do prato(kg):");
        scanf("%f", &P);
    R=P*22;
    printf("\nTotal a ser pago:R$%.2f\n\n", R);
    system ("pause"); //função para pausar a execução do código
}
