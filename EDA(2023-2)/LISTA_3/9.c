#include <stdio.h>
#include <stdlib.h>

#define N 100000
int fila[N];
int p, u;

void criafila (void) {
   p = u = 0;
}

int filavazia (void) {
   return p >= (u - 2)? 1 : 0;
}

int tiradafila (void) {
   return fila[p++];
}

void colocanafinal (int y) {
   fila[u++] = y;
}

int main ()
{
    int n;
    scanf("%d", &n);
    criafila();
    for(int i = 1; i <= n; ++i)
        colocanafinal(i);

    printf("Cartas descartadas: ");
    do
    {
        printf("%d, ", tiradafila());
        colocanafinal(tiradafila());
    }while(filavazia() == 0);

    printf("%d\n", tiradafila());
    printf("Carta restante: %d\n", tiradafila());

    return 0;
}