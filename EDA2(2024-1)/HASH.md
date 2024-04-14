## TABELA HASH

#### 12 de Abil de 2024

### IMPLEMENTACAO DE HASHS

Para implementae tabelas hash, precisamos escolher a estrutura da tabela (vetor ou listas encadeadas) e o metodo de resolucao de colisoes.

-> m: conjunto de dados.

-> s: conjunto universo

-> t: tamanho tabela hash. (t < s) = colisao

#### Encadeamento separado

Um elemento x fica na lista encadeada que ocupa a posicao hash(x).

hash(x) = x % t;

```c
typedef struct no{
     int v;
     struct no *prox;
} no;

typedef struct H{
     no *tab;
     int T;
} H;

void cria_tabela(H *h, int t){
     h = malloc(sizeof(H));
     h->tab = calloc(t, sizeof(no));
     h->T = t;
}
void insere(H *h, int x){
     int pos = hash(x);
     insere_lista(h->tab[pos], x); //insere no comeco
}
void busca(H *h, int x){
     int pos = hash(x);
     no *p = h->tab[pos]->prox;

     while(p){
          if(p->dado == x) return 1;
          p = p->prox;
     }

     return 0;
}
void remove(H *h, int x);

```             
        