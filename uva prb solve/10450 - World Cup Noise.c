#include <stdio.h>

int main()
{
    int n, i, j, t = 1, x;
    long long int a, b, temp;
    scanf("%d", &x);
    for(i = 0; i < x; ++i)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            printf("Scenario #%d:\n", t++);
            printf("0\n");
            printf("\n");
            continue;
        }
        a = 1, b = 2;
        for(j = 1; j <= n; ++j)
        {
            temp = a;
            a = b;
            b += temp;
        }
        printf("Scenario #%d:\n", t++);
        printf("%lld\n", a);
        printf("\n");
    }

    return 0;
}
