/*Faça um programa que leia um inteiro positivo N. Calcule e mostre os N
primeiros termos da sequência (1, 3, 6, 10, 15, 21, ...).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, N2, Q;
    char V;
    system("color 70");
    do{
        printf("Números Triangulares\n________________________________________");
        do{
            printf("\n\nInforme um número positivo:");
                scanf("%d", &N);
            printf("________________________________________\n");
        }while(N<=0);
        do{
            N2=N;
            Q=N;
            while(Q>1)
            {
                Q--;
                N2=N2+Q;
            }
            if(N2!=1)
            {
                printf("\nNúmero Triangular:%d\n\n", N2);
            }
            if(N!=1)
            {
                N--;
            }
        }while(N!=1);
        printf("\nNúmero Triangular:%d\n", N);
        printf("________________________________________\n\nDeseja realizar outra operação(S/N)?");
            V=getche();
        if(V=='S' || V=='s')
        {
            system("cls");
        }
    }while(V=='S' || V=='s');
}
