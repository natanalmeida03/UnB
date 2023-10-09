#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
} No;

void insere_inicio(No **lista, int num)
{
    No *novo = malloc(sizeof(No));

    if(novo)
    {
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }else
        printf("erro");
}

void imprime(No *no)
{
    while(no)
    {
        printf("%d \n", no->valor);
        no = no->proximo;
    }
}
int main ()
{
    No *lista = NULL;
    int n, v[100000], 
    c = 0,
    qtd = 0,
    sum = 0,
    mx; 

    do
    {
        scanf("%d", &n);
        v[c] = n;
        ++c;
    }while (n != 0);

    scanf("%d", &mx);

    for(int i = 0; i < c; ++i)
    {
        sum += v[i];
        if(sum > mx)
        {
            insere_inicio(&lista, v[i]);
            sum = 0;
        }
    }

    imprime(lista);

    return 0;


}