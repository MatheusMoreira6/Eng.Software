/*Escreva um programa para ler as notas da 1� e 2� avalia��o de um aluno, calcule e imprima a m�dia (simples)
semestral. S� devem ser aceitos valores v�lidos durante a leitura (0 a 10) para cada nota.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    float N1, N2, M;
    printf("          M�dia Semetral\n__________________________________");
    printf("\n\nInforme a primeira nota:");
        scanf("%f", &N1);
            while(N1<0 || N1>10)
            {
                printf("----------------\n|Nota Invalida!|\n----------------\n\nInforme novamente a primeira nota:");
                    scanf("%f", &N1);
            }
    printf("__________________________________\n\nInforme a segunda nota:");
        scanf("%f", &N2);
            while(N2<0 || N2>10)
            {
                printf("----------------\n|Nota Invalida!|\n----------------\n\nInforme novamente a segunda nota:");
                    scanf("%f", &N2);
            }
    M=(N1+N2)/2;
    printf("__________________________________\n\nM�dia final:%.1f\n__________________________________\n\n", M);
    system("pause");
}

