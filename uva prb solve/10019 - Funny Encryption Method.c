#include <stdio.h>
#include <math.h>

int one(int n);
int dec(int n);

int main()
{
    int n, i, x, y, d, t;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        scanf("%d", &n);
        d = dec(n);
        x = one(n);
        y = one(d);
        printf("%d %d\n", x, y);
    }

    return 0;
}

int one(int n)
{
    int x = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            x++;
        }
        n /= 2;
    }

    return x;
}

int dec(int n)
{
    int sum = 0, i = 0, d;
    while(n > 0)
    {
        d = n % 10;
        sum += d * pow(16, i);
        n /= 10;
        i++;
    }

    return sum;
}
