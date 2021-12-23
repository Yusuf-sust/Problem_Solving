#include <stdio.h>
#include <string.h>

char c[200][200];

void oil(int i, int j);

int main()
{
    int i, j, n, sum;
    while(scanf("%d", &n) == 1)
    {
        getchar();
        sum = 0;
        memset(c, '0', sizeof(c));
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= n; ++j)
            {
                scanf("%ch", &c[i][j]);
            }
            getchar();
        }
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= n; ++j)
            {
                if(c[i][j] == '1')
                {
                    sum++;
                    c[i][j] = '0';
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
    if(c[i-1][j-1] == '1')
    {
        c[i-1][j-1] = '0';
        oil(i-1,j-1);
    }
    if(c[i-1][j] == '1')
    {
        c[i-1][j] = '0';
        oil(i-1,j);
    }
    if(c[i-1][j+1] == '1')
    {
        c[i-1][j+1] = '0';
        oil(i-1,j+1);
    }
    if(c[i][j-1] == '1')
    {
        c[i][j-1] = '0';
        oil(i,j-1);
    }
    if(c[i][j+1] == '1')
    {
        c[i][j+1] = '0';
        oil(i,j+1);
    }
    if(c[i+1][j-1] == '1')
    {
        c[i+1][j-1] = '0';
        oil(i+1,j-1);
    }
    if(c[i+1][j] == '1')
    {
        c[i+1][j] = '0';
        oil(i+1,j);
    }
    if(c[i+1][j+1] == '1')
    {
        c[i+1][j+1] = '0';
        oil(i+1,j+1);
    }
}

