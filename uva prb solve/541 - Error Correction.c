#include <stdio.h>

int main()
{
    int a[110][110], n, x, y, sum, p, q, i, j;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        x = 0, y = 0;
        for(i = 1; i <= n; ++i)
        {
            sum = 0;
            for(j = 1; j <= n; ++j)
            {
                scanf("%d", &a[i][j]);
                sum += a[i][j];
            }
            if(sum%2 == 1)
            {
                x++;
                p = i;
            }
        }
        for(i = 1; i <= n; ++i)
        {
            sum = 0;
            for(j = 1; j <= n; ++j)
            {
                sum += a[j][i];
            }
            if(sum%2 == 1)
            {
                y++;
                q = i;
            }
        }
        if(x == 0 && y == 0)
        {
            printf("OK\n");
        }
        else if(x == 1 && y == 1)
        {
            printf("Change bit (%d,%d)\n", p, q);
        }
        else
        {
            printf("Corrupt\n");
        }
    }

    return 0;
}
