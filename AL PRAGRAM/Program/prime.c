#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, x, flag;
    scanf("%d", &n);
    for(i = 1; i <= 10000000; ++i)
    {
        flag = 1;
        for(j = 2; j <= sqrt(i); ++j)
        {
            if(i % j == 0)
            {
                flag += 0;
            }
            else
            {
                flag += 1;
                if(flag == n)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}
