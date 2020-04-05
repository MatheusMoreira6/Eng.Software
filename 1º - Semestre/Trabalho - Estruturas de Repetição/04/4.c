/*Faça um programa que leia uma lista de números cujo último número é zero.
Ao final, o programa deverá mostrar a soma de todos os números múltiplos de
cinco da lista.*/

#include <stdio.h> //Biblioteca entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função system.
#include <locale.h> //Biblioteca para utilização da função setlocale.

void main() //Inicio da função principal.
{
    int N=1, R=0, R1=0; //Declaração de variáveis.
    system("Color F0"); //Mudança de cor.
    system("Title 4º Exercícido do Trabalho"); //Definição de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Seleção do idioma.
    printf("Soma dos números múltiplos de cinco"); //Mensagens para o usuário.
    printf("\n__________________________________________________\n");
    printf("\nInforme 0 para finalizar a lista");
    printf("\n__________________________________________________\n");
    while(N!=0) //Estrutura While para repetição.
    {
        printf("\nInforme um número:"); //Solicitação da número.
            scanf("%d", &N); //Leitura do número informado e atribuição a variável N.
        R=N%5; //Resto da divisão.
        if(R==0)
        {
            R1=R1+N;
        }
    }
    printf("\n__________________________________________________\n");
    printf("\nResultado da soma:%d", R1); //Exibir resultado.
    printf("\n__________________________________________________\n\n");
    system("pause"); //Pausar a execução do programa.
}
