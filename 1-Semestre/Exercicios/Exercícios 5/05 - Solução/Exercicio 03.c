/*Fa�a um programa que leia uma lista de n�meros aleat�rios, cujo �ltimo n�mero � -99.
Ao final, o programa deve mostrar a media aritm�tica de todos os n�meros positivos da lista,
os n�meros negativos devem ser descartados.*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    float numero; //Declara��o da variavel numero
    float soma = 0; //Inicializa a variavel soma com zero
    int quant = 0; //Inicializa a variavel quant com zero

    printf("\nInforme uma sequencia de numeros cujo o ultimo numer eh -99\n");

    do{
        printf("\nInforme o Numero e Tecle Enter: ");
        scanf("%f", &numero); //Leitura do n�mero
        soma = soma + numero; //Acumula em soma o n�mero informado
        quant ++; //Incrementa a vari�vel soma
    }while(numero != -99); //Executa o la�o enquanto numero for diferente de -99

    printf("\nMedia dos numeros: %g", soma/quant); //Apresenta a m�dia calculada
}
