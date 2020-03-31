/*Leia uma temperatura em graus Fahrenheit e calcule e mostre o valor correspondente em graus Celsius.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float A, B;
    printf("Conversor de Fahrenheit para Celsius\n\n");
    printf("Insira a Temperatura em Fahrenheit:");
        scanf("%f", &A);
    B=(A-32)*5/9;
    printf("\nResultado:%gºC\n\n", B);
    system ("pause");
    return (0);
}
