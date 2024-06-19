## ÁRVORES

### 24 de abril de 2024

Uma árvore é uma estrutura composta por nós interligados entre si de tal forma que:

1- Os nós possuem um **ascendente**, com excessao de um unico no chamado **raiz**.
2- Os nós possuem um ou mais filhos, com excessao dos nós chamadas **folhas**.

Essa definicao pressupõe que uma árvore possui uma **topologia**.

Uma árvore é dita binaria se cada nó possui, no máximo, dois filhos.

em uma árvore binaria, um nível k pode ter, no máximo **2<sup>k</sup>** elementos.

numa árvore com **n** elementos em que todos osníveis estejam cheios, podemos ter, no máximo, **lg(n)** níveis.

Uma árvore com n elementos pode ter, no máximo, n níveis. Neste caso, a árvore é uma estrutura linear.

#### REPRESENTAÇÃO
``` c
typedef struct no{
     int dado;
     struct no *esq, *dir;
} no;

no *raiz;
```

DEFINIÇÃO RECURSIVA: cada nó é uma raiz que é *NULO* ou *POSSUI UMA SUB-ÁRVORE ESQ. E UMA DIR.*

#### ALTURA

a **altura** de um nó é a **maior distancia** entre ela e uma folha. Distancia é quantidade de **arestas**(ligacoes) entre um nó e outro.
A altura de uma árvore é a altura de sua raiz.

**Profundidade** de um nó é a sua distancia a raiz.
Uma árvore é dita balanceada se atende a alguma das seguintes definicoes:
1- Para todo nó, a subarvore esquerda e direita possuem aproximadamente a mesma altura.
2- As folhas possuem aproximadamente a mesma profundidade.
3- A altura da árvore é aproximadamente lg(n).

``` c
// O(n)
int altura(no *raiz){
     if(!raiz) return -1;

     int he = altura(raiz->esq);
     int hd = altura(raiz->dir);

     return he > hd ? he+1 : hd+1;
}
```

#### PERCURSOS ÁRVORE BINARIA

##### PROFUNDIDADE

1- Pre-ordem:
- "visita" a raiz
- visita a subarvore a esquerda
- visita a subarvore a direita

2- Em-ordem:
- visita a subarvore a esquerda
- "visita" a raiz
- visita a subarvore a direita

3- Pos-ordem:
- visita a subarvore a esquerda
- visita a subarvore a direita
- "visita" a raiz
### 03 de Maio de 2024

#### ARVORE BINARIA DE BUSCA

Dado um nó V qualquer, vale que: 
$$ e <= V <= d $$

```c
no *busca(no *raiz, int x){
     if(!raiz)
          return NULL;

     if(raiz->chave == x)
          return raiz;
     else{
          if(x < raiz->chave)
               return busca(raiz->esq, x);
          else
               return busca(raiz->dir, x)
     }
}
```

##### INSERCAO

```c
no *insere(no *raiz, int y){
     if(!raiz){
          no *novo = malloc(sizeof no);
          novo->chave = y;
          novo->esq=novo->dir=NULL;
          return novo;
     }

     if(y < raiz->chave) raiz->esq = insere(raiz->esq, y)
     if(y > raiz->chave) raiz->dir = insere(raiz->dir, y)
}
```

### 08 de Maio de 2024
##### REMOCAO

- Procura pelo nó atecessor(ou sucessor).
- troca o antecessor (ou sucessor) com o nó a ser removido.
- remove o nó

``` c
no *remove_raiz(no* raiz){
     if(r->esq){
          no *p = raiz, *q = raiz->esq;
          while(q->dir){
               p = q;
               q = q->dir;
          }

          r->chave = q->chave;
          if(p != r) p->dir = q->esq;
          else p->esq = q->esq;

          free(q);
          return r;
     }else{
          no *q = r->dir;
          free(r);
          return q;
     }
}
```
### 10 de Maio de 2024
#### ARVORE RUBRO-NEGRO ESQUERDISTA

É uma árvore binaria de busca tal que :

- Todo nó é vermelho ou preto
- A raiz é preta
- As folhas são NULL e tem cor preta
- Se um nó for vermelho:
     - Seus filhos são pretos
     - É filho esquerdo do um nó preto
- Para todo nó, qualquer caminho dele a alguma folha possui a mesma quantidade de nós pretos
     - Nao conta-se o proprio no
     - isso se chama altura negra

Seja bh a altura negra de uma árvore rubro negra

Logo a quantidade de nós n é tal que $$ n >= 2^{bh} - 1$$
Portanto, $$ n >= 2^{h/2}-1 $$

##### REPRESENTACAO

```c
enum cor{VERMELHO, PRETO};

typedef struct no{
     int chave;
     enum cor cor;
     struct no *esq, *dir;
} no;
```

##### INSERCAO

A inserção é feita igual na ABB(árvore binária de busca)

