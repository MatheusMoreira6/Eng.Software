#include <stdio.h> //Biblioteca de entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita espec�fica.

void main()
{
    setlocale(LC_ALL, "Portuguese"); //Defini��o de idioma.
    int L; //declara��o de v�riavel.
    float PF, PL;
    system("color 70"); //Comando para altera��o da colora��o do software.
    printf("Pre�o da Gasolina\n_______________________________"); //Mensagens a serem exibidas na tela para o usu�rio.
    printf("\n\nInforme a quantidade de litros:");
        scanf("%d", &L);
    if (L<=20) //Condi��o em If para compara��o de valores.
    {
        PL=(L*4.30);
        PF=(PL-(PL*0.04));
    }
    else
    {
        PL=L*4.30;
        PF=PL-(PL*0.06);
    }
    printf("_______________________________\n\nPre�o final:R$%.2f\n_______________________________\n\n", PF);
    system("pause"); //Comando para parar a execu��o do c�digo.
}
