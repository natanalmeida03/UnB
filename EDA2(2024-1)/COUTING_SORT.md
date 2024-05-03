## COUNTING SORT

#### 05 de abril de 2024

Suponha que vamos ordenar um conjunto de inteiro que variam entre a e b:

EX: Ordenar os alunos da FGA pela matrícula: a = 110000000 e b = 240000000

Ex: v[7] = {4,4,-1,2,4,1,6}; O(n)

aux[8] = {1,0,1,1,1,2,0,1}; O(b-a+1)

vetor *aux* indicando o numero de aparicoes do numero(i-1)

v[7] = {-1,1,2,3,4,4,6} O(n+(b-a))

```c
void ordenaContagem(int *v, int n, int a, int b){
     int *aux = calloc(b-a+1, sizeof(int));

     for(int i = 0; i < n; i++) aux[v[i] - a]++;

     for(int i = 0, j = 0; i < b-a+1; i++){
          while(aux[i] > 0){
               v[j++] = i+a;
               aux[i]--;
          }
     }
}
```
