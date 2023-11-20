#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct seq{
    int tamanho;
    char caractere;
    int posicao;
} seq;

int compara(const void *a, const void *b) {
    const seq *seqA = (const seq *)a;
    const seq *seqB = (const seq *)b;

    if (seqA->tamanho != seqB->tamanho) {
        return seqB->tamanho - seqA->tamanho;
    } else {
        return seqA->posicao - seqB->posicao;
    }
}

int main ()
{
    seq *sequ = malloc(sizeof(seq) * 100000);
    int i, atual = 0,inicio = 0,c = 1, v[100001];
    char S[100001];
    
    fgets(S, 100001, stdin);

    S[strcspn(S, "\n")] = '\0';

    for (i = 1; S[i] != '\0'; ++i) {
        if (S[i] == S[i-1]) {
            c++;
        } else {
            sequ[atual].tamanho = c;
            sequ[atual].caractere = S[i-1];
            sequ[atual].posicao = inicio;
            v[atual] = sequ[atual].tamanho;

            atual++;
            inicio = i;
            c = 1;
        }
    }

    sequ[atual].tamanho = c;
    sequ[atual].caractere = S[i-1];
    sequ[atual].posicao = inicio;
    v[atual] = sequ[atual].tamanho;

    qsort(sequ, atual+1, sizeof(seq), compara);

    for (int i = 0; i <= atual; ++i) {
        printf("%d %c %d\n", sequ[i].tamanho, sequ[i].caractere, sequ[i].posicao);
    }

}