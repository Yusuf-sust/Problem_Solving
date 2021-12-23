#include <stdio.h>

int main()
{
    long long int arr[1000], a = 0, b = 1;
    int n, i;
    arr[0] = a, arr[1] = b;
    for(i = 2; i <= 100; ++i)
    {
        arr[i] = a + b + 1;
        a = b;
        b = arr[i];
    }
    while(scanf("%d", &n) == 1)
    {
        if(n == -1)
            break;
        printf("%lld %lld\n", arr[n], arr[n+1]);
    }

    return 0;

}
