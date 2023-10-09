#include <stdio.h>
#include <string.h>

int solve(char *num, int len, int degree) {

    if (len == 1) {
        if (num[0] == '9' && degree == 0) {
            return degree + 1;
        } else if(num[0] == '9') {
            return degree;
        }else
        {
            return -1;
        }
    }

    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += num[i] - '0';
    

    char new_num[1001];
    sprintf(new_num, "%d", sum);
    return solve(new_num, strlen(new_num), degree + 1);
}

int main() {
    char num[1002];
    int d;
    scanf("%s", num);

    while (num[0] != '0') {
        printf("%s", num);

        d = solve(num, strlen(num), 0);

        if(d == -1)
            printf(" is not a multiple of 9. \n");
        else
            printf(" is a multiple of 9 and has 9-degree %d. \n", d);

        scanf("%s", num);
    }

    return 0;
}
