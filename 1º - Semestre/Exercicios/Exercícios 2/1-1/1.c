/*Leia um n�mero inteiro e que verifica e mostra se o respectivo n�mero � par ou �mpar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int N, R;
    setlocale (LC_ALL, "Portuguese");
    printf("Informe um n�mero:");
        scanf("%d", &N);
    R=N%2;
    if (R==0)
    {
        printf("\nO n�mero � par\n\n");
    }
    else
    {
        printf("\nO n�mero � impar\n\n");
    }
    system ("pause");
}
