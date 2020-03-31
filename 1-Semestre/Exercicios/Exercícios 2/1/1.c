#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    char ch;
    printf("Pressione uma tecla:");
    ch=getche();
    printf("\n\nA Tecla pressionada foi:%c\n\n\n", ch);
    system ("pause");
}
