#include <stdio.h>//Inclus�o de biblioteca

void main (void)
{
    //Declara��o de vari�veis
    float x, pot;
    int n, i;

    printf("\nInforme o valor da base: ");
    scanf("%f", &x); //Leitura da base para a potencia

    printf("\nInforme o valor do expoente: ");
    scanf("%d", &n); //Leitura do expoente para a potencia

    pot = 1; //Inicializando a potencia
    i = 1; //Inicializando a vari�vel de controle

    while(i <= n) //Estrutura para repetir n vezes
    {
        pot = pot * x; //Calculando a potencia
        i = i + 1; //Incrementando a variavel de controle
    }

    printf("\nPotencia calculada: %g\n", pot); //Mostrando a potencia calculada
}
