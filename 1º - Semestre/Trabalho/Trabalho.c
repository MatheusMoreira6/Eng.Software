//Created by: Matheus Moreira Mendes - RGM:802.238

#include <stdio.h> //Biblioteca de tratamento de entrada e saída de dados.
#include <stdlib.h> //Biblioteca para utilização de funções como "system".
#include <locale.h> //Biblioteca que define as configurações conforme uma localidade específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche.

int main() //Inicio da função principal.
{
    setlocale(LC_ALL, "Portuguese"); //Declaração de idioma.
    float N1, N2, R; //Declaração de variáveis (real).
    int Op; //Declaração de variáveis (inteira).
    char V; //Declaraçao de váriavel para caracteres.
    do{ //Inicio da função do-while.
        V=0; //Reset da variável.
        system("color F0"); //Alteração da coloração.
        //Abaixo função printf para impressão do menu.
        printf("---------------------\n|    Calculadora    |\n---------------------\n| 1 - Adição        |\n| 2 - Subtração     |\n| 3 - Multiplicação |\n| 4 - Divisão       |\n| 5 - Potenciação   |\n| 0 - Sair          |\n---------------------\n");
        printf("\nEscolha uma opção:"); //Mensagem solicitando a opção desejada.
            Op=getche(); //Leitura da opção escolhida atráves da função getche (para que não seja necessário pressionar o enter).
        if (Op=='0' || Op=='1' || Op=='2' || Op=='3' || Op=='4' || Op=='5') //Função if para verificar se a opção escolhida é válida.
        {
            system("cls"); //Função para limpar a tela.
            switch(Op) //Função switch para realização de operações indíviduais conforme a opção escolhida no menu.
            {
                case '0': //Caso 0 o programa deve ser fechado.
                {
                    return (0); //Função de returno atribuida à zero para fechamento do programa.
                    break; //Função para forçar a saída de um switch ou laço de repetição.
                }
                case '1': //Caso 1 o programa deve realização operação de adição.
                {
                    system("color F1"); //Alteração da coloração (apenas para estética do programa).
                    printf("--------------------------\n|     Adição (N1+N2)     |\n--------------------------\n"); //Mensagem exibindo que está realizando uma adição (estética).
                    printf("\nInforme o primeiro número:"); //Mensagem solicitando o primeiro número.
                        scanf("%f", &N1); //Leitura do número digitado e atribuição a respectiva variável.
                    printf("\nInforme o segundo número:"); //Mensagem solicitando o segundo número.
                        scanf("%f", &N2); //Leitura do número digitado e atribuição a respectiva variável.
                    R=N1+N2; //Calculo de adição.
                    break; //Função para forçar a saída do switch.
                }
                case '2': //Caso 2 o programa deve realização operação de subtração.
                {
                    system("color F2"); //Alteração da coloração (apenas para estética do programa).
                    printf("--------------------------\n|   Subtração (N1-N2)    |\n--------------------------\n"); //Mensagem exibindo que está realizando uma subtração (estética).
                    printf("\nInforme o primeiro número:"); //Mensagem solicitando o primeiro número.
                        scanf("%f", &N1); //Leitura do número digitado e atribuição a respectiva variável.
                    printf("\nInforme o segundo número:"); //Mensagem solicitando o segundo número.
                        scanf("%f", &N2); //Leitura do número digitado e atribuição a respectiva variável.
                    R=N1-N2; //Calculo de subtração.
                    break; //Função para forçar a saída do switch.
                }
                case '3': //Caso 3 o programa deve realização operação de multiplicação.
                {
                    system("color F4"); //Alteração da coloração (apenas para estética do programa).
                    printf("--------------------------\n| Multiplicação (N1xN2)  |\n--------------------------\n"); //Mensagem exibindo que está realizando uma Multiplicação (estética).
                    printf("\nInforme o primeiro número:"); //Mensagem solicitando o primeiro número.
                        scanf("%f", &N1); //Leitura do número digitado e atribuição a respectiva variável.
                    printf("\nInforme o segundo número:"); //Mensagem solicitando o segundo número.
                        scanf("%f", &N2); //Leitura do número digitado e atribuição a respectiva variável.
                    R=N1*N2; //Calculo de multiplicação.
                    break; //Função para forçar a saída do switch.
                }
                case '4': //Caso 4 o programa deve realização operação de divisão.
                {
                    system("color FD"); //Alteração da coloração (apenas para estética do programa).
                    printf("--------------------------\n|    Divisão (N1÷N2)     |\n--------------------------\n"); //Mensagem exibindo que está realizando uma divisão (estética).
                    printf("\nInforme o primeiro número:"); //Mensagem solicitando o primeiro número.
                        scanf("%f", &N1); //Leitura do número digitado e atribuição a respectiva variável.
                    printf("\nInforme o segundo número:"); //Mensagem solicitando o segundo número.
                        scanf("%f", &N2); //Leitura do número digitado e atribuição a respectiva variável.
                    R=N1/N2; //Calculo de divisão.
                    break; //Função para forçar a saída do switch.
                }
                case '5': //Caso 5 o programa deve realização operação de potenciação.
                {
                    int C=1; //Declaração de variáveis (inteira).
                    float N3; //Declaração de variável (real);
                    system("color F6"); //Alteração da coloração (apenas para estética do programa).
                    printf("--------------------------\n|  Potenciação (N1^N2)   |\n--------------------------\n"); //Mensagem exibindo que está realizando uma potenciação (estética).
                    printf("\nInforme o número:"); //Mensagem solicitando o número.
                        scanf("%f", &N1); //Leitura do número digitado e atribuição a respectiva variável.
                    printf("\nInforme a potência:"); //Mensagem solicitando a potência desse número.
                        scanf("%f", &N2); //Leitura do número digitado e atribuição a respectiva variável.
                    //Inicio do calculo de potenciação.
                    N3=N1; //Atribuição do número informado pelo usuário na variável B, para utilização no calculo.
                    while(C<N2) //Função while para realização da multiplicação sucessiva do número informado.
                    {
                        C++; //Variável utilizada para controle de quantidade de repetição.
                        N1=N1*N3; //Calculo de multiplicação responsável pela potencialização
                    }
                    R=N1; //Atribuição do resultado da potêncialização na variável de resultado.
                    break; //Função para forçar a saída do switch.
                }
            }
            printf("\n--------------------------\n|Resultado:%g             \n--------------------------\n", R); //Mensagem exibindo o resultado da operação, conforme a opção selecionada.
            printf("\n_______________________________________\n\nDeseja realizar uma nova operação(S/N)?"); //Mensagem solicitando ao usuário se deseja realizar uma nova operação.
                V=getche(); //Leitura da opção escolhida pelo usuário atráves da função getche (para que não seja necessário pressionar o enter).
            if(V=='S' || V=='s') //Função if para verificação se o valor informado pelo o usuário é S(Sim), caso seja, ele realizará a função dentre chaves.
            {
                system("cls"); //Função system("cls") para limpar a tela.
                N1=0; //Reset da variável.
                N2=0; //Reset da variável.
                Op=0; //Reset da variável.
                R=0; //Reset da variável.
            }
        }
        /*Abaixo função else, referente ao primeiro if utilizado.
        Caso a condição de if não ocorra, ou seja, caso o usuário
        informar um número que não faz parte do menu, será realizado
        as funções dentre chaves para exibição da mensagem de erro.*/
        else
        {
            system("color 0C"); //Alteração da coloração para mensagem de erro (apenas para melhoramento da estética do programa).
            printf("\n--------------------------\n\nErro: Opção Inválida!\n--------------------------\n\n"); //Mensagem de erro.
            system("pause"); //Função para pausar a execução do código até que seja pressionada alguma tecla qualquer.
            V='S'; //Atribuição do valor "S" para a variável V (Variável utilizada para confirmação da condição do do-while, ou seja, para recomeçar o programa).
            system("cls"); //Função system("cls") para limpar a tela.
        }
    }while(V=='S' || V=='s'); //Fim da função do-while, e caso a variável V seja "s" ou "S", o programa reinicia.
}
