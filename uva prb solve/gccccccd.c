#include <stdio.h>

int main()
{
    int i, j, n, g, p, q, temp;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        g = 0;
        for(i = 1; i < n; ++i)
        {
            for(j = i + 1; j <= n; ++j)
            {
                p = i;
                q = j;
                while(q != 0)
                {
                    temp = p % q;
                    p = q;
                    q = temp;
                }

                g += p;
            }
        }
        printf("%d\n", g);
    }

    return 0;
}

