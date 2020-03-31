#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C, D, N;
    printf("Aluno Aprovado/Reprovado");
    printf("\n\nInforme a primeira nota:");
        scanf("%f", &A);
    printf("\nInforme a segunda nota:");
        scanf("%f", &B);
    printf("\nInforme a terceira nota:");
        scanf("%f", &C);
    printf("\nInforme a quarta nota:");
        scanf("%f", &D);
    N=(A+B+C+D)/4;
    if (N>=6)
    {
        printf("\nAluno Aprovado!\n\n");
    }
    else if (N<6, N>=3)
    {
        printf("\nAluno de Exame!\n\n");
    }
    else if (N<3)
    {
        printf("\nAluno Reprovado!\n\n");
    }
    system ("pause");
}
