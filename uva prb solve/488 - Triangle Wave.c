#include <stdio.h>

int main()
{

    int i, j, k, x, a, n, m;
    scanf("%d", &a);
    for(x = 0; x < a; ++x)
    {
        scanf("%d", &n);
        scanf("%d",&m);
        for(k = 0; k < m; ++k)
        {
            for(i = 1; i <= n; ++i)
            {
                for(j = 0; j < i; ++j)
                {
                    printf("%d", i);
                }
                printf("\n");
            }
            for(i = (n - 1); i >= 1; --i)
            {
                for(j = 0; j < i; ++j)
                {
                    printf("%d", i);
                }
                printf("\n");
            }
            if(k < (m - 1))
                printf("\n");
        }
        if(x < a - 1)
            printf("\n");
    }

    return 0;
}
