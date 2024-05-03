## TABELA HASH

#### 12 de Abil de 2024

### IMPLEMENTACAO DE HASHS

Para implementae tabelas hash, precisamos escolher a estrutura da tabela (vetor ou listas encadeadas) e o metodo de resolucao de colisoes.

-> m: conjunto de dados.

-> s: conjunto universo

-> t: tamanho tabela hash. (t < s) = colisao

#### ENCADEAMENTO SEPARADO

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

#### ENDEREÇAMENTO ABERTO

A tabela é um **vetor** e todo dado é armazenado no proprio vetor.

Pera tratar colisoes, há alguma tecnicas, dentre as quais uma das mais comuns é a **sondagem linear**: se hover colisao, procure pela proxima "posicao livre" no vetor. 

*POSICAO LIVRE*: Marcar com um valor que nao pertenca ao conjunto universo(se conj universo for numeros positivos , -1 é um bom valor).

Ex: considera uma hash de tamanho T=10 e a insercao das seguintes chaves:
(333, 336, 1333, 333, 7777, 446, 556, 999)

**1-INSERCAO**
``` c
pos = hash(ch);
while(v[pos] != -1) pos=(pos+1)%T;
v[pos]=ch;
```

Se a tabela estiver Q% estiver ocupada, redimensionar(ex: dobrar o tamanho);

>OBS: use Q pequeno o suficiente para garantir a esparsidade da tabela

**2-BUSCA**

``` c
pos = hash(ch);
while(v[pos] != ch && v[pos] != -1) pos=(pos+1)%T;
if(v[pos] == -1) return 0;

return 1;
```