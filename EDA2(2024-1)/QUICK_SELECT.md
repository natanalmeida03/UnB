## QUICK SELECT

#### 05 de abril de 2024

#### PROBLEMA
Como selecionar o k-esimo menor elemento de um conjunto qualquer? 

Quando k=1, encontrar o meonr custa O(n).

1. Aplicar selection sort até a posicao k. $$ O(n^2) $$
1. Ordenar e acessar o (k-1)-ésimo elemento $$ O(n.lg(n)) $$
1. Aproveitar um pedaco do quick sort. QUICK SELECT.

#### SEPARACAO
Dado um vetor v[l, ..., r], quero encontrar j ∈ [l,r] tal que:

v[l ... j-1] <= v[j] < v[j+1 ... r]

```c
void quick_select(int *v, int l, int r, int k){
     if(l < r){
          int j = partition(v, l, r);
          if(k < j) quick_select(v, l, j-1, k);
          if(k > j) quick_select(v, j+1, r, k);
     }
}
```