#include <stdio.h>

int main ()
{
    int N, C, total = 0;
    char sn = 'N';

    scanf("%d %d", &N, &C);

    for(int i = 0; i < N; ++i)
    {
        int S, E;

        scanf("%d %d", &S, &E);

        total = total - S + E;

        if(total > C)
        {
            sn = 'S';
        }
    }

    printf("%c\n", sn);
    return 0;
}