/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um programa que leia o sal�rio e o c�digo do cargo de um funcion�rio
e calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, ent�o,
receber 40% de aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int C;
    float SA, SN, D;
    system ("color 70");
    printf("Reajuste Sal�rial dos Funcion�rios\n__________________________________");
    printf("\n\nInforme o c�digo do cargo:");
        scanf("%d", &C);
    printf("\nInforme o sal�rio do funcion�rio:R$");
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
    printf("__________________________________\n\nSal�rio Antigo:R$%.2f\nSal�rio Novo:R$%.2f\nDiferen�a:R$%.2f\n\n", SA, SN, D);
    system ("pause");
}
