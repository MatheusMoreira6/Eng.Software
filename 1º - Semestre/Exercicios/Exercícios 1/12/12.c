/*Leia três notas de um aluno e calcule e mostre a média final deste aluno.
Considere que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float N1, N2, N3, M;
    printf("Média Ponderada");
    printf("\n\nInforme a primeira nota:");
        scanf("%f", &N1);
    printf("\nInforme a segunda nota:");
        scanf("%f", &N2);
    printf("\nInforme a terceira nota:");
        scanf("%f", &N3);
    M=((N1*2)+(N2*3)+(N3*5))/10;
    printf("\nMédia ponderada:%g\n\n", M);
    system("pause");
}
