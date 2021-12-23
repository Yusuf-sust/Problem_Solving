#include <stdio.h>

int main()
{
    int m, n, i, f = 0, j;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(f)
        {
            printf("\n");
        }
        f = 1;
        if(m < n)
        {
            int temp = n;
            n = m;
            m = temp;
        }
        for(i = n; i <= m; ++i)
        {
            j = i + 1;
            printf("%d\n", j);
        }
    }

    return 0;
}
