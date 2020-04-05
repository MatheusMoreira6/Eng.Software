/*Faça um programa que leia a idade de várias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero.*/

#include <stdio.h> //Biblioteca entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função system.
#include <locale.h> //Biblioteca para utilização da função setlocale.

void main() //Inicio da função principal.
{
    int I=1, I_M=0; //Declaração de variáveis.
    system("Color F0"); //Mudança de cor.
    system("Title 2º Exercício do Trabalho"); //Definição de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Seleção do idioma.
    printf("Maior idade"); //Mensagens para o usuário.
    printf("\n__________________________________________________\n");
    printf("\nInforme várias idades (0 para encerrar)");
    printf("\n__________________________________________________\n");
    while(I!=0) //Estrutura While para repetição.
    {
        printf("\nInforme uma idade:"); //Solicitação da idade.
            scanf("%d", &I); //Leitura da idade e atribuição a variável I.
        if(I>I_M) //Função If para armazenagem da maior idade informada.
        {
            I_M=I;
        }
    }
    printf("__________________________________________________\n");
    if(I_M>1)
    {
        printf("\nA maior idade informada foi:%d anos", I_M); //Exibir o resultado.
    }
    else
    {
        printf("\nA maior idade informada foi:%d ano", I_M);
    }
    printf("\n__________________________________________________\n\n");
    system("pause"); //Pausar a execução do programa.
}
