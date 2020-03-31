/*Fa�a um programa que leia um inteiro positivo N. Calcule e mostre os N primeiros
termos da sequ�ncia (1, 3, 6, 10, 15, 21, ...).*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    int termo = 0; //Declara��o da variavel termo
    int N; //Vari�vel para a quantidade de termos da sequencia
    int i = 1; //Inicializando a variavel i para controlar o la�o

    printf("\nInforme a qtde de termos para a sequencia: ");
    scanf("%d", &N); //Leitura da qtde de termos

    printf("\n\nSequencia de %d termos :", N);

    while(i <= N) //Executa o la�o N vezes
    {
        termo = termo + i; //Calcula o termo
        i++;//Incrementa a variavel i

        printf("  %d", termo); //Escreve o termo na tela
    }

    printf("\n\n"); //Pula DUAS linhas no final
}
