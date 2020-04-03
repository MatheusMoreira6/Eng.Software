/*Construa um programa que imprima a tabela de equival�ncia de graus
Fahrenheit para cent�grados. Os limites s�o de 50 a 70 graus
Fahrenheit com intervalo de 1 grau.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float C, F=50;
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    printf("Tabela de Equival�ncia(�F = �C):");
    printf("\n________________________________\n");
    while(F<=70)
    {
        C=(F-32)*5/9;
        printf("\n%g�F = %g�C", F, C);
        printf("\n________________________________\n");
        F++;
    }
    printf("\n");
    system("pause");

}
