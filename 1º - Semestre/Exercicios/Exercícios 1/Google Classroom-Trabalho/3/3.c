/*Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo
por m�s e mais 5% do valor total das vendas por ele efetuadas. Fa�a um programa que
leia o sal�rio fixo do funcion�rio e o valor total de suas vendas. Calcule e mostre o
sal�rio final do vendedor.*/

#include <stdio.h>//Biblioteca de entrada/sa�da
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //sele��o do idioma
    float S, C, S_F; //declara��o de vari�veis
    printf("Sal�rio do Funcion�rio");
    printf("\n\nInforme o sal�rio fixo do funcion�rio:R$");
        scanf("%f", &S);
    printf("\nInforme o valor total vendido pelo funcion�rio:R$");
        scanf("%f", &C);
    C=(5*C)/100;
    S_F=C+S;
    printf("\nO sal�rio final do funcion�rio �:R$%g\n\n", S_F);
    system ("pause"); //fun��o para pausar a execu��o do c�digo
}
