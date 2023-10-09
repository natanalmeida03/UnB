#include <stdio.h>

int main ()
{
    int N;

    scanf("%d", &N);

    for(int i = 1; i <= N; ++i)
        i%2==0?printf("THUMS THUMS THUMS THUMS THUMS THUMS\n"):printf("THUMS THUMS THUMS\n");

    return 0;
}