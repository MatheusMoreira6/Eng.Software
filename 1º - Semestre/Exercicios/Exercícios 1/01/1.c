/*Leia um número inteiro e calcule e mostre o seu dobro.*/

#include <stdio.h>//Biblioteca de entrada/saída.
#include <stdlib.h>//Biblioteca de funções
#include <locale.h>//Biblioteca de local.
int main() //Função principal.
{
    setlocale(LC_ALL, "Portuguese"); //Seleciona o idioma a ser exibido no programa.
    float A, B; //declaração de variável.
    printf("Dobro de um número\n\n");
    printf("Insira um número:");
        scanf("%f", &A);//Leitura do número inserido pelo usuário.
    B=A*2;//Dobro do valor declarado para A.
    printf("\nResultado:%g\n\n", B); //Resultado
    system("pause");
    return (0);
}
