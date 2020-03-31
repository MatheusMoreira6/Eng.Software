/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo
por mês e mais 5% do valor total das vendas por ele efetuadas. Faça um programa que
leia o salário fixo do funcionário e o valor total de suas vendas. Calcule e mostre o
salário final do vendedor.*/

#include <stdio.h>//Biblioteca de entrada/saída
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //seleção do idioma
    float S, C, S_F; //declaração de variáveis
    printf("Salário do Funcionário");
    printf("\n\nInforme o salário fixo do funcionário:R$");
        scanf("%f", &S);
    printf("\nInforme o valor total vendido pelo funcionário:R$");
        scanf("%f", &C);
    C=(5*C)/100;
    S_F=C+S;
    printf("\nO salário final do funcionário é:R$%g\n\n", S_F);
    system ("pause"); //função para pausar a execução do código
}
