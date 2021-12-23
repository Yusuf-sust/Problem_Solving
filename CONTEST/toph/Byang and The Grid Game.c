#include <stdio.h>

int a1[1000000], a2[1000000], b1[10000], b2[10000];

int main()
{
    int m, n, x, y, i, j;
    scanf("%d %d %d %d", &m, &n, &x, &y);
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &a1[i], &a2[i]);
    }
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &b1[i], &b2[i]);
    }
    int flag = 1;
    for(i = 0; i < m; i++)
    {
        int f = 1;
        for(j = 0; j < n; j++)
        {
            if((x + b1[j]) == a1[j] && (y + b2[j]) == a2[j])
            {
                x = a1[j], y = a2[j];
                f = 0;
                break;
            }
        }
        if(f)
        {
            flag = 0;
            printf("No\n");
            break;
        }
    }
    if(flag)
        printf("Yes\n");

    return 0;
}