```c
no *insere(no *raiz, int y){
     if(!raiz){
          no *novo = calloc(1,sizeof no);
          novo->chave = y;
          novo->cor = VERMELHO;
          return novo;
     }

     if(y < raiz->chave) raiz->esq = insere(raiz->esq, y)
     if(y > raiz->chave) raiz->dir = insere(raiz->dir, y)

     return raiz;
}
```
**CASOS DA INSERCAO**
1. Novo como filho esquerdo de um nó preto
     - nada a fazer
2. Novo como filho direito de um no preto com irmao preto
     - rotacao a esquerda no pai

### 15 de Maio de 2024

3. Novo como filho esquerdo de um nó vermelho
     - rotacao direita no pai do no vermelho
     - subida de cor
4. Novo como filho direito de um no preto com irmao vermelho
     - subida de cor
5. Novo como filho direito um nó vermelho
     - rotacao a esquerda

##### CONDICOES DE PROBLEMAS
Dado um nó r:
1. r->esq->cor == vermelho e r->esq->esq->cor == vermelho;
*CONDUTA*: rotacao a direita em r.
2. r->esq->cor == r->dir->cor == vermelho
*CONDUTA*: subida de cor.
3. r->dir->cor == vermelho
*CONDUTA*: rotacao a esquerda.

```c
int ehvermelho(no *r){
     if(r!= NULL && r->cor == VERMELHO)
          return 1;
     return 0;
}

no *rotaciona_direita(no *r){
     no *y = x->esq;
     y->cor = x->cor;
     x->cor = VERMELHO;
     x->esq = y->dir;
     y->dir = x;
     return y;
}

no *rotaciona_esquerda(no *r){
     no *y = x->dir;
     y->cor = x->cor;
     x->cor = VERMELHO;
     x->dir = y->esq;
     y->esq = x;
     return y;
}

no sobe_cor(no *r){
     r->cor = VERMELHO;
     r->dir->cor = r->esq->cor = PRETO;
}

no *corrige_raiz(no *r){
     if(ehvermelho(r->esq->cor) && ehvermelho(r->esq->esq->cor))
          r = rotaciona_direita(r);
     if(ehvermelho(r->esq->cor) && ehvermelho(r->dir->cor))
          sobe_cor(r);
     if(ehvermelho(r->dir->cor))
          r = rotaciona_esquerda(r);

     return r;
}
```

### 17 de Maio de 2024
#### FILA DE PRIORIDADE

Uma fila de prioridade é uma estrutura de dados que possui duas operacoes:
1-Insercao
2-Remocao do elemento com maior prioridade

Implementar FP usando vetores ou listas encadeadas implica um custo de  O(n) para alguma das duas operacoes.

##### FILA DE PRIORIDADES USANDO ÁRVORES

Para implementar FP com arvores, vamos usar arvores binarias completas:
árvores em que todos os niveis possuem o maximo de nos, com excecao, talvez, do ultimo.

*IMPLEMENTACAO DE ARVORES COMPLETAS*

Dado um nó v[i] da árvore
pai = (i-1)/2
filho esquero = 2*i+1
filho direito = 2*i+2

A árvore seria tal que a raiz é maior que seus filhos

###### REPRESENTACAO
```c
typedef struc{
     int *chaves;
     int n, tam;// n: total de elemento na fila; tam: capacidade da fila
} FP;

FP *cria_fila(int T){
     FP *fp = mallcoc(sizeof(FP));
     fp->chaves = malloc(T*sizeof(int));
     fp->n = 0;
     fp->tam = T;

     return fp;
}

void sobe_no_heap(FP *fp){ // O(lg(n))
     int k = fp->n-1;
     int p = (k-1)/2;
     while(k > 0 && fp->chaves[k] > fp->chaves[p]){
          exch(&fp->chaves[k], &fp->chaves[p]);
          k = p;
          p = (k-1)/2;
     }
}

void insere(FP *fp, int x){ 
     if(fp->n + 1 >= fp->tam){ //O(tam) => O(1) amortizacoes
          fp->tam *= 2;
          fp->chaves = realloc(fp->chaves, fp->tam);
     }
     //O(lg(n))
     fp->chaves[fp->n] = x;
     fp->n++;
     sobe_no_heap(fp);
}

int  aior(FP* fp, int e, int d){

}

int extrai_maximo(FP *fp){
     if(fp->n > 0){
          fp->n--;
          exch(&fp->chave[0], &fp->chave[fp->n]);

          int k = 0, esq = 2*k+1, dir = esq+1;
          while(esq < fp->n && fp->chaves[esq] > fp->chaves[k]
          || dir < fp->n && fp->chaves[dir] > fp->chaves[k]){
               int m = maior(fp,esq,dir);

               exch(&fp->chaves[k], &fp->chaves[m]);

               k = m; esq = 2*k+1; dir = esq+1; 
          }
     }
}
```