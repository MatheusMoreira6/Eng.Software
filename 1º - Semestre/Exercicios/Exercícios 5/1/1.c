/*Faça um programa que imprima os valores pares de 0 (zero) a 10 (dez).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int I=0;
    system("color 70");
    printf("Números pares de 0 a 10\n_______________________________\n");
    while (I<=10)
    {
        printf("\nNúmero Par:%d\n", I);
        I=I+2;
    }
    printf("_______________________________\n\n");
    system ("pause");
}
