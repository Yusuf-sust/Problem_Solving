#include <stdio.h>
#include <string.h>

int a[10000010];

int main()
{
    int n, i, j, x;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        a[x] = 1;
    }
    for(i = 2; i <= x; i++)
    {
        int flag = 1;
        for(j = i; j <= x; j += i)
        {
            if(a[j] == 1)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
