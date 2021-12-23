#include <stdio.h>

int main()
{
    long long int n, a;
    while(scanf("%lld", &n) == 1){
        if(n == 0)
            break;
        else if(n <= 100)
            printf("f91(%lld) = 91\n", n);
        else{
            a = n - 10;
            printf("f91(%lld) = %lld\n", n, a);
        }
    }

    return 0;
}
