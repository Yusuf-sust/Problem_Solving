#include <stdio.h>

int main()
{
    long long int n, x;
    while(scanf("%lld", &n) == 1){
        if(n < 0)
            break;
        else{
            x = ((n * ( n + 1)) / 2) + 1;
            printf("%lld\n", x);
        }
    }

    return 0;
}
