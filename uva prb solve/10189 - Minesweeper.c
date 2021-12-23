#include <stdio.h>
#include <string.h>

char ch[1010][1010];
int n, m;

char num(int i, int j);

int main()
{
    int i, j, T = 1;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;
        getchar();
        if(T != 1)
        {
            printf("\n");
        }
        memset(ch, '.', sizeof(ch));
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= m; ++j)
            {
                scanf("%c", &ch[i][j]);
            }
            getchar();
        }
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= m; ++j)
            {
                if(ch[i][j] == '.')
                {
                    ch[i][j] = num(i,j);
                }
            }
        }
        printf("Field #%d:\n", T++);
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= m; ++j)
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
    int k, l, sum;
    sum = 0;
    for(k = i - 1; k <= i + 1; ++k)
    {
        for(l = j - 1; l <= j + 1; ++l)
        {
            if(ch[k][l] == '*')
            {
                sum++;
            }
        }
    }
    sum = sum + 48;
    c = (char)sum;

    return c;
}

