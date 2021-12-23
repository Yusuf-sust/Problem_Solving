#include <stdio.h>

int main()
{
    int ar[50], i, j, k, n, m, p, q, x;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        x = 0;
        int sum = 0;
        scanf("%d %d %d", &m, &p, &q);
        for(j = 0; j < m; ++j)
        {
            scanf("%d", &ar[j]);
        }
        for(j = 0; j < (m - 1); ++j)
        {
            for(k = (j + 1); k < m; ++k)
            {
                if(ar[j] > ar[k])
                {
                    int swap = ar[j];
                    ar[j] = ar[k];
                    ar[k] = swap;
                }
            }
        }
        for(j = 0; j < m; ++j)
        {
            if((x+1) > p)
            {
                printf("Case %d: %d\n", i, x);
                break;
            }
            else
            {
                sum += ar[j];
                if(sum == q)
                {
                    printf("Case %d: %d\n", i, x+1);
                    break;
                }
                else if(sum > q)
                {
                    printf("Case %d: %d\n", i, x);
                    break;
                }
            }
            x++;
        }
        if(m < p && sum < q)
            printf("Case %d: %d\n", i, m);
    }

    return 0;
}
