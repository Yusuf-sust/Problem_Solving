#include <stdio.h>

int main()
{
    int i, n, m, d, a;
    long long int sum;
    while(scanf("%d %d", &n, &m) == 2){
        if(n == 0 && m == 0)
            break;
        sum = 0;
        for(i = n; i <= m; ++i){
            a = i;
            while(a > 0){
                d = a % 10;
                sum += d;
                a = a / 10;
            }
        }
        printf("%lld\n", sum);
    }

    return 0;
}
