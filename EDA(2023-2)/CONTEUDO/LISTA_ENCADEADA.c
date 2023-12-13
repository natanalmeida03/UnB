#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *prox;
}Node;

void insere_inicio(Node **le, int x)
{
    Node *nova = malloc(sizeof(Node));

    nova->data = x;
    nova->prox = *le;
    *le = nova;
}

void insere_final(Node **le, int x)
{
    Node *nova = malloc(sizeof(Node));

    nova->data = x;
    nova->prox = NULL;
    
    if(!*le)
    {
        nova->prox = *le;
        *le = nova;
    }
    else
    {
        Node *aux = *le;
        while(aux->prox)
            aux = aux->prox;

        aux->prox = nova;
    }
}

int deletar_numero(Node *le, int x)
{
    Node *aux = le, *lixo = NULL;
    
    if(le->data == x)
    {
        lixo = le;
        le = lixo->prox;
        return 1;
    }

    while(aux->prox && aux->prox->data != x)
        aux = aux->prox;

    if(!aux->prox)
        return 0;
    else
    {
        lixo = aux->prox;
        aux->prox = lixo->prox;
    }

    free(lixo);
    return 1;
}

void imprimir_lista(Node *le)
{
    Node *aux = le;
    printf("LISTA: \n");
    while(aux)
    {
        printf("%d\n", aux->data);
        aux = aux->prox;
    }
}