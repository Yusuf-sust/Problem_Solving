#include <stdio.h>

int main()
{
    long long int sum, t;
    int n, d, r, ar1[110], ar2[110], x;
    while(scanf("%d%d%d", &n, &d, &r) == 3)
    {
        if(n == 0 && d == 0 && r == 0)
            break;
        sum = 0;
        int i;
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &ar1[i]);
        }
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &ar2[i]);
        }
        for(i = 0; i < n; ++i)
        {
            x = (ar1[i] + ar2[i]);
            if(x >= d)
            {
                //sum += (x - d);
                sum += (x - d) * r;
            }
            }
            /*t = (sum * r);
            if(t > 0)
                printf("%lld\n", t);
            else
                printf("0\n");*/
            printf("%lld\n", sum);
        }

        return 0;
    }
