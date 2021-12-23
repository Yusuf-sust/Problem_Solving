#include <stdio.h>
#include <math.h>

int re(int n, int j);

int main()
{
    int m, n, i, j, k, max, ret, a, flag;
    scanf("%d", &m);
    for(i = 0; i < m; ++i)
    {
        max = 0;
        a = 0;
        scanf("%d", &n);
        for(j = 2; j <= n; ++j)
        {
            flag = 1;
            for(k = 2; k <= sqrt(j); ++k)
            {
                if(j % k == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                ret = re(n,j);
                if(ret > max)
                {
                    a = j;
                    max = ret;
                }
            }
        }
        printf("%d\n", a);
    }

    return 0;
}

int re(int n, int j)
{
    int p;
    for(p = 0; ; p++)
    {
        if((p * j) <= n && n < ((p + 1) * j))
        {
            return (n - (p * j));
        }
    }

}
