/*Escreva um programa para ler 2 valores (se o segundo valor informado for ZERO, deve ser
lido um novo valor) e imprimir o resultado da divis�o do primeiro pelo segundo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    float N1, N2, DIV;
    system ("color 70");
    printf("D�vis�o de Dois N�meros\n______________________________");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%f", &N1);
    do{
        printf("______________________________\n\nInforme o segundo n�mero:");
            scanf("%f", &N2);
    }while (N2==0);
    DIV=N1/N2;
    printf("______________________________\n\nResultado da divis�o:%g\n______________________________\n\n", DIV);
    system("pause");
}
