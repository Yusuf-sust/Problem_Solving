#include <stdio.h>

long long int ar1[1000001], ar2[1000001];
int m;

int binary(long long int n);

int main()
{
    int i, sum, n, r;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;
        sum = 0;
        for(i = 0; i < n; ++i)
            scanf("%lld", &ar1[i]);
        for(i = 0; i < m; ++i)
            scanf("%lld", &ar2[i]);
        for(i = 0; i < n; ++i)
        {
            r = binary(ar1[i]);
            if(r == 1)
                sum += 1;
        }
        printf("%d\n", sum);
    }

    return 0;
}

int binary(long long int n)
{
    int start = 0, mid, end = m - 1;
    do
    {
        mid = (int)((start + end) / 2);
        if(ar2[mid] == n)
        {
            return 1;
            break;
        }
        else if(ar2[mid] > n)
            end = mid - 1;
        else
            start = mid + 1;
    }
    while(start <= end);
    if(start > end)
        return 0;
}
