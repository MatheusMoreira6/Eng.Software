/*Leia o raio de um c�rculo e calcule e mostre a sua �rea.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float R, A;
    printf("�rea de um Circulo");
    printf("\n\nInforme o tamanho do raio:");
        scanf("%f", &R);
    A=3.14*(R*R);
    printf("\nO valor da �rea �:%gm�\n\n", A);
    system ("pause");
    return (0);
}
