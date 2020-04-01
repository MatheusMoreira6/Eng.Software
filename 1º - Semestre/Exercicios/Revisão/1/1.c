/*Fa�a um programa que leia o valor do sal�rio de uma pessoa e o valor de um financiamento pretendido.
Caso o financiamento seja menor ou igual a 5 vezes o sal�rio da pessoa, o programa dever� escrever
�Financiamento Concedido�, caso contr�rio ele dever� escrever �Financiamento Negado�.*/

#include <stdio.h> //Biblioteca de entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita espec�fica.

void main ()
{
    float S, F; //declara��o de v�riavel.
    setlocale(LC_ALL, "Portuguese"); //Defini��o de idioma.
    system ("color 70"); //Comando para altera��o da colora��o do software.
    printf("Financiamento\n______________________"); //Mensagens a serem exibidas na tela para o usu�rio.
    printf("\n\nInforme o seu sal�rio:R$");
        scanf("%f", &S);
    printf("\nInforme o valor do financiamento:R$");
        scanf("%f", &F);
    S=S*5; //Opera��o matem�tica
    if (F<=S) //Condi��o em If para compara��o de valores
    {
        printf("______________________\n\nFinanciamento: Concedido!\n______________________\n\n");
    }
    else
    {
        printf("______________________\n\nFinanciamento: Negado!\n______________________\n\n");
    }
    system ("pause"); //Comando para parar a execu��o do c�digo.
}
