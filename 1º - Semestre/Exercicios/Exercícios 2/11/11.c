/*Leia três números inteiros e que determina e mostra o menor deles. Suponha que os três valores sejam diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    printf("Menor Número");
    printf("\n\nInforme o primeiro número:");
        scanf("%d", &A);
    printf("\nInforme o segundo número:");
        scanf("%d", &B);
    printf("\nInforme o terceiro número:");
        scanf("%d", &C);
    if (A<B && A<C)
    {
        printf("\nO primeiro número é o menor!\n\n");
    }
    else if (B<A && B<C)
    {
        printf("\nO segundo número é o menor!\n\n");
    }
    else if (C<A && C<B)
    {
        printf("\nO terceiro número é o menor!\n\n");
    }
    else if (A==C && A==B)
    {
        printf("\nTodos os números informados são iguais!\n\n");
    }
    system ("pause");
}
