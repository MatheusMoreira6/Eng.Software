/*Fa�a um programa que dados um n�mero real x e um natural n, exiba a pot�ncia x^n.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    float N, R;
    int P, Q;
    R=1;
    Q=0;
    printf("Potencializa��o (x^n)");
    printf("\n\nInforme a base:");
        scanf("%f", &N);
    printf("\nInforme o expoente:");
        scanf("%d", &P);
    while (Q<P)
    {
        Q++;
        R=R*N;
    }
    printf("\nResultado:%g\n\n", R);
    system("pause");
}
