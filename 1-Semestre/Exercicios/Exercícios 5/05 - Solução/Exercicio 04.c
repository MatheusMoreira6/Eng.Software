/*Fa�a um programa que leia dez n�meros inteiros aleat�rios e
apresente os n�meros que s�o divis�veis por 3 (tr�s).*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    int numero; //Declara��o da variavel numero
    int i = 1; //Inicializa a variavel i para controlar o la�o

    printf("\nInforme DEZ numeros inteiros");

    do{
        printf("\n\nInforme o Numero e Tecle Enter: ");
        scanf("%d", &numero); //Leitura do n�mero

        if(numero % 3 == 0)//Verifica se o numero informado eh divisivel por TRES
            printf("Numero divisivel por TRES");
        else
            printf("Numero NAO divisivel por TRES");

        i++;//Incrementa a variavel i

    }while(i <= 10); //Executa o la�o DEZ vezes

    printf("\n\n"); //Pula DUAS linhas no final

}
