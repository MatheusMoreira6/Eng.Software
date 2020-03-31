#include <stdio.h>//Inclusão de biblioteca

void main (void)
{
    //Declaração de variáveis
    float h;
    int n, i;

    printf("\nInforme a qtde de termos da serie: ");
    scanf("%d", &n); //Leitura da qtde de termos da serie

    h = 0; //Inicializando a soma da serie com zero
    i = 1; //Inicializando a variável de controle

    while(i <= n) //Estrutura para repetir n vezes
    {
        h = h + (float)1/i; //Calculando a soma da sequencia
        i = i + 1; //Incrementando a variavel de controle e denominador dos termos
    }

    printf("\nSoma da serie: %g\n", h); //Mostrando a soma da serie
}
