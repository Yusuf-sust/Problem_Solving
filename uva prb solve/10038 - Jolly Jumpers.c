#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, ar1[3000], ar2[3000], d, x;
    while(scanf("%d", &n) == 1)
    {
        if(n == 1)
        {
            scanf("%d", &x);
            printf("Jolly\n");
        }
        else
        {
            d = 1;
            for(i = 0; i < n; ++i)
            {
                scanf("%d", &ar1[i]);
            }
            for(j = 0; j < n - 1; ++j)
            {
                ar2[j] = abs(ar1[j] - ar1[j + 1]);
            }
            for(i = 0; i < n - 2; ++i)
            {
                for(j = 0; j < n - i - 2; ++j)
                {
                    if(ar2[j] > ar2[j + 1])
                    {
                        int swap = ar2[j];
                        ar2[j] = ar2[j + 1];
                        ar2[j + 1] = swap;
                    }
                }
            }
            if(ar2[0] == 1)
            {
                for(i = 0; i < n - 2; ++i)
                {
                    if((ar2[i] + 1) == ar2[i + 1])
                    {
                        d += 1;
                    }
                    else
                    {
                        printf("Not jolly\n");
                        break;
                    }
                }
            }
            else
            {
                printf("Not jolly\n");
            }
            if(d == n - 1)
            {
                printf("Jolly\n");
            }
        }
    }

    return 0;
}
