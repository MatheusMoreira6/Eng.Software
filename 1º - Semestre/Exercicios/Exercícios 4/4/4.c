#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int C;
    float V, V_C;
    system("color 70");
    printf("Desconto sobre o preço do produto");
    printf("\n\nInforme o código do produto:");
        scanf("%d", &C);
    if (C==1001 || C==1254 || C==1548 || C==1687 || C==1923)
    {
        printf("\nInforme o valor do produto:R$");
            scanf("%f", &V);
        switch (C)
        {
            case 1001:
                V_C=V-(V*0.22);
                printf("\nValor do produto:R$%2.f (-22%%)\n\n", V_C);
                break;
            case 1254:
                V_C=V-(V*0.30);
                printf("\nValor do produto:R$%2.f (-30%%)\n\n", V_C);
                break;
            case 1548:
                V_C=V-(V*0.32);
                printf("\nValor do produto:R$%2.f (-32%%)\n\n", V_C);
                break;
            case 1687:
                V_C=V-(V*0.37);
                printf("\nValor do produto:R$%2.f (-37%%)\n\n", V_C);
                break;
            case 1923:
                V_C=V-(V*0.40);
                printf("\nValor do produto:R$%2.f (-40%%)\n\n", V_C);
                break;
        }
    }
    else
    {
        printf("\nCódigo Inválido\n\n");
    }
    system ("pause");
}
