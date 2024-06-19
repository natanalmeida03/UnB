## GRAFOS

### 29 de Maio de 2024

GRAFOS são estruturas formadas por nós interligados entre si.

Matemáticamente, um grafo G é um par ordenado (V, A), onde V é o conjunto dos **VERTICES** e A das ligacoes entre os vértices, as **ARESTAS**.

#### MATRIZ DE ADJACENCIA
```c
typedef struct{
     int **adj;
     int n;
} grafo;
```
**OPERACOES**:
Inserir aresta;   
Remover aresta;   
Existencia de aresta;

```c
grafo *ciar_grafo(int n){
     grafo *g = malloc(sizeof(grafo));
     g->adj = malloc(n*sizeof(int*));
     for(int i = 0; i < n; i++)
          g->adj[i] = malloc(n*sizeof(int));

     g->n = n;
     return g;
}
```

para inserir: g->adj[i][j] = g->adj[j][i] = 1;

O processo é analogo para remocao e existencia.

#### LISTA DE ADJACENCIA

```c
typedef struct no{
     int v;
     struct no *prox;
} no;

typedef struct{
     no *adj;
     int n;
} grafo;

grafo *cria_grafo(int n){
     grafo *g = malloc(sizeof(grafo));
     g->adj = calloc(n, sizeof(no));
     g->n = n;
     return g;
}
```

#### COMPLEXIDADES

|             | MATRIZ | LISTA         |
|:-----------:|:------:|:-------------:|
| INSERIR     | O(1)   |O(1) ou O(δmax)|
| REMOVER     | O(1)   |O(δmax)        | 
| EXISTENCIA  | O(1)   |O(δmax)        |
| ESPACO      | O(n^2) |O(m+n)         |

*m = total de arestas;
*n = total de vertices;
*δmax = grau maximo do grafo

Um grafo dirigido é um grafo em que as conexoes tem direcao.

### 14 de Junho de 2024
#### APLICACOES BASICAS

1- Nó mais popular numa rede

```c
int mais_popular(grafo *g){ // O(n²)
     int grau_max=0; grau, v_max;
     for(int i=0; i < g->n; i++){
          grau = 0;
          for(int j=0; j < g->n; j++)
               if(g->adj[i][j]) grau++;

          if(grau > grau_max){
               grau_max = grau;
               v_max=i;
          }
     }

     return v_max;
}
```

2- Recomendacao de ligacao
```c
void imprime_recomendacoes(grafo *g, int u){
     int *rec = calloc(g->n,sizeof(int));

     for(int v = 0; v < g->n; v++)
          if(g->adj[u][v])
               for(int w = 0; w < g->n; w++)
                    if(g->adj[w][v] && !g->adj[w][u]) rec[w] = 1;

     for(int i = 0; i < g->n; i++)
          if(rec[i]) printf("%d, ", i);
}
```

#### CAMINHOS

Um caminho entre dois vetives u e v quaisquer é uma sequencia, sem repeticao, de vertices adjacentes que comeca em u e termina em v.

dfs- busca por profundidade - pilha
bfs- busca por largura - fila

**DFS**

```c
int busca_rec(grafo *g, int *vis, int w, int v){
     if(w == v) return 1;
     visitado[w] = 1;

     for(int i = 0; i < g->n; i++)
          if(g->adj[w][i] && !visitado[i])
               if(busca_rec(g, vis, i, v))
                    return 1

     return 0;
}

int existe_caminho(grafo *g, int u, int v){
     int *visitados = calloc(g->n, sizeof(int));
     int encontrou = busca_rec(g, visitado, u, v);
     free(visitado);
     return encontrou;
}
```