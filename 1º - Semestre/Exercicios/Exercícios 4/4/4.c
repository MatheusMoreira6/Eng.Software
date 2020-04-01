/*Uma loja de materiais de constru��o pretende promover uma liquida��o de seu estoque
com descontos vari�veis de acordo com o produto. Para isto, a loja necessita de um
programa que leia o c�digo e o valor do produto e calcule e mostre o valor do produto
com o devido desconto conforme apresenta a tabela abaixo. Dessa forma, fa�a o programa
que atenda a necessidade da loja.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int C;
    float V, V_C;
    system("color 70");
    printf("Desconto sobre o pre�o do produto");
    printf("\n\nInforme o c�digo do produto:");
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
        printf("\nC�digo Inv�lido\n\n");
    }
    system ("pause");
}
