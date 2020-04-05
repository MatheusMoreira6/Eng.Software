/*Tentando descobrir se um dado era viciado, um dono de cassino o lan�ou 15 vezes.
Para ajuda-lo, fa�a um programa que leia os 15 resultados dos lan�amentos
efetuados e calcule o n�mero de ocorr�ncias de cada face.*/

#include <stdio.h> //Biblioteca entrada/sa�da.
#include <stdlib.h> //Biblioteca para utiliza��o da fun��o system.
#include <locale.h> //Biblioteca para utiliza��o da fun��o setlocale.
#include <windows.h> //Biblioteca para utiliza��o da fun��o Sleep.

void main() //Inicio da fun��o principal.
{
    int N=0, C; //Declara��o de vari�veis.
    float F1=0, F2=0, F3=0, F4=0, F5=0, F6=0;
    float P1=0, P2=0, P3=0, P4=0, P5=0, P6=0;
    system("Color F0"); //Mudan�a de cor.
    system("Title 5� Exerc�cido do Trabalho"); //Defini��o de titulo para a janela do prompt de comando.
    setlocale(LC_ALL, "Portuguese"); //Sele��o do idioma.
    printf("N�mero de ocorr�ncia de cada face do dado"); //Mensagens para o usu�rio.
    printf("\n___________________________________________________________\n");
    printf("\nInforme as faces resultantes dos 15 lan�amentos do dado");
    printf("\n___________________________________________________________\n");
    for(C=1; C<=15; C++)
    {
        printf("\nInforme a %d� face resultante (1-6):", C); //Solicita��o das faces do dado.
            scanf("%d", &N); //Leitura da face informada e atribui��o do valor a vari�vel N.
        while(N<1 || N>6) //Estrutura while caso o n�mero informado n�o esteja entre 1 e 6.
        {
            printf("------------------\n|N�mero Inv�lido!|\n------------------\n");
            printf("\nInforme novamenete a %d� face resultante:", C);
                scanf("%d", &N);
        }
        if(N==1) //Condi��o if else para identifica��o da face informa e atribui��o de +1 a mesma.
        {
            F1++; //Atribui��o de +1 na vari�vel
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
    P1=(F1*100)/15; //Regra de tr�s para descobrir a porcetagem.
    P2=(F2*100)/15;
    P3=(F3*100)/15;
    P4=(F4*100)/15;
    P5=(F5*100)/15;
    P6=(F6*100)/15;
    printf("\nResultado:\n");
    printf("\nN�mero 1: %g vezes (%.2f%%)", F1, P1); //Exibi��o do resultado + porcetagem equivalente.
    printf("\nN�mero 2: %g vezes (%.2f%%)", F2, P2);
    printf("\nN�mero 3: %g vezes (%.2f%%)", F3, P3);
    printf("\nN�mero 4: %g vezes (%.2f%%)", F4, P4);
    printf("\nN�mero 5: %g vezes (%.2f%%)", F5, P5);
    printf("\nN�mero 6: %g vezes (%.2f%%)", F6, P6);
    printf("\n___________________________________________________________\n\n");
    Sleep(3000); //Pausa na execu��o do programa por 3 segundos.
    system("pause"); //Pausar a execu��o do programa at� que um bot�o seja pressionado.
}
