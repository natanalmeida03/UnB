#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isPair (char h)
{   
    int t = h - '0';

    if (t%2 == 0)
        return 1;

    return 0;
}

int main ()
{
    int n, cp = 0, ci = 0;

    scanf("%d", &n);

    char p[n][7], im[n][7]; 

    for(int i = 0; i < n; ++i)
    {
        char k[7];

        scanf("%s", k);

        //printf("caracter: %c \n", k[strlen(k) - 1]);

        if(isPair((k[strlen(k) - 1])) == 1)
        {
            strcpy(p[cp], k);
            //printf("PAR: %s \n", p[i]);
            cp++;
        }
        else
        {
            strcpy(im[ci], k);
            //printf("IMPAR: %s \n", im[i]);
            ci++;
        }
    }

    for(int i = 0; i < cp; ++i)
    {
        printf("%s ", p[i]);
    }

    printf("\n");

    for(int i = 0; i < cp; ++i)
    {
        printf("%s ", im[i]);
    }

    printf("\n");


    return 0;

}