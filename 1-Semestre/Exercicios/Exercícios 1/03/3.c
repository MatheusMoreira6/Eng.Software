/*Leia dois n�meros inteiros e calcule e mostre a soma de seus quadrados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C;
    printf("Soma do quadrado de dois n�meros inteiros\n");
    printf("\nInsira o primeiro n�mero:");
        scanf("%f", &A);
    printf("\nInsira o segundo n�mero:");
        scanf("%f", &B);
    A=A*A;
    B=B*B;
    C=A+B;
    printf("\nResultado:%g\n\n", C);
    system("pause");
    return (0);
}
