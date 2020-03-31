#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    float N1, N2, DIV;
    system ("color 70");
    printf("Dívisão de Dois Números\n______________________________");
    printf("\n\nInforme o primeiro número:");
        scanf("%f", &N1);
    do{
        printf("______________________________\n\nInforme o segundo número:");
            scanf("%f", &N2);
    }while (N2==0);
    DIV=N1/N2;
    printf("______________________________\n\nResultado da divisão:%g\n______________________________\n\n", DIV);
    system("pause");
}
