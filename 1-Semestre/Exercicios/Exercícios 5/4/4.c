#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    int N, N1, Q;
    N=1;
    Q=0;
    printf("N�meros Divis�veis por 3\n_________________________________\n");
    printf("\nInforme 10 n�meros\n_________________________________\n");
    do{
        Q++;
        N++;
        printf("\nInforme %d� n�mero:", Q);
            scanf("%d", &N1);
        while(N1==0)
        {
            printf("\n0 n�o � um n�mero divisivel\n_________________________________\n\nInforme outro n�mero:");
                scanf("%d", &N1);
        }
        N1=N1%3;
        if (N1==0)
        {
            printf("\nEsse n�mero � divis�vel por 3!\n_________________________________\n");
        }
        else
        {
            printf("\nEsse n�mero n�o � divis�vel por 3\n_________________________________\n");
        }
    }while (N<=10);
    printf("\n\n");
    system("pause");
}
