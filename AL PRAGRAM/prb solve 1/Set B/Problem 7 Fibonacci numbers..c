#include <stdio.h>

int main()
{
   long long int a, b, i, n;
    while(scanf("%lld", &n) == 1)
    {
        if(n == 0)
            break;
        a = 0;
        b = 1;
        for(i = 1; i <= n; i ++)
        {
            int temp = a;
            a = b;
            b = b + temp;
        }
        printf("The Fibonacci number for %lld is %lld\n", n, a);
    }

    return 0;
}

