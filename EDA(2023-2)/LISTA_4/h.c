#include <stdio.h>

int buscaBinaria (int x, int n, int v[]) { 
   int e = -1, d = n; // atenção!
   while (e < d-1) {  
      int m = (e + d)/2;
      if (v[m] < x) e = m;
      else d = m; 
   }
   return d;
}

int main (){
    int N, M, t;
    scanf("%d %d", &N, &M);
    int Mnum[M], Nnum[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &Nnum[i]);
    }
    for(int i = 0; i < M; i++){
        scanf("%d", &Mnum[i]);
        printf("%d\n", buscaBinaria(Mnum[i], N, Nnum));
    }


}