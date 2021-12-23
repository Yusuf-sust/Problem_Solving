#include <stdio.h>

int main()
{
    int i, j, p, q, n, count, TC = 1;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        else
        {
            q = -1;
            for(i = 1; i <= n; ++i)
            {
                count = 0;
                for(j = 1; j <= i; ++j)
                {
                    if((i % j) == 0)
                    {
                        count += j;
                    }
                }
                if(count == n)
                {
                    p = i;
                    if(q < p)
                    {
                        q = p;
                    }
                }
            }
            printf("Case %d: %d\n", TC++, q);
        }
    }

    return 0;
}
