#include <stdio.h>

long long int p1 = 1; 
long long int p2 = 0;
long long int fn;

long long int fibonacci (int n)
{
    if (n <= 2)
        return p1 + p2;
    else
    {
        fn = p1 + p2;
        p2 = p1; 
        p1 = fn;
        //printf("%d - %lld \n", c, fn);
        return fibonacci(n - 1); 
    }
}
