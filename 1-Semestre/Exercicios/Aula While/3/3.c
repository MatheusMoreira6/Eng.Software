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
    printf("Potencializa��o (x^n)");
    printf("\n\nInforme um n�mero:");
        scanf("%f", &N);
    printf("\nInforme a pot�ncia:");
        scanf("%d", &P);
    while (Q<=P)
    {
        Q++;
        R=R*N;
    }
    printf("\nResultado:%.2f\n\n", R);
    system("pause");
}
