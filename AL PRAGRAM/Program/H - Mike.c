#include <stdio.h>
int a[1000][1000];

int main()
{
    int i, j, n, x, y, m, p, count, k;
    scanf("%d %d %d", &n, &m, &p);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(k = 0; k < p; ++k)
    {
        scanf("%d %d", &x, &y);
        if(a[x][y] == 1)
            a[x][y] = 0;
        else a[x][y] = 1;
        int max = 0;
        for(i = 1; i <= n; i++)
        {
            count = 0;
            for(j = 1; j <= m; j++)
            {
                if(a[i][j] == 1)
                {
                    count++;
                    if(max < count)
                        max = count;
                }
                else count = 0;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
