/*Leia uma temperatura em graus Celsius e calcule e mostre o valor correspondente em graus Fahrenheit.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float A, B;
    printf("Conversor de Celsius para Fahrenheit");
    printf("\n\nInsira a Temperatura em Celsius:");
        scanf("%f", &A);
    B=(A*9/5)+32;
    printf("\nResultados:%gºF\n\n", B);
    system ("pause");
    return (0);
}
