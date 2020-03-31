/*Leia dois números reais e calcule e mostre a respectiva média.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C;
    printf("Média de dois valores");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nInsira o segundo valor:");
        scanf("%f", &B);
    C=(A+B)/2;
    printf("\nResultado:%g\n\n", C);
    system ("pause");
    return (0);
}
