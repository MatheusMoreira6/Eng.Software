#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float N1, N2, N3, ME, MA;
    int I;
    printf("M�dia de Aproveitamento dos Alunos");
    printf("\n\nInforme o n�mero de identifica��o do aluno:");
        scanf("%d", &I);
    printf("\nInforme a 1�Nota:");
        scanf("%f", &N1);
    printf("\nInforme a 2�Nota:");
        scanf("%f", &N2);
    printf("\nInforme a 3�Nota:");
        scanf("%f", &N3);
    ME=(N1+N2+N3)/3;
    MA=(N1+(N2*2)+(N3*3)+ME)/7;
    if (MA>=9.0)
    {
        printf("\nIdentifica��o do aluno:%d", I);
        printf("\nConceito: A\n\n");
    }
    else if (MA<9.0 && MA>=7.5)
    {
        printf("\nIdentifica��o do aluno:%d", I);
        printf("\nConceito: B\n\n");
    }
    else if (MA<7.5 && MA>=6.0)
    {
        printf("\nIdentifica��o do aluno:%d", I);
        printf("\nConceito: C\n\n");
    }
    else if (MA<6.0 && MA>=4.0)
    {
        printf("\nIdentifica��o do aluno:%d", I);
        printf("\nConceito: D\n\n");
    }
    else if (MA<4.0)
    {
        printf("\nIdentifica��o do aluno:%d", I);
        printf("\nConceito: E\n\n");
    }
    system ("pause");
}
