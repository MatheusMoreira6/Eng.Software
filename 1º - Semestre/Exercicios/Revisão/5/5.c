#include <stdio.h> //Biblioteca de entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita específica.
#include <conio.h> //Biblioteca para utilização da função "getche".

void main()
{
    setlocale(LC_ALL, "Portuguese"); //Definição de idioma.
    system("color 70"); //Comando para alteração da coloração do software.
    float PT, PP; //declaração de váriavel.
    int I;
    printf("            Peso do Objeto\n________________________________________________"); //Mensagens a serem exibidas na tela para o usuário.
    printf("\n\nInforme o peso do objeto na Terra(kg):");
        scanf("%f", &PT);
    printf("________________________________________________\n\n------------------\nNº       Planeta |\n------------------\n1        Mercúrio|\n2         Vênus  |\n3         Marte  |\n4        Júpiter |\n5        Saturno |\n6         Urano  |\n------------------");
    printf("\n\nInforme o número identificador do planeta:");
        I=getche();
    if (I=='1' || I=='2' || I=='3' || I=='4' || I=='5' || I=='6') //Condição em If para exibição de mensagem de erro caso o número de identificação do planeta não for igual aos exibidos na tabela.
    {
        switch(I) //Condição em Switch para realização de determinadas operações dependendo do número de identificação do planeta.
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
        printf("\n________________________________________________\n\nNúmero identificador inválido!\n________________________________________________\n\n");
    }
    system("pause"); //Comando para parar a execução do código.
}
