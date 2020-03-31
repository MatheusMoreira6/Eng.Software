/*Leia dois números reais e calcule e mostre o respectivo produto.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C;
    printf("Multiplicação de dois números reais");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nInsira o segundo valor:");
        scanf("%f", &B);
    C=A*B;
    printf("\nResultado:%g\n\n", C);
    system ("pause");
    return (0);
}
