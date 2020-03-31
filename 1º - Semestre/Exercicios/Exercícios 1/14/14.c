/*Calcule e mostre a quantidade de latas de tintas necess�rias e o custo para pintar
uma determinada �rea, cujo comprimento e a largura s�o informados. Sabe-se
que: A lata de tinta custa R$ 25,00, cada lata cont�m 3,6 litros, cada litro pinta 13 m�.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float L, C, CT, NL;
    printf("Quantidade de latas de tintas necess�rias e o custo para pintar uma determinada �rea");
    printf("\n\nInforme a largura da �rea:");
        scanf("%f", &L);
    printf("\nInforme o comprimento da �rea:");
        scanf("%f", &C);
    NL=(L*C/13)/3.6;
    CT=NL*25.00;
    printf("\nN�mero de latas necess�rias:%g", NL);
    printf("\n\nCusto da tinta:R$%.2f\n\n", CT);
    system("pause");
}
