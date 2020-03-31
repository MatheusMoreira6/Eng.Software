/*Jos� tem 1,50 m e cresce 2 cent�metros por ano. Pedro tem 1,10 m e cresce 3 cent�metros por ano.
Construa um programa que calcule em quantos anos Pedro ser� maior que Jos�.*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    float AJ, AP; //Declara��o das variaveis para a altura de Jos� e Pedro
    int ano = 0; //Declara��o da variavel para a qtde de anos

    AJ = 1.50; //Inicializando a altura de Jos�
    AP = 1.1; //Inicializando a altura de Pedro

    while(AJ >= AP) //Executa o la�o enquanto Jos� for mais alto que Pedro
    {
        AJ = AJ + 0.02; //Incrementa a altura de Jos� em 2 centimetros
        AP = AP + 0.03; //Incrementa a altura de Pedro em 3 centimetros
        ano++;//Incrementa a variavel ano
    }

    printf("\nNumero de Anos para que Pedro seja mais alto que Jose: %d\n\n", ano); //Mostra na tela o numero de anos
}
