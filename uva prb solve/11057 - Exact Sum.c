#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, ar[11000], i, j, sum, res, x, y, min;
    while(scanf("%d", &n) == 1)
    {
        res = 10000000;
        for(i = 0; i < n; ++i)
            scanf("%d", &ar[i]);
        scanf("%d", &m);
        for(i = 0; i < n - 1; ++i)
        {
            for(j = i + 1; j < n; ++j)
            {
                sum = ar[i] + ar[j];
                min = abs(ar[i] - ar[j]);
                if(sum == m && res > min)
                {
                    res = min;
                    x = ar[i];
                    y = ar[j];
                }
            }
        }
        if(x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", x, y);
    }

    return 0;
}
