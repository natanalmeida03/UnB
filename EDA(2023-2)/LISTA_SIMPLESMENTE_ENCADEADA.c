#include <stdio.h>
#include <stdlib.h>

typedef struct node {
      int valor; //valor
      struct node *prox; //aponta para o proximo
} Node;

void insere_inicio(Node *lista, int x)
{
    Node *nova = malloc (sizeof (Node));//aloca espaco de memoria para o novo elemento
    nova->valor = x;
    nova->prox = lista->prox;
    lista->prox = nova;
   
}

void insere_fim (Node **lista, int x)
{
    Node *nova, *aux;
    nova = malloc (sizeof (Node));

    if(nova)
    {
        nova->valor = x;
        nova->prox = NULL;//como é o ultimo elemento ele aponta pra NULL

        if(*lista == NULL)//se a lista nao possui nenhum elemento
            *lista = nova;
        else
        {
            aux = *lista;
            while(aux->prox != NULL) //enquanto o proximo nao apontar para null
                aux = aux->prox;

            aux->prox = nova; 
        }
        
    }else
        printf("erro de alocacao de memoria\n");

}

void insere_meio(Node **lista, int x, int ant)
{
    Node *nova, *aux;
    nova = malloc(sizeof(Node));

    if(nova)
    {
        nova->valor = x;
        if(*lista == NULL)//se lista esta vazia
        {
            nova->prox = NULL;
            *lista = nova;
        }
        else
        {
            aux = *lista;
            while(aux->valor != ant && aux->prox)
                aux = aux->prox;

            nova->prox = aux->prox;
            aux->prox = nova;
        }

    }else
        printf("erro de alocacao de memoria\n");    

}

void remo(Node **lista, int x)
{
    Node *aux, *remover = NULL;

    if(*lista)//se a lista nao esta vazia
        if((*lista)->valor == x)//se for pra remover o primeiro conteudo da nossa lista
        {
            remover = *lista;
            *lista = remover->prox;
        }
        else
        {
            aux = *lista;
            while(aux->prox && aux->prox->valor != x)
                aux = aux->prox;

            if(aux->prox)
            {
                remover = aux->prox;
                aux->prox = remover->prox;
                free(remover);
            }
        }
}

Node* busca(Node **lista, int x)
{
    Node *aux, *no = NULL;

    aux = *lista;

    while(aux && aux->valor != x)
        aux = aux->prox;

    if(aux)
        no = aux;

    return no;
}

void imprime(Node *node)
{
    printf("\n\tLISTA: ");
    while(node)
    {
        printf("%d ", node->valor);
        node = node->prox;
    }
    printf("\n");
}

int main ()
{

    Node *lista = NULL, *b;
    // int n = 3;

    insere_inicio(lista, 3);
    //insere_fim(&lista, 6);
    insere_inicio(lista, 9);
    //insere_meio(&lista, 12, 3);
    imprime(lista);
    // b = busca(&lista, n);
    // if(b)
    //     printf("achei o numero %d", b->valor);
    // else
    //     printf("nao achei o numero %d", b->valor);
    // remo(&lista, n);
    // imprime(lista);

    // b = busca(&lista, n);
    // if(b)
    //     printf("achei o numero %d", b->valor);
    // else
    //     printf("nao achei o numero ");
    return 0;
}