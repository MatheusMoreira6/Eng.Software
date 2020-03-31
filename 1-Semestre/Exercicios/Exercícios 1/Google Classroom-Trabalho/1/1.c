/*Faça um programa que leia o raio e a altura de uma lata de óleo
e calcule e apresente oseu volume, utilizando a seguinte fórmula: VOLUME = 3,14159 * RAIO²*/

#include <stdio.h>//Biblioteca de entrada/saída
#include <stdlib.h>//Biblioteca de função
#include <locale.h>//Biblioteca utilizada para definir o idioma

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //seleção do idioma
    float R, A, V; //declaração de variáveis
    printf("Volume de uma lata");
    printf("\n\nInforme o tamanho do raio(cm):");
        scanf("%f", &R);
    printf("\nInforme a altura(cm):");
        scanf("%f", &A);
    V=3.14*(R*R)*A;
    printf("\nO volume é:%gcm³\n\n", V);
    system ("pause"); //função para pausar a execução do código
}
