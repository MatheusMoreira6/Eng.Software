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
    Q=1;
    printf("Potencialização (x^n)");
    printf("\n\nInforme um número:");
        scanf("%f", &N);
    printf("\nInforme a potência:");
        scanf("%d", &P);
    while (Q<=P)
    {
        Q++;
        R=R*N;
    }
    printf("\nResultado:%.2f\n\n", R);
    system("pause");
}
