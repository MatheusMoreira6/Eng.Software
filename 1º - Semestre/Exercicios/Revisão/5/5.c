#include <stdio.h> //Biblioteca de entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita espec�fica.
#include <conio.h> //Biblioteca para utiliza��o da fun��o "getche".

void main()
{
    setlocale(LC_ALL, "Portuguese"); //Defini��o de idioma.
    system("color 70"); //Comando para altera��o da colora��o do software.
    float PT, PP; //declara��o de v�riavel.
    int I;
    printf("            Peso do Objeto\n________________________________________________"); //Mensagens a serem exibidas na tela para o usu�rio.
    printf("\n\nInforme o peso do objeto na Terra(kg):");
        scanf("%f", &PT);
    printf("________________________________________________\n\n------------------\nN�       Planeta |\n------------------\n1        Merc�rio|\n2         V�nus  |\n3         Marte  |\n4        J�piter |\n5        Saturno |\n6         Urano  |\n------------------");
    printf("\n\nInforme o n�mero identificador do planeta:");
        I=getche();
    if (I=='1' || I=='2' || I=='3' || I=='4' || I=='5' || I=='6') //Condi��o em If para exibi��o de mensagem de erro caso o n�mero de identifica��o do planeta n�o for igual aos exibidos na tabela.
    {
        switch(I) //Condi��o em Switch para realiza��o de determinadas opera��es dependendo do n�mero de identifica��o do planeta.
        {
            case '1':
                PP=(PT*0.37);
                break;
            case '2':
                PP=(PT*0.88);
                break;
            case '3':
                PP=(PT*0.38);
                break;
            case '4':
                PP=(PT*2.64);
                break;
            case '5':
                PP=(PT*1.15);
                break;
            case '6':
                PP=(PT*1.17);
                break;
        }
        printf("\n________________________________________________\n\nPeso do objeto no respectivo planeta:%.2fKg\n________________________________________________\n\n", PP);
    }
    else
    {
        printf("\n________________________________________________\n\nN�mero identificador inv�lido!\n________________________________________________\n\n");
    }
    system("pause"); //Comando para parar a execu��o do c�digo.
}
