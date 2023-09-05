#include <stdio.h>

void troca(int *p, int *q)
{
    int t;

    t = *p;
    *p = *q;
    *q = t;
}

void f(int a)
{
    printf("%d\n", a);
}

int main()
{
    printf("AULA 05-09-2022");

    /*

    int i = 1234;
    int *p;
    int **r;
    
    p = &i;
    r = &p;

    printf("%d\n", **r); //1234
             
    */
    /*

    int a = 3;
    int b = 9;

    troca(&a,&b);

    printf("%d %d\n", a, b); //9 3

    */
    /*
    PONTEIRO VETOR

    int v[2] = {3, 4};
    int *p;

    p = v;

    printf("%d\n", *(p+1)); //4

    */
    /*
    PONTEIRO MATRIZ

    int a[2][2] = {{1,2},{3,4}};
    int *m;

    m = a[0];

    for(int i=0; i < 4; ++i)
        printf("%d ", *(m+i)); //1 2 3 4

    printf("\n");

    */

    /*
    PONTEIRO DE FUNCAO

    void (*fp)(int);

    fp = &f;
    (*fp)(10);

    */

    return 0;

}