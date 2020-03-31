#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B, C, D, M;
    printf("Aluno Aprovado/Reprovado");
    printf("\n\nInforme a primeira nota:");
        scanf("%f", &A);
    printf("\nInforme a segunda nota:");
        scanf("%f", &B);
    printf("\nInforme a terceira nota:");
        scanf("%f", &C);
    printf("\nInforme a quarta nota:");
        scanf("%f", &D);
    M=(A+B+C+D)/4;
    if(M>=6)
    {
        printf("\nAluno Aprovado!\n\n");
    }
    else
    {
        printf("\nAluno Reprovado!\n\n");
    }
    system("pause");
}
