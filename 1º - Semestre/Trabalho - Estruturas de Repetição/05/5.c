/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou 15 vezes.
Para ajuda-lo, faça um programa que leia os 15 resultados dos lançamentos
efetuados e calcule o número de ocorrências de cada face.*/

#include <stdio.h> //Biblioteca entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função system.
#include <locale.h> //Biblioteca para utilização da função setlocale.
#include <windows.h> //Biblioteca para utilização da função Sleep.

void main() //Inicio da função principal.
{
    int N=0, C; //Declaração de variáveis.
    float F1=0, F2=0, F3=0, F4=0, F5=0, F6=0;
    float P1=0, P2=0, P3=0, P4=0, P5=0, P6=0;
    system("Color F0"); //Mudança de cor.
    system("Title 5º Exercícido do Trabalho"); //Definição de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Seleção do idioma.
    printf("Número de ocorrência de cada face do dado"); //Mensagens para o usuário.
    printf("\n___________________________________________________________\n");
    printf("\nInforme as faces resultantes dos 15 lançamentos do dado");
    printf("\n___________________________________________________________\n");
    for(C=1; C<=15; C++)
    {
        printf("\nInforme a %dº face resultante (1-6):", C); //Solicitação das faces do dado.
            scanf("%d", &N); //Leitura da face informada e atribuição do valor a variável N.
        while(N<1 || N>6) //Estrutura while caso o número informado não esteja entre 1 e 6.
        {
            printf("------------------\n|Número Inválido!|\n------------------\n");
            printf("\nInforme novamenete a %dº face resultante:", C);
                scanf("%d", &N);
        }
        if(N==1) //Condição if else para identificação da face informa e atribuição de +1 a mesma.
        {
            F1++; //Atribuição de +1 na variável
        }
        else
        {
            if(N==2)
            {
                F2++;
            }
            else
            {
                if(N==3)
                {
                    F3++;
                }
                else
                {
                    if(N==4)
                    {
                        F4++;
                    }
                    else
                    {
                        if(N==5)
                        {
                            F5++;
                        }
                        else
                        {
                            if(N==6)
                            {
                                F6++;
                            }
                        }
                    }
                }
            }
        }
        printf("___________________________________________________________\n");
    }
    P1=(F1*100)/15; //Regra de três para descobrir a porcetagem.
    P2=(F2*100)/15;
    P3=(F3*100)/15;
    P4=(F4*100)/15;
    P5=(F5*100)/15;
    P6=(F6*100)/15;
    printf("\nResultado:\n");
    printf("\nNúmero 1: %g vezes (%.2f%%)", F1, P1); //Exibição do resultado + porcetagem equivalente.
    printf("\nNúmero 2: %g vezes (%.2f%%)", F2, P2);
    printf("\nNúmero 3: %g vezes (%.2f%%)", F3, P3);
    printf("\nNúmero 4: %g vezes (%.2f%%)", F4, P4);
    printf("\nNúmero 5: %g vezes (%.2f%%)", F5, P5);
    printf("\nNúmero 6: %g vezes (%.2f%%)", F6, P6);
    printf("\n___________________________________________________________\n\n");
    Sleep(3000); //Pausa na execução do programa por 3 segundos.
    system("pause"); //Pausar a execução do programa até que um botão seja pressionado.
}
