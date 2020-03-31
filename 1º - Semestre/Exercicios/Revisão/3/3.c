#include <stdio.h> //Biblioteca de entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita específica.

void main()
{
    setlocale(LC_ALL, "Portuguese"); //Definição de idioma.
    int L; //declaração de váriavel.
    float PF, PL;
    system("color 70"); //Comando para alteração da coloração do software.
    printf("Preço da Gasolina\n_______________________________"); //Mensagens a serem exibidas na tela para o usuário.
    printf("\n\nInforme a quantidade de litros:");
        scanf("%d", &L);
    if (L<=20) //Condição em If para comparação de valores.
    {
        PL=(L*4.30);
        PF=(PL-(PL*0.04));
    }
    else
    {
        PL=L*4.30;
        PF=PL-(PL*0.06);
    }
    printf("_______________________________\n\nPreço final:R$%.2f\n_______________________________\n\n", PF);
    system("pause"); //Comando para parar a execução do código.
}
