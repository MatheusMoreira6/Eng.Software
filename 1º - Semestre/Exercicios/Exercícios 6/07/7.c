#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, U_T=1, T_A=0, I, A;
    system("color F0");
    printf("Informe o número de termos na série de Fibonacci:");
        scanf("%d", &N);
    printf("\nSerie de Fibonacci com %d termos: ", N);
    for(I=0; I<N; I++)
    {
        printf("%d, ", U_T);
        A=U_T;
        U_T=U_T+T_A;
        T_A=A;
    }
    printf("\n\n");
    system("pause");
}
