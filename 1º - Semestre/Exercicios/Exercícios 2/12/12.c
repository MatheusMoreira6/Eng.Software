/*Leia três números inteiros e que determina e mostra o valor intermediário,
entre o menor e o maior número. Suponha que os números sejam diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    printf("Número Intermediário");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &A);
    printf("\nInforme o segundo número:");
        scanf("%d", &B);
    printf("\nInforme o terceiro número:");
        scanf("%d", &C);
    if ((A>B && A<C) || (A<B && A>C))
    {
        printf("\nO primeiro valor é o número intermediário!\n\n");
    }
    else if ((B>A && B<C) || (B<A && B>C))
    {
        printf("\nO segundo valor é o número intermediário!\n\n");
    }
    else if ((C>A && C<B) || (C<A && C>B))
    {
        printf("\nO terceiro valor é o número intermediário!\n\n");
    }
    else if (A==B && A==C)
    {
        printf("\nTodos os números informados são iguais!\n\n");
    }
    system("pause");
}
