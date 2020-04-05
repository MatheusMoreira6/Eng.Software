/*Faça um programa que leia a altura de 10 pessoas e calcule e mostre
quantas destas pessoas possui altura maior que 1,80m.*/

#include <stdio.h> //Biblioteca entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função system.
#include <locale.h> //Biblioteca para utilização da função setlocale.

void main() //Inicio da função principal.
{
    float A, A1=1.80; //Declaração de variáveis.
    int N=1, N2=0;
    system("Color F0"); //Mudança de cor.
    setlocale(LC_ALL, "Portuguese"); //Seleção do idioma.
    system("Title 1º Exercício do Trabalho"); //Definição de titulo para a janela do prompt de comando.
    printf("Quantidade de pessoas maiores que 1,80m"); //Mensagens para o usuário.
    printf("\n__________________________________________________");
    printf("\n\nInforme a altura de 10 pessoas\n");
    printf("__________________________________________________\n");
    for(N=1; N<=10; N++) //Estrutura for para repetição do código.
    {
        printf("\n%dº pessoa:", N); //Solicitação da altura.
            scanf("%f", &A); //Leitura da altura e atribuição a variável A.
        if(A>A1) //Função if para contagem de quantas pessoas são maiores que 1,80.
        {
            N2++; //Atribuição de +1 na variável N2.
        }
    }
    printf("__________________________________________________\n");
    printf("\nResultado: %d pessoas são maiores que 1,80m\n", N2);  //Exibição do resultado.
    printf("__________________________________________________\n\n");
    system("pause"); //Pausar a execução do programa.
}
