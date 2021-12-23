#include <stdio.h>

int main()
{
    int n, i, x, b, x1, x2, TC = 1;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        b = 0;
        x1 = 0;
        x2 = 0;
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &x);
            if(x == 0)
            {
                x2 += 1;
            }
            else
            {
                x1 += 1;
            }
        }
        b = x1 - x2;
        printf("Case %d: %d\n", TC++, b);
    }

    return 0;
}
