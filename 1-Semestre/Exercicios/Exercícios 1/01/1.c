/*Leia um n�mero inteiro e calcule e mostre o seu dobro.*/

#include <stdio.h>//Biblioteca de entrada/sa�da.
#include <stdlib.h>//Biblioteca de fun��es
#include <locale.h>//Biblioteca de local.
int main() //Fun��o principal.
{
    setlocale(LC_ALL, "Portuguese"); //Seleciona o idioma a ser exibido no programa.
    float A, B; //declara��o de vari�vel.
    printf("Dobro de um n�mero\n\n");
    printf("Insira um n�mero:");
        scanf("%f", &A);//Leitura do n�mero inserido pelo usu�rio.
    B=A*2;//Dobro do valor declarado para A.
    printf("\nResultado:%g\n\n", B); //Resultado
    system("pause");
    return (0);
}
