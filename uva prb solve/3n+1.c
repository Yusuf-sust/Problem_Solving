#include <stdio.h>

int main()
{
    int s,e, count, res, i;
    long long int n;
    while(scanf("%d%d", &s, &e) == 2)
    {
        printf("%d %d ", s, e);
        res = 0;
        if(s > e)
        {
            int temp = s;
            s = e;
            e = temp;

        }
        for(i = s; i <= e; ++i)
        {
            n = i;
            count = 1;
            while(n > 1)
            {
                if(n % 2 == 0)
                    n = n / 2;
                else
                    n = 3 * n + 1;
                count++;
            }

            if(res < count)
                res = count;
        }
        printf("%d\n", res);
    }

    return 0;
}
