#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N;
    float H, Q;
    Q=1;
    H=0;
    printf("Formula: H=1+1/N...");
    printf("\n\nInforme o valor de N:");
        scanf("%d", &N);
    while (Q<=N)
    {
        H=H+1/Q;
        Q++;
    }
    printf("\nO valor de H é:%.2f\n\n", H);
    system("pause");
}
