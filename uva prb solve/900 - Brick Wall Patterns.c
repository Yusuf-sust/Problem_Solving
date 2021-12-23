#include <stdio.h>

int main()
{
    int n, j;
    long long int a, b, temp;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        a = 1, b = 1;
        for(j = 1; j <= n; ++j)
        {
            temp = a;
            a = b;
            b += temp;
        }
        printf("%lld\n", a);
    }

    return 0;
}

