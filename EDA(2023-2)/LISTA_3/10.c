#include <stdio.h>
#include <string.h>

void solve (char pa[502], int t)
{
    if(t < 0)
    {
        return;
        printf("\n");
    }

    printf("%c", pa[t]);
    return solve(pa, (t - 1));
}

int main ()
{
    int t = 1, g;
    char pa[502];

    scanf("%s", pa);
    g = strlen(pa) - 1;

    solve(pa,g);

    printf("\n");
    return 0;
}   
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
char dado;
struct celula *prox;
} celula;  

void empilha (celula **p, char x){
    celula *nova = malloc(sizeof(celula));
    
    nova->dado = x;
    nova->prox = *p;
    *p = nova;
}

void imprime(celula *p)
{
    celula *aux = p;
    while(aux)
    {
        printf("%c", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}
int main(){
    celula *pilha = NULL;
    char s[501];

    scanf("%s", s);

    for(int i = 0; i < strlen(s); ++i)
        empilha(&pilha, s[i]);

    imprime(pilha);

}
*/