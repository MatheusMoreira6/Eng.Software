/*Calcule e mostre a quantidade de latas de tintas necessárias e o custo para pintar
uma determinada área, cujo comprimento e a largura são informados. Sabe-se
que: A lata de tinta custa R$ 25,00, cada lata contém 3,6 litros, cada litro pinta 13 m².*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float L, C, CT, NL;
    printf("Quantidade de latas de tintas necessárias e o custo para pintar uma determinada área");
    printf("\n\nInforme a largura da área:");
        scanf("%f", &L);
    printf("\nInforme o comprimento da área:");
        scanf("%f", &C);
    NL=(L*C/13)/3.6;
    CT=NL*25.00;
    printf("\nNúmero de latas necessárias:%g", NL);
    printf("\n\nCusto da tinta:R$%.2f\n\n", CT);
    system("pause");
}
