#include <stdio.h>

int main()
{
    long long int n, m, ans, i;
    while(scanf("%lld %lld", &n, &m) == 2){
        ans = 1;
        if(n < m){
            long long int temp = n;
            n = m;
            m = temp;
        }
        for(i = n - m + 1; i <= n; ++i){
            ans *= i;
            while(ans % 10 == 0)
                ans /= 10;
            ans %= 10000000000;
        }
        ans %= 10;
        printf("%lld\n", ans);
    }

    return 0;
}
