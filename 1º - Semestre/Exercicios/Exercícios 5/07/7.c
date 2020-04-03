/*José tem 1,50 m e cresce 2 centímetros por ano. Pedro tem 1,10 m e cresce 3 centímetros
por ano. Construa um programa que calcule em quantos anos Pedro será maior que José.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float J=1.50, P=1.10;
    int A=0;
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    printf("Pergunta: Dentro de quantos anos Pedro será maior que José?\n___________________________________________________________");
    while(J>P)
    {
        A++;
        J=J+0.02;
        P=P+0.03;
    }
    printf("\n\nResposta: Pedro será maior que José, após %d anos.", A);
    printf("\n\nPedro:%gcm", P);
    printf("\n\nJosé:%gcm\n___________________________________________________________\n\n", J);
    system("pause");
}
