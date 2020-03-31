/*Leia um valor de conta de um restaurante representando o gasto
realizado pelo cliente. O programa deve calcular e mostrar o
valor total a ser pago, considerando que o restaurante cobra 10%
para o garçom.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float cliente, taxa, total;
    printf("Gasto Total");
    printf("\n\nInforme o valor gasto pelo cliente:R$");
        scanf("%f", &cliente);
    taxa=(10*cliente)/100;
    total=cliente+taxa;
    printf("\nTotal a ser pago:R$%g\n\n", total);
    system ("pause");
    return (0);
}
