/*Leia o raio de um círculo e calcule e mostre a sua área.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float R, A;
    printf("Área de um Circulo");
    printf("\n\nInforme o tamanho do raio:");
        scanf("%f", &R);
    A=3.14*(R*R);
    printf("\nO valor da área é:%gm²\n\n", A);
    system ("pause");
    return (0);
}
