/*Leia o sexo (‘h’ para homem e ‘m’ para mulher) e a altura de uma
pessoa, e que calcula e mostra o seu peso ideal baseado na altura.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float A, P;
    char S;
    printf("Peso ideal");
    printf("\n\nInforme o seu sexo(H/M):");
        S=getche();
    printf("\n\nInforme a sua altura:");
        scanf("%f", &A);
    if (S=='H'|| S=='h')
    {
        P=(72.7*A)-58;
        printf("\nO seu peso ideal é:%gkg\n\n", P);
    }
    else if (S=='M' || S=='m')
    {
        P=(62.1*A)-44.7;
        printf("\nO seu peso ideal é:%gkg\n\n", P);
    }
    system("pause");
}
