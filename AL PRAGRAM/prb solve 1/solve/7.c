#include <stdio.h>

int main()
{
    int a, b, i, n;
    while(scanf("%d", &n) == 1)
    {
        a = 0;
        b = 1;
        for(i = 1; i <= n; i ++)
        {
            int temp = a;
            a = b;
            b = b + temp;
        }
        printf("The Fibonacci number for %d is %d\n", n, a);
    }

    return 0;
}
