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
    printf("Números Divisíveis por 3\n_________________________________\n");
    printf("\nInforme 10 números\n_________________________________\n");
    do{
        Q++;
        N++;
        printf("\nInforme %dº número:", Q);
            scanf("%d", &N1);
        while(N1==0)
        {
            printf("\n0 não é um número divisivel\n_________________________________\n\nInforme outro número:");
                scanf("%d", &N1);
        }
        N1=N1%3;
        if (N1==0)
        {
            printf("\nEsse número é divisível por 3!\n_________________________________\n");
        }
        else
        {
            printf("\nEsse número não é divisível por 3\n_________________________________\n");
        }
    }while (N<=10);
    printf("\n\n");
    system("pause");
}
