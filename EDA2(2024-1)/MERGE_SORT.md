## ORDENACAO POR INTERCALACAO (MERGE SORT)

#### 27 de marco de 2024
merge sort:   
     O(nlgn)   

Ordena um vetor resolvendo, a cada passo, o problema da intercalação:

``` c
void merge(int *v, int l, int m, int r){
    int tam = r + 1 - l;

    int *aux = malloc(sizeof(int)*tam);

    int i = l;
    int j = m+1;
    int k = 0;

    while(i <=m && j <=r)
    {
        if (v[i] <= v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    }

    while (i <= m) aux[k++] = v[i++];
    while (j <= r) aux[k++] = v[j++];

    k = 0;

    for(i = l; i <= r; i++)
        v[i] = aux[k++];

    free(aux);
}

void merge_sort(int *v, int l, int r)
{
    if (l >= r) return;
    int m = (r+l)/2;

    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, m, r);
}
```