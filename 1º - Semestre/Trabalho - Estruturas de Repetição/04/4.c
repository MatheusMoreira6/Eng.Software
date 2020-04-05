/*Fa�a um programa que leia uma lista de n�meros cujo �ltimo n�mero � zero.
Ao final, o programa dever� mostrar a soma de todos os n�meros m�ltiplos de
cinco da lista.*/

#include <stdio.h> //Biblioteca entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o system.
#include <locale.h> //Biblioteca para utiliza��o da fun��o setlocale.

void main() //Inicio da fun��o principal.
{
    int N=1, R=0, R1=0; //Declara��o de vari�veis.
    system("Color F0"); //Mudan�a de cor.
    system("Title 4� Exerc�cido do Trabalho"); //Defini��o de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Sele��o do idioma.
    printf("Soma dos n�meros m�ltiplos de cinco"); //Mensagens para o usu�rio.
    printf("\n__________________________________________________\n");
    printf("\nInforme 0 para finalizar a lista");
    printf("\n__________________________________________________\n");
    while(N!=0) //Estrutura While para repeti��o.
    {
        printf("\nInforme um n�mero:"); //Solicita��o da n�mero.
            scanf("%d", &N); //Leitura do n�mero informado e atribui��o a vari�vel N.
        R=N%5; //Resto da divis�o.
        if(R==0)
        {
            R1=R1+N;
        }
    }
    printf("\n__________________________________________________\n");
    printf("\nResultado da soma:%d", R1); //Exibir resultado.
    printf("\n__________________________________________________\n\n");
    system("pause"); //Pausar a execu��o do programa.
}
