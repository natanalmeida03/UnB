#include <stdio.h>

int main ()
{
    int R, A, B, sumA = 0, sumB = 0, jg = 0;
    char g[100000];

    scanf("%d", &R);

    while(R != 0)
    {
        for(int i = 0; i < R; ++i)
        {
            scanf("%d %d", &A, &B);
            sumA += A;
            sumB += B;
        }

        if(sumA > sumB)
            g[jg] = 'A';  
        else
            g[jg] = 'B';
        
        sumA = 0;
        sumB = 0;
        jg++;

        scanf("%d", &R);
    }

    for(int i = 0; i < jg; ++i)
    {
        printf("Teste %d \n", i+1);
        if(g[i] == 'A')
            printf("Aldo\n");
        else if(g[i] == 'B')
            printf("Beto\n");
        
        printf("\n");
    }

    return 0;
}