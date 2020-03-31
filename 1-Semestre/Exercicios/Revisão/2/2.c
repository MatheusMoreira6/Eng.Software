#include <stdio.h> //Biblioteca de entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita espec�fica.

void main ()
{
    setlocale(LC_ALL, "Portuguese"); //Defini��o de idioma.
    int T; //declara��o de v�riavel.
    float S;
    system("color 70"); //Comando para altera��o da colora��o do software.
    printf("Reajuste Sal�rial\n___________________________________"); //Mensagens a serem exibidas na tela para o usu�rio.
    printf("\n\nInforme o tempo de servi�o(em anos):");
        scanf("%d", &T);
    printf("\nInforme o sal�rio do funcion�rio:R$");
        scanf("%f", &S);
    if (T<10) //Condi��o em If para compara��o de valores.
    {
        S=S*1.08;
    }
    else
    {
        S=S*1.1;
    }
    printf("___________________________________\n\nSal�rio reajustado:R$%.2f\n___________________________________\n\n", S);
    system ("pause"); //Comando para parar a execu��o do c�digo.
}
