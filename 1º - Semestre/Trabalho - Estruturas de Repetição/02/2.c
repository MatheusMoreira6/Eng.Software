/*Fa�a um programa que leia a idade de v�rias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero.*/

#include <stdio.h> //Biblioteca entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o system.
#include <locale.h> //Biblioteca para utiliza��o da fun��o setlocale.

void main() //Inicio da fun��o principal.
{
    int I=1, I_M=0; //Declara��o de vari�veis.
    system("Color F0"); //Mudan�a de cor.
    system("Title 2� Exerc�cio do Trabalho"); //Defini��o de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Sele��o do idioma.
    printf("Maior idade"); //Mensagens para o usu�rio.
    printf("\n__________________________________________________\n");
    printf("\nInforme v�rias idades (0 para encerrar)");
    printf("\n__________________________________________________\n");
    while(I!=0) //Estrutura While para repeti��o.
    {
        printf("\nInforme uma idade:"); //Solicita��o da idade.
            scanf("%d", &I); //Leitura da idade e atribui��o a vari�vel I.
        if(I>I_M) //Fun��o If para armazenagem da maior idade informada.
        {
            I_M=I;
        }
    }
    printf("__________________________________________________\n");
    if(I_M>1)
    {
        printf("\nA maior idade informada foi:%d anos", I_M); //Exibir o resultado.
    }
    else
    {
        printf("\nA maior idade informada foi:%d ano", I_M);
    }
    printf("\n__________________________________________________\n\n");
    system("pause"); //Pausar a execu��o do programa.
}
