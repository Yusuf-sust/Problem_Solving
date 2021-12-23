#include <stdio.h>

int main()
{
    int n, m, x, y, z, a, sum;
    while(scanf("%d%d", &n, &m) == 2){
        sum = n;
        while(n >= m){
            x = n / m;
            y = n % m;
            sum += x;
            n = x + y;
        }
        printf("%d\n", sum);
    }

    return 0;
}
