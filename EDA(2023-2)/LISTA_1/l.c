#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    int n = 1, c = 0;
    long res[100000];

    scanf("%d", &n);

    while (n != 0)
    {    
        
        int h = 0, m = 0, g = 0;
        char v[2*n];
        char t[3] = "";
        char op[n];
        int tem[n];

        
        res[c] = 0;
        scanf("%s", v);

        for(int i = 0; i < (2*n) - 2; i++)
        {
            g = 0;

            while(isdigit(v[h]))
            {
                t[g] = v[h];
                g++;
                h++;
            }

            op[m] = v[h];

            h++;

            tem[m + 1] = atoi(t);

            if(i == 0)
            {
                res[c] += tem[1];
            }
            
            if(m > 0)
            {
                if(op[m - 1] == 43)
                {
                    res[c] += tem[m+1];
                }
                else if(op[m - 1] == 45)
                {
                    res[c] -= tem[m+1];
                }

            }

            m++;

            memset(t, 0, 3);

        }        

        ++c;

        scanf("%d", &n);
    };

    for(int i = 1; i <= c; ++i)
    {
        printf("Teste %d\n", i);
        printf("%ld\n", res[i-1]);
        printf("\n");
    }

    return 0;
    
}