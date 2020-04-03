/*Leia a idade de uma pessoa e que determina e mostra se a pessoa È maior ou menor de idade.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int idade;
    printf("Maior ou Menor de Idade");
    printf("\n\nInforme a Ìdade:");
        scanf("%d", &idade);
    if (idade>=18)
    {
        printf("\n… maior de idade\n\n");
    }
    else
    {
        printf("\n… menor de idade\n\n");
    }
    system ("pause");
}
