#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    char V;
    int Q=1, Q1=9, N, N_M=0;
    do{
        printf("Maior número\n______________________________________\n");
        printf("\nInforme 10 números\n______________________________________\n");
        printf("\nInforme 10º número:");
            scanf("%d", &N);
        do{
            if(N>N_M)
            {
                N_M=N;
            }
            printf("\nInforme %dº número:", Q1);
                scanf("%d", &N);
            Q++;
            Q1--;
        }while(Q<10);
        printf("______________________________________\n\nO maior número informado é:%d\n______________________________________\n\n", N_M);
        printf("Deseja fazer novamente(S/N)?");
            V=getche();
        if(V=='S' || V=='s')
        {
            system("cls");
        }
    }while(V=='S' || V=='s');
}
