#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float H, P, S;
    printf("Sal�rio do funcion�rio");
    printf("\n\nInforme o valor por hora trabalhada:R$");
        scanf("%f", &P);
    printf("\nInforme a quantidade de horas trabalhadas:");
        scanf("%f", &H);
    S=H*P;
    if (H>40)
    {
        S=S+(S/2);
    }
    printf("\nO sal�rio desse funcionario �:R$%.2f\n\n", S);
    system("pause");
}
