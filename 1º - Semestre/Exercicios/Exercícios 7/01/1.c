#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int N=0, N1=0, N2, N3=0, D, D2, R;
    setlocale(LC_ALL, "Portuguese");
    printf("Soma dos números primos");
    printf("\n\nInforme a quantidade de números que serão inseridos:");
        scanf("%d", &N);
    for(D=1; D<=N; D++)
    {
        N2=0;
        D2=1;
        printf("\nInforme o %dº número:", D);
            scanf("%d", &N1);
        while(D2<=N1)
        {
            R=N1%D2;
            if(R==0)
            {
                N2++;
            }
            D2++;
        }
        if(N2==2)
        {
            N3=N3+N1;
        }
    }
    printf("\nResultado da soma:%d\n\n", N3);
    system("pause");
}
