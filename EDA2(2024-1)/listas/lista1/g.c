#include <stdio.h>
#include <stdlib.h>

typedef struct inst{
    char nome[15];
    int n;
} inst;

int busca (int x, int n, inst v[]) { 
   int e = -1, d = n;
   while (e < d-1) {  
      int m = (e + d)/2;
      if (v[m].n < x) 
        e = m;
      else if (v[m].n > x) 
        d = m;
      else return m; 
   }
   return -1;
}

int exch(inst *a, inst *b)
{
    inst t = *a;
    *a = *b;
    *b = t;
}

int shell(inst *v, int n)
{
    int h = n/2;

    while(h >= 1)
    {
        for(int i = h ; i <= n; i++)
            for(int j = i ; j >= h && v[j].n < v[j - h].n; j -= h)
                exch(&v[j], &v[j - h]);

        h = h/2;
    }
}

int main ()
{
    int q, v, t, a;
    inst in[100000];
    scanf("%d", &q);

    for(int i = 0; i < q; i++)
        scanf("%d %s", &in[i].n, &in[i].nome);

    shell(in, q-1);

    while(scanf("%d", &t) != EOF)
    {
        a = busca(t, q, in);
        if(a == -1)
            printf("undefined\n");
        else
            printf("%s\n", in[a].nome);
    }
}