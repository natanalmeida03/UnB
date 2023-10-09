#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x = 0;

void printx(int x)
{
    if(x != 0)
    {
        printf("x");
        return printx(x - 1);
    }
}

void solve ()
{
    char l;
    scanf("%c", &l);

    if(l == 'x' && l != '\n')
    {
        x++;
        solve();
    }
    else if(l != 'x' && l != '\n')
    {
        printf("%c", l);
        solve();
    }


}
int main ()
{
    solve();
    printx(x);
    puts("\n");

    return 0;
}