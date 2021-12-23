#include <stdio.h>

char ch[101][101];

char num(int i, int j);

int main()
{
    int n, m, i, j;
    while(scanf("%d %d ", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                scanf("%c", &ch[i][j]);
            }
        }
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                if(ch[i][j] == '.')
                {
                    ch[i][j] = num(i,j);
                }
            }
        }
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                printf("%c", ch[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

char num(int i, int j)
{
    char c;
    int k, l;
    int sum = 0;
    for(k = (i - 1); k <= (i + 1); ++k)
    {
        for(l = (j - 1); l <= (j + 1); ++l)
        {
            if(ch[k][l] == '*')
            {
                sum++;
            }
            else
                continue;
        }
    }
    sum = sum + 48;
    c = (char)sum;

    return c;
}
