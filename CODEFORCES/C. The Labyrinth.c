#include <stdio.h>
#include <string.h>

char c[1010][1010];

void oil(int i, int j);

int main()
{
    int i, j, m, n, sum;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;
        getchar();
        sum = 0;
        memset(c, '*', sizeof(c));
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= m; ++j)
            {
                scanf("%ch", &c[i][j]);
            }
            getchar();
        }
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= m; ++j)
            {
                if(c[i][j] == '*')
                {
                    sum++;
                    c[i][j] = '.';
                    oil(i, j);
                }
                else
                    continue;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}

void oil(int i, int j)
{
    if(c[i-1][j] == '.')
    {
        c[i-1][j] = '*';
        oil(i-1,j);
    }
    if(c[i][j-1] == '@')
    {
        c[i][j-1] = '*';
        oil(i,j-1);
    }
    if(c[i][j+1] == '@')
    {
        c[i][j+1] = '*';
        oil(i,j+1);
    }
    if(c[i+1][j] == '@')
    {
        c[i+1][j] = '*';
        oil(i+1,j);
    }
}

