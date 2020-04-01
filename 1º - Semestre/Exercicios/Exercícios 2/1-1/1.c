/*Leia um número inteiro e que verifica e mostra se o respectivo número é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int N, R;
    setlocale (LC_ALL, "Portuguese");
    printf("Informe um número:");
        scanf("%d", &N);
    R=N%2;
    if (R==0)
    {
        printf("\nO número é par\n\n");
    }
    else
    {
        printf("\nO número é impar\n\n");
    }
    system ("pause");
}
