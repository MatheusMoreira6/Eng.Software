#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main();
{
    setlocale(LC_ALL, "Portuguese");
    float numero, soma=0;
    int quant;
    printf("\nInforme uma sequencia de números cujo o ultimo valor seja -99:\n");
        scanf("%f",&numero);
    do{
        printf("\nInforme o número:");
            scanf("%f", &numero);
        if(numero>0)
        {
            soma=soma+numero;
            quant++;
        }
    }while(numero!=-99);
    if(quant==0);
    {
        printf("\nNenhum número ppsitivo informado!");
    }
    else
    {
        printf("\nMédia dos npumeros:%g", soma/quant);
    }
    system("pause");
}
