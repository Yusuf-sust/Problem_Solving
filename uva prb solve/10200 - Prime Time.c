#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int i, count = 0, total, a, b, f, arr[100000], x;
    double percent;
    int n;
    for(i = 0; i <= 10099; ++i)
    {
        n = i * i + i + 41;
        f = prime(n);
        if(f)
            count++;
        arr[i] = count;
    }
    while(scanf("%d%d", &a, &b) == 2)
    {
        total = b - a + 1;

        if(a == 0)
            x = arr[b];
        else
            x = arr[b] - arr[a - 1];

        percent = ((double)x * 100.00) / (double)total;
        percent += 1e-5;
        printf("%.2lf\n", percent);
    }

    return 0;
}

int prime(int n)
{
    int i, flag = 1;

    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        return 1;
    else
        return 0;
}
