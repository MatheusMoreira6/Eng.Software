/*Fa�a um programa que leia o raio e a altura de uma lata de �leo
e calcule e apresente oseu volume, utilizando a seguinte f�rmula: VOLUME = 3,14159 * RAIO�*/

#include <stdio.h>//Biblioteca de entrada/sa�da
#include <stdlib.h>//Biblioteca de fun��o
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //sele��o do idioma
    float R, A, V; //declara��o de vari�veis
    printf("Volume de uma lata");
    printf("\n\nInforme o tamanho do raio(cm):");
        scanf("%f", &R);
    printf("\nInforme a altura(cm):");
        scanf("%f", &A);
    V=3.14*(R*R)*A;
    printf("\nO volume �:%gcm�\n\n", V);
    system ("pause"); //fun��o para pausar a execu��o do c�digo
}
