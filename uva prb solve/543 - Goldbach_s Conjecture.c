#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int n, i, r, p, q, flag;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        flag = 0;
        for(i = 3; i <= (n/2); ++i)
        {
            r = prime(i);
            if(r == 1)
            {
                p = n - i;
                q = prime(p);
                if(q == 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            printf("%d = %d + %d\n", n, i, p);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}

int prime(int n)
{
    int i, flag = 1;
    for(i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        return 1;
    else
        return 0;
}
