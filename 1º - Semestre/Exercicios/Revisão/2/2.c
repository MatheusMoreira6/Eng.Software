#include <stdio.h> //Biblioteca de entrada/saída.
#include <stdlib.h> //Biblioteca para utilização da função "system".
#include <locale.h> //Biblioteca para funcionamento de uma linguagem de escrita específica.

void main ()
{
    setlocale(LC_ALL, "Portuguese"); //Definição de idioma.
    int T; //declaração de váriavel.
    float S;
    system("color 70"); //Comando para alteração da coloração do software.
    printf("Reajuste Salárial\n___________________________________"); //Mensagens a serem exibidas na tela para o usuário.
    printf("\n\nInforme o tempo de serviço(em anos):");
        scanf("%d", &T);
    printf("\nInforme o salário do funcionário:R$");
        scanf("%f", &S);
    if (T<10) //Condição em If para comparação de valores.
    {
        S=S*1.08;
    }
    else
    {
        S=S*1.1;
    }
    printf("___________________________________\n\nSalário reajustado:R$%.2f\n___________________________________\n\n", S);
    system ("pause"); //Comando para parar a execução do código.
}
