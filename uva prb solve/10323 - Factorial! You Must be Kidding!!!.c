#include <stdio.h>

int main()
{
    long long int b;
    int i, n;
    while(scanf("%d", &n) == 1)
    {
        if(n > 13)
        {
            printf("Overflow!\n");
        }
        else if(n < 0 && n % 2 == -1){
            printf("Overflow!\n");
        }
        else if(n < 8)
        {
            printf("Underflow!\n");
        }
        else if( n >= 8 && n <= 13)
        {
            b = 1;
            for(i = 1; i <= n; ++i)
            {
                b = b * i;
            }
            printf("%lld\n", b);
        }
    }

    return 0;
}
