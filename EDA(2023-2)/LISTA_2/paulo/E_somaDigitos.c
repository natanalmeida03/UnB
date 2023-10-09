#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int n, int tam){

    int sum = 0;

    if ( n != 0) {
        sum += n%(10*tam);
        tam--;
        soma(n, tam);
    }

    return sum;

}

int main(){

    int n; 
    char number[100000000];
    scanf("%s", number);
    n = atoi(number);
    printf("%d\n", soma(n, strlen(number)));

}