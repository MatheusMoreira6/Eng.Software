/*Dada a f�rmula: H = 1 + 1/2 + 1/3 + 1/4 + ..... + 1/N. . Fa�a
um programa que calcule o n�mero H, dado o n�mero inteiro N.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N;
    float H, Q;
    Q=0;
    H=0;
    printf("Formula: H=1+1/N...");
    printf("\n\nInforme o valor de N:");
        scanf("%d", &N);
    while (Q<N)
    {
        Q++;
        H=H+1/Q;
    }
    printf("\nO valor de H �:%.2f\n\n", H);
    system("pause");
}
