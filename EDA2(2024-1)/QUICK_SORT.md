## QUICK SORT

#### 03 de Abril de 2024

O quick sort é um algoritmo de divisao e conquista que divide o conjunto a ser ordenado usando a estrategia de **particionamento** ( ou separacao).

*PARTICIONAR*: Dado um vetor v[e...d], queremos encontrar j ∈ [e,d] tal que:

v[e ... j-1] <= v[j] < v[j+1 ... d]

Chamamos v[j] de pivo.

Ideia do algoritmo da separacao.

1. Escolho um elemento para ser o pivo.
1. Encontro a posicao que o elemento escolhido deveria ocupar. 

VERSAO COM: $$ O(n^{2}) $$
``` c
void exch(int *a, int *b){
     int t = *a;
     *a = *b;
     *b = t;
}

int partition(int *v, int l, int r){
     pivo = v[r];
     int k = l, j = l;

     while(k < d){
          if(v[j] <= c)
               exch(&v[k], v[j++]);
          k++;
     }

     exch(&v[j], &v[r]);
     return j;
}

void quick_sort(int *v, int l, int r){
     if(l >= r)
          return;

     j = partition(v, l, r);
     quick_sort(v, l, j-1);
     quick_sort(v, j+1, r);
}
```
partition = O(r-l+1) e nao estavel;

#### OTIMIZACAO:

Método da mediana de tres. $$ O(n.lg(n)) $$ 
Mediana entre : v[l], v[(r+l)/2] e v[d].   
e coloca na posicao r



