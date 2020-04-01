/*Faça um programa que leia um número inteiro positivo N.
Calcule e mostre o maior quadrado menor ou igual a N.
Por exemplo, se N for maior ou igual a 38, o menor
quadrado é 36 (quadrado de 6).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    system ("Color 70");
    setlocale(LC_ALL, "Portuguese");
    int N1, N2=0, R, R1;
    printf("Maior quadrado menor que N");
    printf("\n\nInforme um número(N):");
        scanf("%d", &N1);
    R=sqrt(N1);
    while (N2<R)
    {
        N2++;
    }
    R1=N2*N2;
    if(R1==N1)
    {
        N2--;
        R1=N2*N2;
    }
    else
    {
        R1=N2*N2;
    }
    printf("\nEsse é o quadrado mais próximo de %d: %d (quadrado de %d)\n\n", N1, R1, N2);
    system("pause");
}
