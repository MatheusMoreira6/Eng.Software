/*Fa�a um programa que leia um n�mero qualquer e divida por 2 (dois), sucessivamente,
 at� que o resultado seja menor que 1 (um), mostre a sequencia de resultados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float N1;
    system("color 70");
    printf("D�vis�o Consecutiva (N/2)\n_______________________________\n");
    printf("\nInforme um n�mero:");
        scanf("%f", &N1);
    while(N1>1)
    {
        N1=N1/2;
        printf("\nResultado da divis�o:%g\n", N1);
    }
    printf("_______________________________\n\n");
    system ("pause");
}
