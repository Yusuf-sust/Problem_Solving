#include <stdio.h>

int a[1000010];

int add(int n);

int main()
{
    int n, m, i, j, t;
    for(i = 1; i <= 100001; i++)
    {
        m = add(i) + i;
        if(a[m] == 0 || a[m] > i)
            a[m] = i;
    }
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", a[n]);
    }
    return 0;
}

int add(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
