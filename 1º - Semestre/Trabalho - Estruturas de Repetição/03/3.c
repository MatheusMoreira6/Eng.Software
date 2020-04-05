/*Fa�a um programa que leia um n�mero inteiro positivo n e imprima a soma dos n primeiros
 n�meros pares maiores do que zero (Por exemplo, se for informado n = 4, o algoritmo deve
imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).*/

#include <stdio.h> //Biblioteca entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o system.
#include <locale.h> //Biblioteca para utiliza��o da fun��o setlocale.

void main() //Inicio da fun��o principal.
{
    int N=0, N1=0, N2=0, C=0; //Declara��o de vari�veis.
    system("Color F0"); //Mudan�a de cor.
    system("Title 3� Exerc�cido do Trabalho"); //Defini��o de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Sele��o do idioma.
    printf("Soma dos N primeiros n�meros pares"); //Mensagens para o usu�rio.
    printf("\n__________________________________________________\n\n");
    printf("Informe um n�mero:"); //Solicita��o do n�mero.
        scanf("%d", &N);
    while(C<N) //Estrutura While para repeti��o.
    {
        C++; //Atribui��o de +1 na vari�vel C para controle da fun��o while.
        N1=N1+2;
        N2=N2+N1;
    }
    printf("__________________________________________________\n");
    printf("\nResultado:%d", N2); //Exibir resultado;
    printf("\n__________________________________________________\n\n");
    system("pause"); //Pausar a execu��o do programa.
}
