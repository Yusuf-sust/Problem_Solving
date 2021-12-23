#include <stdio.h>

int main()
{
    int n, x, y, sum;
    while(scanf("%d", &n) == 1)
    {
        sum = n;
        while(n >= 3)
        {
            x = n / 3;
            y = n % 3;
            sum += x;
            n = x + y;
        }
        if(n == 2)
            {
                sum += 1;
            }
        printf("%d\n", sum);
    }

    return 0;
}

