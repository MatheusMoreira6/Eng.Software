/*Calcule e mostre o número de lâmpadas necessárias para iluminar um determinado cômodo de uma residência.
Dados de entrada: a potência da lâmpada utilizada (em watts), as dimensões (largura e comprimento, em metros)
do cômodo. Considere que a potência necessária é de 20 watts por metro quadrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float L, C, P, N_L;
    printf("Lâmpadas necessárias para iluminar um determinado cômodo");
    printf("\n\nInforme a largura do cômodo:");
        scanf("%f", &L);
    printf("\nInforme o comprimento do cômodo:");
        scanf("%f", &C);
    printf("\nInforme a potência da lâmpada:");
        scanf("%f", &P);
    N_L=(L*C*20)/P;
    printf("\nNúmero de lâmpadas necessárias:%g\n\n", N_L);
    system("pause");
}
