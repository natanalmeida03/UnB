#include <stdio.h>
#include <stdlib.h>

#define N 100
char pilha[N];
int t;

void criapilha (void) {
   t = 0;
}

void empilha (char y) {
   pilha[t++] = y;
}

char desempilha (void) {
   return pilha[--t];
} 

int pilhavazia (void) {
   return t <= 0;
}

void limpapilha (void){
    return;    
}

int main ()
{
    int n, o, te;

    scanf("%d", &n);

    while(n != 0)
    {
        criapilha();
        int a[n+1], c = 1, af[n+1];
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d", &o);
            a[i] = o;
        }
        for(int i = 1; i <= n; ++i)
        {
            if(a[i] != c)
                empilha(a[i]);
            else
            {
                af[c] = c;
                c++;
            }

        }
        for(int i = c; i <= n; ++i){
            te = desempilha();
            if(te != i){
                printf("no\n");
                break;
            }
            c++;
        }
        if(c == n+1)
            printf("yes\n");

        limpapilha();
        scanf("%d", &n);
    }
}