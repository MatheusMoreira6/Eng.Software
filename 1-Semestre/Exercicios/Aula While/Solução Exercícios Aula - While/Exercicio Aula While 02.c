#include <stdio.h>//Inclus�o de biblioteca

void main (void)
{
    float n1, n2, media; //Declara��o de vari�veis

    do{
        printf("\nInforme a primeira nota: ");
        scanf("%f", &n1); //Leitura da 1� nota
    }while(n1 < 0 || n1 > 10); //Verifica se a nota est� no intervalo de zero a dez. Caso n�o esteja, uma nva nota dever� ser lida

    do{
        printf("\nInforme a segunda nota: ");
        scanf("%f", &n2); //Leitura da 2� nota
    }while(n2 < 0 || n2 > 10); //Verifica se a nota est� no intervalo de zero a dez. Caso n�o esteja, uma nva nota dever� ser lida

    media = (n1 + n2) / 2; //Calculando a m�dia das notas

    printf("\nMedia das notas: %.2f\n", media); //Mostrando a m�dia das notas
}
