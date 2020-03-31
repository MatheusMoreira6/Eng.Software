/*Leia um valor de horas, minutos e segundos e calcule e mostre quantos segundos se passaram desde o início do dia.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int H, M, S, T;
    printf("Quantidade de segundos");
    printf("\n\nInforme a quantidade de horas:");
        scanf("%d", &H);
    printf("\nInforme a quantidade de minutos:");
        scanf("%d", &M);
    printf("\nInforme a quantidade de segundos:");
        scanf("%d", &S);
    H=H*3600;
    M=M*60;
    T=H+M+S;
    printf("\nJá se passaram:%d segundos\n\n", T);
    system ("pause");
    return (0);
}
