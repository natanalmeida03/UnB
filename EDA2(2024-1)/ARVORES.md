## ÁRVORES

#### 24 de abril de 2024

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

``` c
v
```