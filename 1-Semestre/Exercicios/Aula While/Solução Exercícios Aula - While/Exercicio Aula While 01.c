#include <stdio.h>//Inclusão de biblioteca

void main (void)
{
    float n1, n2, div; //Declaração de variáveis

    printf("\nInforme o primeiro valor: ");
    scanf("%f", &n1); //Leitura do 1° valor

    do{
        printf("\nInforme o segundo valor: ");
        scanf("%f", &n2); //Leitura do 2° valor
    }while(n2 == 0); //Verifica se o valor é igual a zero. Caso seja, a estrutura realiza a repetição

    div = n1 / n2; //Divisão do primeiro valor pelo segundo

    printf("\nResultado da divisao: %g\n", div); //Apresentando o resultado da divisão
}
