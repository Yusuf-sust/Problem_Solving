#include <stdio.h>

int main()
{
    int i, j, k, gcd, n;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        gcd = 0;
        for(i = 1; i < n; ++i)
        {
            for(j = i + 1; j <= n; ++j)
            {
                for(k = i; k >= 1; --k)
                {
                    if(i % k == 0 && j % k == 0)
                    {
                        gcd += k;
                        break;
                    }
                }
            }
        }
        printf("%d\n", gcd);
    }

    return 0;
}
