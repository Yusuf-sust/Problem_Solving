#include <stdio.h>
#include <string.h>

unsigned long long fact(int n)
{
    int i;
    unsigned long long sum = 1;
    if(n == 0)
    {
        return 1;
    }
    for(i = 1; i <= n; ++i)
    {
        sum *= i;
    }

    return sum;
}

int main()
{
    int t, len, count, i, j, k;
    unsigned long long sum;
    char s[100];
    scanf("%d ", &t);
    for(i = 1; i <= t; ++i)
    {
        gets(s);
        len = strlen(s);
        sum = fact(len);
        for(j = 65; j <= 90; ++j)
        {
            count = 0;
            for(k = 0; k < len; ++k)
            {
                if(j == (int)s[k])
                {
                    count++;
                }
            }
            sum /= fact(count);
        }
        printf("Data set %d: %llu\n", i, sum);
    }

    return 0;
}
