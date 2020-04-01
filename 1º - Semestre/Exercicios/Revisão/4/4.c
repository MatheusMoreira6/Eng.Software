/*Faça um programa que leia a quantidade atual em estoque, quantidade máxima em estoque
e quantidade mínima em estoque de um produto. O programa deve calcular e mostrar a
quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a
quantidade em estoque for maior ou igual a quantidade média escrever a mensagem
“Não efetuar compra”, senão escrever a mensagem “Efetuar compra”.*/

#include <stdio.h>//Biblioteca de entrada/saída.
#include <stdlib.h>//Biblioteca para utilização da função "system".
#include <locale.h>//Biblioteca para funcionamento de uma linguagem de escrita específica.

void main ()
{
    setlocale(LC_ALL, "Portuguese");//Definição de idioma.
    float QA, QMA, QMI, QME;//declaração de váriavel.
    system("color 70");//Comando para alteração da coloração do software.
    printf("               Estoque");//Mensagens a serem exibidas na tela para o usuário.
    printf("\n______________________________________");
    printf("\n\nInforme a quantidade atual em estoque:");
        scanf("%f", &QA);
    printf("\nInforme a quantidade máxima em estoque:");
        scanf("%f", &QMA);
    printf("\nInforme a quantidade mínima em estoque:");
        scanf("%f", &QMI);
    QME=((QMA+QMI)/2); //Operação matemática.
    if (QA>=QME) //Condição em If para comparação de valores.
    {
        printf("______________________________________\n\nRecomendação: Não efetuar a compra!\n______________________________________\n\n");
    }
    else
    {
        printf("______________________________________\n\nRecomendação: Efetuar a compra!\n______________________________________\n\n");
    }
    system("pause"); //Comando para parar a execução do código.
}
