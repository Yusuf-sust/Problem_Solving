#include <stdio.h>

int main()
{
    int n, m, i, j, a, b, c;
    long long int d, sum;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        sum = 0;
        scanf("%d", &m);
        for(j = 0; j < m; ++j){
            scanf("%d %d %d", &a, &b, &c);
            d = a * c;
            sum += d;
        }
       printf("%lld\n", sum);
    }

    return 0;
}
