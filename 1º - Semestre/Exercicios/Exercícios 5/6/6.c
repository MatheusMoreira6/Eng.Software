/*Fa�a um programa que calcule o produto de dois n�meros lidos da entrada (n1 e n2)
atrav�s do m�todo de somas sucessivas. Suponha que n1 e n2 s�o positivos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1, N2, R1, Q;
    system("color 70");
    Q=1;
    printf("PRODUTO DE DOIS N�MEROS INTEIROS\n_____________________________________");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &N1);
    while(N1<0)
    {
        printf("\nInforme novamente o primeiro n�meros:");
            scanf("%d", &N1);
    }
    printf("_____________________________________\n\nInforme o segundo n�mero:");
        scanf("%d", &N2);
    while(N2<0)
    {
        printf("\nInforme novamente o segundo n�mero:");
            scanf("%d", &N2);
    }
    R1=N1;
    while(Q<N2)
    {
        Q++;
        R1=R1+N1;
    }
    printf("_____________________________________\n\nR:%dx%d=%d\n_____________________________________\n\n", N1, N2, R1);
    system("pause");
}
