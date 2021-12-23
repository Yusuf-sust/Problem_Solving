#include <stdio.h>

int main()
{
    int i, n, x , y , z;
    long long int sum;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        scanf("%d%d%d", &x, &y, &z);
        sum = (x * y) + (y * z) + (x * z);
        printf("Case %d: %lld\n", i, sum);
    }

    return 0;
}
