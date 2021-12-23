#include <stdio.h>

int main()
{
    int arr[10000];
    long long int n;
    while(scanf("%lld", &n) == 1)
    {
        if(n == 0)
            break;
        int j, i = 0;
        int c = 0;
        while(n > 0)
        {
            arr[i] = n % 2;
            if(arr[i] == 1)
                c++;
            n = n / 2;
            i++;
        }
        printf("The parity of ");
        for(j = i - 1; j >= 0; --j)
        {
            printf("%d", arr[j]);
        }
        printf(" is %d (mod 2).\n", c);
    }

    return 0;
}
