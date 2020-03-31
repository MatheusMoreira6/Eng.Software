/*Calcule e mostre o n�mero de l�mpadas necess�rias para iluminar um determinado c�modo de uma resid�ncia.
Dados de entrada: a pot�ncia da l�mpada utilizada (em watts), as dimens�es (largura e comprimento, em metros)
do c�modo. Considere que a pot�ncia necess�ria � de 20 watts por metro quadrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float L, C, P, N_L;
    printf("L�mpadas necess�rias para iluminar um determinado c�modo");
    printf("\n\nInforme a largura do c�modo:");
        scanf("%f", &L);
    printf("\nInforme o comprimento do c�modo:");
        scanf("%f", &C);
    printf("\nInforme a pot�ncia da l�mpada:");
        scanf("%f", &P);
    N_L=(L*C*20)/P;
    printf("\nN�mero de l�mpadas necess�rias:%g\n\n", N_L);
    system("pause");
}
