#include <stdio.h>
#include <string.h>

int pa = 0, ua = 0, c = 0;
void findsub(char *s, char *sub, int ps, int v)
{
    if(!s[ps]) return;

    int tam = strlen(sub);
    char novastr[tam];

    strncpy(novastr, s + ps, tam);

    if(strcmp(sub, novastr) == 0)
    {
        if(v == 0) pa = ps;
            
        ua = ps + strlen(sub);
        return findsub(s, sub, ps+1, 1);
    }
    return findsub(s, sub, ps+1, v);
}
int main ()
{
    char sg[102], sub[102];
    int res;

    fgets(sg, 102, stdin);
    if (sg[strlen(sg) - 1] == '\n') sg[strlen(sg) - 1] = '\0';

    scanf("%s", sub);

    findsub(sg, sub, 0, 0);

    printf("%d\n", ua - pa);

}