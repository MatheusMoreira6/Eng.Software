/*Leia dois números inteiros e calcule e mostre a soma de seus quadrados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C;
    printf("Soma do quadrado de dois números inteiros\n");
    printf("\nInsira o primeiro número:");
        scanf("%f", &A);
    printf("\nInsira o segundo número:");
        scanf("%f", &B);
    A=A*A;
    B=B*B;
    C=A+B;
    printf("\nResultado:%g\n\n", C);
    system("pause");
    return (0);
}
