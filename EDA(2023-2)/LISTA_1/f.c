#include <stdio.h>

int main ()
{
    int cartas[5], t = 0;
    char resAnt = 'N', resDep;

    for(int i = 0; i < 5; ++i)
        scanf("%d", &cartas[i]);        

    if(cartas[1] - cartas[0] < 0)
        resAnt = 'D';
    else
        resAnt = 'C';

    if(resAnt == 'C')
        for(int i = 1; i < 5; ++i)
            if(cartas[i] - cartas[i - 1] > 0)
                ++t;
    else
        for(int i = 1; i < 5; ++i)
            if(cartas[i] - cartas[i - 1] < 0)
                ++t;

    if(t == 4 )
        printf("%c\n", resAnt);
    else    
        printf("N\n");

    return 0;
}