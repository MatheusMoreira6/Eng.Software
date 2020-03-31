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
        printf("\nO seu peso ideal é:%gkg\n\n\n", P);
    }
    else if (S=='M' || S=='m')
    {
        P=(62.1*A)-44.7;
        printf("\nO seu peso ideal é:%gkg\n\n\n", P);
    }
    else if (S=='G' || S=='g')
    {
        printf("\nÉ engraçado porque ele é gordo :)\n\n");
    }
    system("pause");
}
