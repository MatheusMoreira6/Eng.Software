/*Em uma empresa os funcion�rios renovaram o contrato por tr�s anos.
Na renova��o o sal�rio ser� incrementado em 7%, 6% e 5%, respectivamente,
para os pr�ximos tr�s anos. Em cada ano o sal�rio � reajustado sobre o
sal�rio do ano anterior. Fa�a um programa que leia o sal�rio atual do
funcion�rio e mostre o sal�rio para cada um dos tr�s pr�ximos anos.*/

#include <stdio.h>//Biblioteca de entrada/sa�da
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //sele��o do idioma
    float S, S1, S2, S3; //declara��o de vari�veis
    printf("Reajuste sal�rial para os pr�ximos 3 anos");
    printf("\n\nInforme o sal�rio atual do funcion�rio:R$");
        scanf("%f", &S);
    S1=((7*S)/100)+S;
    S2=((6*S1)/100)+S1;
    S3=((5*S2)/100)+S2;
    printf("\nO sal�rio final para os proximos tr�s anos �: 1�Ano:R$%g", S1);
    printf("\n                                              2�Ano:R$%g", S2);
    printf("\n                                              3�Ano:R$%g\n\n", S3);
    system("pause"); //fun��o para pausar a execu��o do c�digo
}
