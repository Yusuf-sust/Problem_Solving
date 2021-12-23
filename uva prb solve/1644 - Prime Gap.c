#include <stdio.h>
#include <math.h>
int ispr(int n);

int main()
{
    int n, m, i, j, flag, x, y;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        flag = ispr(n);
        if(flag == 10)
        {
            printf("0\n");
            continue;
        }
        else
        {
            for(i = n; i >= 2; --i)
            {
                flag = ispr(i);
                if (flag == 10)
                {
                    x = i;
                    break;
                }
            }
            for(j = n + 1; ; ++j)
            {
                flag = ispr(j);
                if (flag == 10)
                {
                    y = j;
                    break;
                }
            }
            m = y - x;
            printf("%d\n", m);
        }
    }
    return 0;
}

int ispr(int n)
{
    int i, flag = 1;
    for(i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        return 10;
    else
        return 5;
}
