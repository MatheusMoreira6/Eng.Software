/*Em uma empresa os funcionários renovaram o contrato por três anos.
Na renovação o salário será incrementado em 7%, 6% e 5%, respectivamente,
para os próximos três anos. Em cada ano o salário é reajustado sobre o
salário do ano anterior. Faça um programa que leia o salário atual do
funcionário e mostre o salário para cada um dos três próximos anos.*/

#include <stdio.h>//Biblioteca de entrada/saída
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //seleção do idioma
    float S, S1, S2, S3; //declaração de variáveis
    printf("Reajuste salárial para os próximos 3 anos");
    printf("\n\nInforme o salário atual do funcionário:R$");
        scanf("%f", &S);
    S1=((7*S)/100)+S;
    S2=((6*S1)/100)+S1;
    S3=((5*S2)/100)+S2;
    printf("\nO salário final para os proximos três anos é: 1ºAno:R$%g", S1);
    printf("\n                                              2ºAno:R$%g", S2);
    printf("\n                                              3ºAno:R$%g\n\n", S3);
    system("pause"); //função para pausar a execução do código
}
