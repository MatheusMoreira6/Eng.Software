#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int C;
    float SA, SN, D;
    system ("color 70");
    printf("Reajuste Salárial dos Funcionários\n__________________________________");
    printf("\n\nInforme o código do cargo:");
        scanf("%d", &C);
    printf("\nInforme o salário do funcionário:R$");
        scanf("%f", &SA);
    switch (C)
    {
        case 101:
            SN=SA*1.1;
            break;
        case 102:
            SN=SA*1.2;
            break;
        case 103:
            SN=SA*1.3;
            break;
        default:
            SN=SA*1.4;
            break;
    }
    D=SN-SA;
    printf("__________________________________\n\nSalário Antigo:R$%.2f\nSalário Novo:R$%.2f\nDiferença:R$%.2f\n\n", SA, SN, D);
    system ("pause");
}
