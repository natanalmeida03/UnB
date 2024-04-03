#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int v, c[x+1][y+1];
    char s;

    for (int i = 0; i <= x; i++)
        for (int j = 0; j <= y; j++)
            c[i][j] = 0;

    while (scanf(" %c %d", &s, &v) != EOF) {
            int l = s - 'A';
            c[l][v - 1] = 1;
    }

    printf("  ");
    for (int i = 1; i <= y; i++)
        printf("%02d ", i);

    printf("\n");

    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < y; j++) {
            if (c[i][j])
                printf("XX ");
            else
                printf("-- ");
        }
        printf("\n");
    }

    return 0;
}
