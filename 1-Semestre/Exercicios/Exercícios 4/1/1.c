#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int P, Q;
    float V;
    system ("color 70");
    printf("Cardápio\n________________________________");
    printf("\n\nLanches:                  Valor:\n\n100-Cachorro quente       R$9,50\n101-Bauru                 R$8,50\n102-Hambúrger             R$7,00\n103-Cheeseburguer         R$8,00\n\n________________________________\n\nBebida:                   Valor:\n\n104-Refrigerante          R$5,50\n\n________________________________");
    printf("\n\n\nInforme o código do seu pedido:");
        scanf("%d", &P);
    if (P==100 || P==101 || P==102 || P==103 || P==104)
    {
        printf("\nInforme a quantidade:");
            scanf("%d", &Q);
        switch (P)
        {
            case 100:
                V=Q*9.50;
                break;
            case 101:
                V=Q*8.50;
                break;
            case 102:
                V=Q*7.00;
                break;
            case 103:
                V=Q*8.00;
                break;
            case 104:
                V=Q*5.50;
                break;
            default:
                V=0;
        }
        printf("\nValor do pedido:R$%.2f\n\n", V);
    }
    else
    {
        printf("\nCódigo do Pedido Inválido!\n\n");
    }
    system ("pause");
}
