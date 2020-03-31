/*Leia um número inteiro e calcule e mostre o seu quadrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B;
    printf("Quadrado de um número\n");
    printf("\nInforme um número:");
        scanf("%f", &A);
    B=A*A;
    printf("\nResultado:%g\n\n", B);
    system("pause");
    return (0);
}
