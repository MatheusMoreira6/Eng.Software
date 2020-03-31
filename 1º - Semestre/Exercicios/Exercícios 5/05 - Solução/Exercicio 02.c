/*Fa�a um programa que leia um n�mero qualquer e divida por 2 (dois),
sucessivamente, at� que o resultado seja menor que 1 (um), mostre a sequencia de resultados.*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    float n; //Declara��o da vari�vel n

    printf("\nInforme um Numero: ");
    scanf("%f", &n); //Leitura do n�mero

    printf("\nResultados das divisoes sucessivas de %g por 2: ", n);

    do{
        n = n / 2;
        printf("  %g", n); //Imprime o resultado da divis�o anterior por 2
    }while(n >= 1.0); //Executa enquanto n for maior ou igual que 1
}
