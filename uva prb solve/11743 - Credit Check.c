#include <stdio.h>

int main()
{
    int n, ar[10], sum, x, y, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        sum = 0;
        for(j = 0; j < 4; ++j)
        {
            scanf("%d", &ar[j]);
        }
        for(j = 0; j < 4; ++j)
        {
            y = ar[j];
            x = 2 * (y / 1000);
            if(x > 9)
            {
                x = x % 9;
                if(x == 0)
                    sum += 9;
                else
                    sum += x;
            }
            else
                sum += x;
            y = y % 1000;
            sum += y / 100;
            y = y % 100;
            x = 2 * (y / 10 );
            if(x > 9)
            {
                x = x % 9;
                if(x == 0)
                    sum += 9;
                else
                    sum += x;
            }
            else
                sum += x;
            sum += y % 10;
        }
        if(sum % 10 == 0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }

    return 0;
}
