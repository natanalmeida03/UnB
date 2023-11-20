#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long int li;
typedef struct seq{
    li valor;
    li posicao;
} seq;

void exch(seq* xp, seq* yp)
{
    seq t = *xp;
    *xp = *yp;
    *yp = t;
}

int busca (li x, li n, seq v[]) { 
   li e = -1, d = n;
   while (e < d-1) {  
      li m = (e + d)/2;
      if (v[m].valor < x) 
        e = m;
      else if (v[m].valor > x) 
        d = m;
      else return v[m].posicao; 
   }
   return -1;
}


void shell_sort(seq *v,li l,li r)
{
    li h = 1;
    while ( h < (r - l +1) /3) h = 3*h+1;

    while (h >=1) {
        for(li i = l + h ; i <= r ; i ++){
            for(li j = i ; j >= l + h && v[j].valor < v[j - h].valor; j -= h ){
                exch ( &v[j] , &v[j-h]);
            }
        }
        h = h /3;
    }
}

int main (){
    li N, M, t;
    scanf("%d %d", &N, &M);
    li Mnum[M];
    seq Nnum[N];


    for(li i = 0; i < N; i++){
        scanf("%d", &t);
        Nnum[i].valor = t;
        Nnum[i].posicao = i;
    }


    shell_sort(Nnum, 0, N-1);

    for(li i = 0; i < M; i++){
        scanf("%d", &t);
        printf("%d\n", busca(t, N, Nnum));
    }

    return 0;
}