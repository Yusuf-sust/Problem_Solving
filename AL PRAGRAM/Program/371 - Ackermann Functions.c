#include <stdio.h>

int main()
{
    int s,e, count, res, a;
    long long int n;
    while(scanf("%d%d", &s, &e) == 2)
    {
        if(s == 0 && e == 0)
            break;
        res = 0;
        if(s > e)
        {
            int temp = s;
            s = e;
            e = temp;

        }
        for(int i = s; i <= e; ++i)
        {
            n = i;
            count = 0;
            do
            {
                if(n % 2 == 0)
                    n = n / 2;
                else
                    n = 3 * n + 1;
                count++;
            }
            while(n > 1);

            if(res < count)
            {
                res = count;
                a = i;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n", s, e, a, res);
    }

    return 0;
}

