#include <stdio.h>

int main()
{
    int i, j, n, x, y, a, TC = 1, arr[100], m;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
        {
            break;
        }
        int flag = 0;
        scanf("%d %d", &x, &y);
        m = x * y;
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        if(x == 1 || y == 1 || n == 1)
        {
            flag = 1;
        }
        else
        {
            if(x > y)
            {
                int t = x;
                x = y;
                y = t;
            }
            for(j = 0; j < n; ++j)
            {
                if(m % arr[j] == 0)
                {
                    flag = 1;
                    break;
                }
                else if(x <= arr[j] && arr[j] <= y)
                {
                    flag = 1;
                    break;
                }
                else if(arr[j] % x == 0 || arr[j] % y == 0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    printf("Case %d: No\n", TC++);
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
        {
            printf("Case %d: Yes\n", TC++);
        }
    }
    return 0;
}
