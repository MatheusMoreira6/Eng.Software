/*Fa�a um programa que calcule o produto de dois n�meros lidos da entrada (n1 e n2)
atrav�s do m�todo de somas sucessivas. Suponha que n1 e n2 s�o positivos.*/

#include <stdio.h>//Inclus�o de biblioteca

void main (void) //Fun��o Principal
{
    int n1, n2; //Declara��o das variaveis para os numeros de entrada
    int res = 0; //Declara��o da variavel para o resultado
    int i = 1; //Inicializando a variavel i para controlar o la�o

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1); //Leitura do primeiro numero

    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2); //Leitura do segundo numero


    while(i <= n2) //Executa o la�o n2 vezes
    {
        res = res + n1; //Acumula n1 em res n2 vezes
        i++;//Incrementa a variavel i
    }

    printf("\nProduto dos numeros: %d\n\n", res); //Mostra na tela o produto dos n�meros
}
