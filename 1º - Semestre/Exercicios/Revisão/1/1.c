/*Faça um programa que leia o valor do salário de uma pessoa e o valor de um financiamento pretendido.
Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá escrever
“Financiamento Concedido”, caso contrário ele deverá escrever “Financiamento Negado”.*/

#include <stdio.h> //Biblioteca de entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita específica.

void main ()
{
    float S, F; //declaração de váriavel.
    setlocale(LC_ALL, "Portuguese"); //Definição de idioma.
    system ("color 70"); //Comando para alteração da coloração do software.
    printf("Financiamento\n______________________"); //Mensagens a serem exibidas na tela para o usuário.
    printf("\n\nInforme o seu salário:R$");
        scanf("%f", &S);
    printf("\nInforme o valor do financiamento:R$");
        scanf("%f", &F);
    S=S*5; //Operação matemática
    if (F<=S) //Condição em If para comparação de valores
    {
        printf("______________________\n\nFinanciamento: Concedido!\n______________________\n\n");
    }
    else
    {
        printf("______________________\n\nFinanciamento: Negado!\n______________________\n\n");
    }
    system ("pause"); //Comando para parar a execução do código.
}
