#include <stdio.h>
#include <math.h>

int main()
{
    int i , x, n, TC = 1;
    while(scanf("%d", &x) == 1)
    {
        if(x < 0)
            break;
        else if(x == 0 || x == 1 || x > 10000)
            printf("Case %d: 0\n", TC++);
        else
        {
            for(n = 1;n <= 10000 ; ++n)
            {
                if(pow(2,n-1) < x && x <= pow(2,n))
                {
                    printf("Case %d: %d\n", TC++, n);
                    break;
                }
            }
        }
    }

    return 0;
}
