#include <stdio.h>//Inclusão de biblioteca

void main (void)
{
    float n1, n2, media; //Declaração de variáveis

    do{
        printf("\nInforme a primeira nota: ");
        scanf("%f", &n1); //Leitura da 1° nota
    }while(n1 < 0 || n1 > 10); //Verifica se a nota está no intervalo de zero a dez. Caso não esteja, uma nva nota deverá ser lida

    do{
        printf("\nInforme a segunda nota: ");
        scanf("%f", &n2); //Leitura da 2° nota
    }while(n2 < 0 || n2 > 10); //Verifica se a nota está no intervalo de zero a dez. Caso não esteja, uma nva nota deverá ser lida

    media = (n1 + n2) / 2; //Calculando a média das notas

    printf("\nMedia das notas: %.2f\n", media); //Mostrando a média das notas
}
