/*Faça um programa que leia um número inteiro positivo n e imprima a soma dos n primeiros
 números pares maiores do que zero (Por exemplo, se for informado n = 4, o algoritmo deve
imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).*/

#include <stdio.h> //Biblioteca entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função system.
#include <locale.h> //Biblioteca para utilização da função setlocale.

void main() //Inicio da função principal.
{
    int N=0, N1=0, N2=0, C=0; //Declaração de variáveis.
    system("Color F0"); //Mudança de cor.
    system("Title 3º Exercícido do Trabalho"); //Definição de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Seleção do idioma.
    printf("Soma dos N primeiros números pares"); //Mensagens para o usuário.
    printf("\n__________________________________________________\n\n");
    printf("Informe um número:"); //Solicitação do número.
        scanf("%d", &N);
    while(C<N) //Estrutura While para repetição.
    {
        C++; //Atribuição de +1 na variável C para controle da função while.
        N1=N1+2;
        N2=N2+N1;
    }
    printf("__________________________________________________\n");
    printf("\nResultado:%d", N2); //Exibir resultado;
    printf("\n__________________________________________________\n\n");
    system("pause"); //Pausar a execução do programa.
}
