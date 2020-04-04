/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou 15 vezes.
Para ajuda-lo, faça um programa que leia os 15 resultados dos lançamentos
efetuados e calcule o número de ocorrências de cada face.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void main()
{
    int N=0, C;
    float F1=0, F2=0, F3=0, F4=0, F5=0, F6=0;
    float P1=0, P2=0, P3=0, P4=0, P5=0, P6=0;
    system("Color F0");
    system("Title 5º Exercícido do Trabalho");
    setlocale(LC_ALL, "Portuguese");
    printf("Número de ocorrência de cada face do dado");
    printf("\n___________________________________________________________\n");
    printf("\nInforme as faces resultantes dos 15 lançamentos do dado");
    printf("\n___________________________________________________________\n");
    for(C=1; C<=15; C++)
    {
        printf("\nInforme a %dº face resultante (1-6):", C);
            scanf("%d", &N);
        while(N<1 || N>6)
        {
            printf("------------------\n|Número Inválido!|\n------------------\n");
            printf("\nInforme novamenete a %dº face resultante:", C);
                scanf("%d", &N);
        }
        if(N==1)
        {
            F1=F1+1;
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
    P1=(F1*100)/15;
    P2=(F2*100)/15;
    P3=(F3*100)/15;
    P4=(F4*100)/15;
    P5=(F5*100)/15;
    P6=(F6*100)/15;
    printf("\nResultado:\n");
    printf("\nNúmero 1: %g vezes (%.2f%%)", F1, P1);
    printf("\nNúmero 2: %g vezes (%.2f%%)", F2, P2);
    printf("\nNúmero 3: %g vezes (%.2f%%)", F3, P3);
    printf("\nNúmero 4: %g vezes (%.2f%%)", F4, P4);
    printf("\nNúmero 5: %g vezes (%.2f%%)", F5, P5);
    printf("\nNúmero 6: %g vezes (%.2f%%)", F6, P6);
    printf("\n___________________________________________________________\n\n");
    Sleep(3000);
    system("pause");
}
