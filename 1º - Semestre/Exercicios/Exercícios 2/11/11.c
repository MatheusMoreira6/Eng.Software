/*Leia tr�s n�meros inteiros e que determina e mostra o menor deles. Suponha que os tr�s valores sejam diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    printf("Menor N�mero");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &A);
    printf("\nInforme o segundo n�mero:");
        scanf("%d", &B);
    printf("\nInforme o terceiro n�mero:");
        scanf("%d", &C);
    if (A<B && A<C)
    {
        printf("\nO primeiro n�mero � o menor!\n\n");
    }
    else if (B<A && B<C)
    {
        printf("\nO segundo n�mero � o menor!\n\n");
    }
    else if (C<A && C<B)
    {
        printf("\nO terceiro n�mero � o menor!\n\n");
    }
    else if (A==C && A==B)
    {
        printf("\nTodos os n�meros informados s�o iguais!\n\n");
    }
    system ("pause");
}
