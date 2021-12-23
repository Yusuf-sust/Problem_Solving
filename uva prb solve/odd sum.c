#include <stdio.h>

int main()
{
    int i, a, b, n, sum, TC = 1, j;
    scanf("%d", &n);
    for(j = 0; j < n; ++j)
    {
        scanf("%d %d", &a, &b);

        sum = 0;
        for(i = a; i <= b; i++)
        {
            if(i % 2 == 1)
            {
                sum = sum + i;
            }
        }
        printf("Case %d: %d\n", TC++, sum);
    }
    return 0;
}
