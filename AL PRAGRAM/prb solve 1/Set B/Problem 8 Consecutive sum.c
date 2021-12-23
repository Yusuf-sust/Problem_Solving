#include <stdio.h>

int main()
{
    int n, m, i, sum;
    while(scanf("%d%d", &n, &m) == 2)
    {
        sum = 0;
        if(n > m)
        {
            int temp = n;
            n = m;
            m = temp;
        }
        for(i = n; i <= m; ++i)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
