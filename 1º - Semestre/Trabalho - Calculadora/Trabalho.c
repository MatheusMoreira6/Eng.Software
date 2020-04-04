//Created by: Matheus Moreira Mendes - RGM:802.238

#include <stdio.h> //Biblioteca de tratamento de entrada e sa�da de dados.
#include <stdlib.h> //Biblioteca para utiliza��o de fun��es como "system".
#include <locale.h> //Biblioteca que define as configura��es conforme uma localidade espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche.

int main() //Inicio da fun��o principal.
{
    setlocale(LC_ALL, "Portuguese"); //Declara��o de idioma.
    float N1, N2, R; //Declara��o de vari�veis (real).
    int Op; //Declara��o de vari�veis (inteira).
    char V; //Declara�ao de v�riavel para caracteres.
    do{ //Inicio da fun��o do-while.
        V=0; //Reset da vari�vel.
        system("color F0"); //Altera��o da colora��o.
        //Abaixo fun��o printf para impress�o do menu.
        printf("---------------------\n|    Calculadora    |\n---------------------\n| 1 - Adi��o        |\n| 2 - Subtra��o     |\n| 3 - Multiplica��o |\n| 4 - Divis�o       |\n| 5 - Potencia��o   |\n| 0 - Sair          |\n---------------------\n");
        printf("\nEscolha uma op��o:"); //Mensagem solicitando a op��o desejada.
            Op=getche(); //Leitura da op��o escolhida atr�ves da fun��o getche (para que n�o seja necess�rio pressionar o enter).
        if (Op=='0' || Op=='1' || Op=='2' || Op=='3' || Op=='4' || Op=='5') //Fun��o if para verificar se a op��o escolhida � v�lida.
        {
            system("cls"); //Fun��o para limpar a tela.
            switch(Op) //Fun��o switch para realiza��o de opera��es ind�viduais conforme a op��o escolhida no menu.
            {
                case '0': //Caso 0 o programa deve ser fechado.
                {
                    return (0); //Fun��o de returno atribuida � zero para fechamento do programa.
                    break; //Fun��o para for�ar a sa�da de um switch ou la�o de repeti��o.
                }
                case '1': //Caso 1 o programa deve realiza��o opera��o de adi��o.
                {
                    system("color F1"); //Altera��o da colora��o (apenas para est�tica do programa).
                    printf("--------------------------\n|     Adi��o (N1+N2)     |\n--------------------------\n"); //Mensagem exibindo que est� realizando uma adi��o (est�tica).
                    printf("\nInforme o primeiro n�mero:"); //Mensagem solicitando o primeiro n�mero.
                        scanf("%f", &N1); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    printf("\nInforme o segundo n�mero:"); //Mensagem solicitando o segundo n�mero.
                        scanf("%f", &N2); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    R=N1+N2; //Calculo de adi��o.
                    break; //Fun��o para for�ar a sa�da do switch.
                }
                case '2': //Caso 2 o programa deve realiza��o opera��o de subtra��o.
                {
                    system("color F2"); //Altera��o da colora��o (apenas para est�tica do programa).
                    printf("--------------------------\n|   Subtra��o (N1-N2)    |\n--------------------------\n"); //Mensagem exibindo que est� realizando uma subtra��o (est�tica).
                    printf("\nInforme o primeiro n�mero:"); //Mensagem solicitando o primeiro n�mero.
                        scanf("%f", &N1); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    printf("\nInforme o segundo n�mero:"); //Mensagem solicitando o segundo n�mero.
                        scanf("%f", &N2); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    R=N1-N2; //Calculo de subtra��o.
                    break; //Fun��o para for�ar a sa�da do switch.
                }
                case '3': //Caso 3 o programa deve realiza��o opera��o de multiplica��o.
                {
                    system("color F4"); //Altera��o da colora��o (apenas para est�tica do programa).
                    printf("--------------------------\n| Multiplica��o (N1xN2)  |\n--------------------------\n"); //Mensagem exibindo que est� realizando uma Multiplica��o (est�tica).
                    printf("\nInforme o primeiro n�mero:"); //Mensagem solicitando o primeiro n�mero.
                        scanf("%f", &N1); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    printf("\nInforme o segundo n�mero:"); //Mensagem solicitando o segundo n�mero.
                        scanf("%f", &N2); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    R=N1*N2; //Calculo de multiplica��o.
                    break; //Fun��o para for�ar a sa�da do switch.
                }
                case '4': //Caso 4 o programa deve realiza��o opera��o de divis�o.
                {
                    system("color FD"); //Altera��o da colora��o (apenas para est�tica do programa).
                    printf("--------------------------\n|    Divis�o (N1�N2)     |\n--------------------------\n"); //Mensagem exibindo que est� realizando uma divis�o (est�tica).
                    printf("\nInforme o primeiro n�mero:"); //Mensagem solicitando o primeiro n�mero.
                        scanf("%f", &N1); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    printf("\nInforme o segundo n�mero:"); //Mensagem solicitando o segundo n�mero.
                        scanf("%f", &N2); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    R=N1/N2; //Calculo de divis�o.
                    break; //Fun��o para for�ar a sa�da do switch.
                }
                case '5': //Caso 5 o programa deve realiza��o opera��o de potencia��o.
                {
                    int C=1; //Declara��o de vari�veis (inteira).
                    float N3; //Declara��o de vari�vel (real);
                    system("color F6"); //Altera��o da colora��o (apenas para est�tica do programa).
                    printf("--------------------------\n|  Potencia��o (N1^N2)   |\n--------------------------\n"); //Mensagem exibindo que est� realizando uma potencia��o (est�tica).
                    printf("\nInforme o n�mero:"); //Mensagem solicitando o n�mero.
                        scanf("%f", &N1); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    printf("\nInforme a pot�ncia:"); //Mensagem solicitando a pot�ncia desse n�mero.
                        scanf("%f", &N2); //Leitura do n�mero digitado e atribui��o a respectiva vari�vel.
                    //Inicio do calculo de potencia��o.
                    N3=N1; //Atribui��o do n�mero informado pelo usu�rio na vari�vel B, para utiliza��o no calculo.
                    while(C<N2) //Fun��o while para realiza��o da multiplica��o sucessiva do n�mero informado.
                    {
                        C++; //Vari�vel utilizada para controle de quantidade de repeti��o.
                        N1=N1*N3; //Calculo de multiplica��o respons�vel pela potencializa��o
                    }
                    R=N1; //Atribui��o do resultado da pot�ncializa��o na vari�vel de resultado.
                    break; //Fun��o para for�ar a sa�da do switch.
                }
            }
            printf("\n--------------------------\n|Resultado:%g             \n--------------------------\n", R); //Mensagem exibindo o resultado da opera��o, conforme a op��o selecionada.
            printf("\n_______________________________________\n\nDeseja realizar uma nova opera��o(S/N)?"); //Mensagem solicitando ao usu�rio se deseja realizar uma nova opera��o.
                V=getche(); //Leitura da op��o escolhida pelo usu�rio atr�ves da fun��o getche (para que n�o seja necess�rio pressionar o enter).
            if(V=='S' || V=='s') //Fun��o if para verifica��o se o valor informado pelo o usu�rio � S(Sim), caso seja, ele realizar� a fun��o dentre chaves.
            {
                system("cls"); //Fun��o system("cls") para limpar a tela.
                N1=0; //Reset da vari�vel.
                N2=0; //Reset da vari�vel.
                Op=0; //Reset da vari�vel.
                R=0; //Reset da vari�vel.
            }
        }
        /*Abaixo fun��o else, referente ao primeiro if utilizado.
        Caso a condi��o de if n�o ocorra, ou seja, caso o usu�rio
        informar um n�mero que n�o faz parte do menu, ser� realizado
        as fun��es dentre chaves para exibi��o da mensagem de erro.*/
        else
        {
            system("color 0C"); //Altera��o da colora��o para mensagem de erro (apenas para melhoramento da est�tica do programa).
            printf("\n--------------------------\n\nErro: Op��o Inv�lida!\n--------------------------\n\n"); //Mensagem de erro.
            system("pause"); //Fun��o para pausar a execu��o do c�digo at� que seja pressionada alguma tecla qualquer.
            V='S'; //Atribui��o do valor "S" para a vari�vel V (Vari�vel utilizada para confirma��o da condi��o do do-while, ou seja, para recome�ar o programa).
            system("cls"); //Fun��o system("cls") para limpar a tela.
        }
    }while(V=='S' || V=='s'); //Fim da fun��o do-while, e caso a vari�vel V seja "s" ou "S", o programa reinicia.
}
