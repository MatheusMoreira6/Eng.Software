/*Leia um valor em segundos e calcule e mostre o valor correspondente em horas,
minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Q, H, M, S;
    printf("Segundos para Hora:Minuto:Segundos");
    printf("\n\nInforme a quantidade de segundos:");
        scanf("%d", &Q);
    H=Q/3600;
    M=(((H*3600)-Q)/60)*-1;
    S=Q%60;
    printf("\nResultado:%d:%d:%d\n\n", H, M, S);
    system("pause");
}
