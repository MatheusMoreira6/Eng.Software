/*Fa�a um programa que leia a altura de 10 pessoas e calcule e mostre
quantas destas pessoas possui altura maior que 1,80m.*/

#include <stdio.h> //Biblioteca entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o system.
#include <locale.h> //Biblioteca para utiliza��o da fun��o setlocale.

void main() //Inicio da fun��o principal.
{
    float A, A1=1.80; //Declara��o de vari�veis.
    int N=1, N2=0;
    system("Color F0"); //Mudan�a de cor.
    setlocale(LC_ALL, "Portuguese"); //Sele��o do idioma.
    system("Title 1� Exerc�cio do Trabalho"); //Defini��o de titulo para a janela do prompt de comando.
    printf("Quantidade de pessoas maiores que 1,80m"); //Mensagens para o usu�rio.
    printf("\n__________________________________________________");
    printf("\n\nInforme a altura de 10 pessoas\n");
    printf("__________________________________________________\n");
    for(N=1; N<=10; N++) //Estrutura for para repeti��o do c�digo.
    {
        printf("\n%d� pessoa:", N); //Solicita��o da altura.
            scanf("%f", &A); //Leitura da altura e atribui��o a vari�vel A.
        if(A>A1) //Fun��o if para contagem de quantas pessoas s�o maiores que 1,80.
        {
            N2++; //Atribui��o de +1 na vari�vel N2.
        }
    }
    printf("__________________________________________________\n");
    printf("\nResultado: %d pessoas s�o maiores que 1,80m\n", N2);  //Exibi��o do resultado.
    printf("__________________________________________________\n\n");
    system("pause"); //Pausar a execu��o do programa.
}
