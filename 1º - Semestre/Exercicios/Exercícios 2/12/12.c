#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    printf("N�mero Intermedi�rio");
    printf("\n\nInforme o primeiro n�mero:");
        scanf("%d", &A);
    printf("\nInforme o segundo n�mero:");
        scanf("%d", &B);
    printf("\nInforme o terceiro n�mero:");
        scanf("%d", &C);
    if ((A>B && A<C) || (A<B && A>C))
    {
        printf("\nO primeiro valor � o n�mero intermedi�rio!\n\n");
    }
    else if ((B>A && B<C) || (B<A && B>C))
    {
        printf("\nO segundo valor � o n�mero intermedi�rio!\n\n");
    }
    else if ((C>A && C<B) || (C<A && C>B))
    {
        printf("\nO terceiro valor � o n�mero intermedi�rio!\n\n");
    }
    system("pause");
}
