#include <stdio.h>//Biblioteca de entrada/sa�da.
#include <stdlib.h>//Biblioteca para utiliza��o da fun��o "system".
#include <locale.h>//Biblioteca para funcionamento de uma linguagem de escrita espec�fica.

void main ()
{
    setlocale(LC_ALL, "Portuguese");//Defini��o de idioma.
    float QA, QMA, QMI, QME;//declara��o de v�riavel.
    system("color 70");//Comando para altera��o da colora��o do software.
    printf("               Estoque");//Mensagens a serem exibidas na tela para o usu�rio.
    printf("\n______________________________________");
    printf("\n\nInforme a quantidade atual em estoque:");
        scanf("%f", &QA);
    printf("\nInforme a quantidade m�xima em estoque:");
        scanf("%f", &QMA);
    printf("\nInforme a quantidade m�nima em estoque:");
        scanf("%f", &QMI);
    QME=((QMA+QMI)/2); //Opera��o matem�tica.
    if (QA>=QME) //Condi��o em If para compara��o de valores.
    {
        printf("______________________________________\n\nRecomenda��o: N�o efetuar a compra!\n______________________________________\n\n");
    }
    else
    {
        printf("______________________________________\n\nRecomenda��o: Efetuar a compra!\n______________________________________\n\n");
    }
    system("pause"); //Comando para parar a execu��o do c�digo.
}
