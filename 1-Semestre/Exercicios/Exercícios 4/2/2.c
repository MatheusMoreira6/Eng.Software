#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int P, Q;
    float V;
    system ("color 70");
    printf("Total Devido Pelo Cliente\n____________________________________________");
    printf("\n\nCódigo do Produto:           Preço Unitário:\n\n      1001                       R$12,32\n      1324                       R$16,45\n      6548                       R$22,37\n      5987                       R$25,32\n      7623                       R$36,45\n\n____________________________________________");
    printf("\n\n\nInforme o código do produto:");
        scanf("%d", &P);
    if (P==1001 || P==1324 || P==6548 || P==5987 || P==7623)
    {
        printf("\nInforme a quantidade:");
            scanf("%d", &Q);
        switch (P)
        {
            case 1001:
                V=Q*12.32;
                break;
            case 1324:
                V=Q*16.45;
                break;
            case 6548:
                V=Q*22.37;
                break;
            case 5987:
                V=Q*25.32;
                break;
            case 7623:
                V=Q*36.45;
                break;
            default:
                V=0;
        }
        printf("\nTotal Devedor:R$%.2f\n\n", V);
    }
    else
    {
        printf("\nCódigo do Produto Inválido!\n\n____________________________________________\n\n");
    }
    system ("pause");
}
