#include <stdio.h>

int main()
{
    unsigned long long res, n;
    while(scanf("%llu", &n) == 1)
    {
        res = ((n * n * (n + 1 )*(n + 1)) / 4);
        printf("%llu\n", res);
    }

    return 0;
}
