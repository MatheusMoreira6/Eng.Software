/*Fa�a um programa que leia uma lista de n�meros aleat�rios, cujo �ltimo n�mero � -99.
Ao final, o programa deve mostrar a media aritm�tica de todos os n�meros positivos da
lista, os n�meros negativos devem ser descartados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float N, S=0;
    int Q=0;
    printf("Informe uma sequencia de n�meros cujo o ultimo valor seja -99\n");
    do{
        printf("\nInforme o n�mero:");
            scanf("%f", &N);
        if(N>0)
        {
            S=S+N;
            Q++;
        }
    }while(N!=-99);
    if(Q==0)
    {
        printf("\nNenhum n�mero positivo informado!\n\n");
    }
    else
    {
        S=S/Q;
        printf("\nM�dia dos n�meros:%g\n\n", S);
    }
    system("pause");
}
