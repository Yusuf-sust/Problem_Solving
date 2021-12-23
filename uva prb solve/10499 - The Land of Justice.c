#include <stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld", &n) == 1){
        if(n < 0)
            break;
        else if(n == 0 || n == 1)
            printf("0%%\n");
        else{
            n = (n * 100) / 4;
            printf("%lld%%\n", n);
        }
    }

    return 0;
}
