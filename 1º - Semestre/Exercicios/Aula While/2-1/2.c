#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 70");
    float N1, N2, M;
    printf("Média Semetral");
    printf("\n\nInforme a primeira nota:");
            scanf("%f", &N1);
    if (N1>=0 && N1<=10)
    {
        printf("\nInforme a segunda nota:");
            scanf("%f", &N2);
        if (N2>=0 && N2<=10)
        {
            M=(N1+N2)/2;
        }
        else
        {
            do{
                printf("\nInforme novamente a segunda nota:");
                    scanf("%f", &N2);
            }while (N2<0 || N2>10);
            M=(N1+N2)/2;
        }
    }
    else
    {
        do{
        printf("\n\nInforme novamente a primeira nota:");
            scanf("%f", &N1);
        }while (N1<0 || N1>10);
        printf("\nInforme a segunda nota:");
            scanf("%f", &N2);
        if(N2>=0 && N2<=10)
        {
            M=(N1+N2)/2;
        }
        else
        {
            do{
                printf("\nInforme novamente a segunda nota:");
                    scanf("%f", &N2);
            }while (N2<0 || N2>10);
            M=(N1+N2)/2;
        }
    }
    printf("\nMédia final:%g\n\n", M);
    system("pause");
}
