#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float N1, N2, N3, ME, MA;
    int I;
    printf("Média de Aproveitamento dos Alunos");
    printf("\n\nInforme o número de identificação do aluno:");
        scanf("%d", &I);
    printf("\nInforme a 1ºNota:");
        scanf("%f", &N1);
    printf("\nInforme a 2ºNota:");
        scanf("%f", &N2);
    printf("\nInforme a 3ºNota:");
        scanf("%f", &N3);
    ME=(N1+N2+N3)/3;
    MA=(N1+(N2*2)+(N3*3)+ME)/7;
    if (MA>=9.0)
    {
        printf("\nIdentificação do aluno:%d", I);
        printf("\nConceito: A\n\n");
    }
    else if (MA<9.0 && MA>=7.5)
    {
        printf("\nIdentificação do aluno:%d", I);
        printf("\nConceito: B\n\n");
    }
    else if (MA<7.5 && MA>=6.0)
    {
        printf("\nIdentificação do aluno:%d", I);
        printf("\nConceito: C\n\n");
    }
    else if (MA<6.0 && MA>=4.0)
    {
        printf("\nIdentificação do aluno:%d", I);
        printf("\nConceito: D\n\n");
    }
    else if (MA<4.0)
    {
        printf("\nIdentificação do aluno:%d", I);
        printf("\nConceito: E\n\n");
    }
    system ("pause");
}
