/*Leia tr�s n�meros reais, calcule e mostre a soma e sua respectiva m�dia.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C, D, E;
    printf("Soma e M�dia de tr�s n�meros");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nInsira o segundo valor:");
        scanf("%f", &B);
    printf("\nInsira o terceiro valor:");
        scanf("%f", &C);
    D=A+B+C;
    E=(A+B+C)/3;
    printf("\nResultado(Soma):%g", D);
    printf("\n\nResultado(M�dia):%g\n\n", E);
    system ("pause");
    return (0);
}
