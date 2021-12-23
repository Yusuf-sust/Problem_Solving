#include <stdio.h>
#include <string.h>

int ar[10000];

int happy(long long int n);
int square(int n);

int main()
{
    int t, m, i;
    long long int n;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        memset(ar,0,sizeof(ar));
        scanf("%lld", &n);
        m = happy(n);
        if(m)
        {
            printf("Case #%d: %d is a Happy number.\n", i, n);
        }
        else
        {
            printf("Case #%d: %d is an Unhappy number.\n", i, n);
        }
    }

    return 0;
}

int happy(long long int n)
{
    int p, flag = 1;
    while(n != 1)
    {
        p = square(n);
        if(ar[p] == 1)
        {
            flag = 0;
            break;
        }
        else
        {
            ar[p] = 1;
        }
        n = p;
    }
    if(flag){
        return 1;
    }
    else{
        return 0;
    }
}

int square(int n)
{
    int sum = 0, p;
    while(n > 0)
    {
        p = n % 10;
        sum += p * p;
        n /= 10;
    }

    return sum;
}
